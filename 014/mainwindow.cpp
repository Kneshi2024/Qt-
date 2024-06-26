#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{   
    ui->setupUi(this);
    labCurFile=new QLabel("当前文件",this);
    labCurFile->setMinimumWidth(200);
    labCellText=new QLabel("当前单元格",this);
    labCellText->setMinimumWidth(200);
    labCellPos=new QLabel("单元格内容",this);
    labCellPos->setMinimumWidth(200);
    ui->statusbar->addWidget(labCurFile);
    ui->statusbar->addWidget(labCellText);
    ui->statusbar->addWidget(labCellPos);

    m_model=new QStandardItemModel(2,FixedColumnNumber,this);
    m_selection=new QItemSelectionModel(m_model,this);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
    //允许用户通过 Ctrl 键（在大多数平台上）或 Shift 键来添加或选择多个连续的项
    ui->tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    //这意味着当用户选择一个项时，整个项都会被选中，而不是仅仅选中项的一部分
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);
    connect(m_selection,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initModelData(QStringList &fileContent)
{
    int rowNum=fileContent.size();
    m_model->setRowCount(rowNum-1);//因为第一行是标题

    QString header=fileContent[0];
    const static QRegularExpression skip(R"(\s+)");
    //拆分标题行
    QStringList headerList=header.split(skip,Qt::SkipEmptyParts);
    m_model->setHorizontalHeaderLabels(headerList);
    QStandardItem *aItem;
    int j;
    for(int i=1;i<rowNum;++i){
        QString lineText=fileContent[i];
        QStringList lineTextList=lineText.split(skip,Qt::SkipEmptyParts);
        for(j=0;j<FixedColumnNumber-1;++j){
            aItem=new QStandardItem(lineTextList[j]);
            m_model->setItem(i-1,j,aItem);
        }
        aItem=new QStandardItem(headerList[j]);
        aItem->setCheckable(true);
        aItem->setBackground(QBrush(Qt::yellow));
        if(lineTextList[j]=="0"){
            aItem->setCheckState(Qt::Unchecked);
        }
        else{
            aItem->setCheckState(Qt::Checked);
        }
        m_model->setItem(i-1,j,aItem);
    }
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(current.isValid()){
        labCellPos->setText(QString::asprintf("当前单元格：%d行，%d列",current.row(),current.column()));
        QStandardItem *aItem=m_model->itemFromIndex(current);
        labCellText->setText("单元格内容为:"+aItem->text());
        ui->action_bold->setChecked(aItem->font().bold());
    }
}

void MainWindow::on_action_open_triggered()
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString fileName=QFileDialog::getOpenFileName(this,"打开一个文件",curPath,"数据文件(*.txt);;所有文件(*.*)");
    if(fileName.isEmpty()){
        return;
    }
    QFile aFile(fileName);
    if(!aFile.open(QIODevice::ReadOnly|QIODevice::Text)){
        return;
    }
    QStringList fileContent;
    QTextStream aStream(&aFile);
    ui->plainTextEdit->clear();
    while(!aStream.atEnd()){
        QString str=aStream.readLine();
        ui->plainTextEdit->appendPlainText(str);
        fileContent.append(str);
    }
    aFile.close();
    labCurFile->setText("文件名称："+fileName);
    ui->action_deleteRow->setEnabled(true);
    ui->action_insertRow->setEnabled(true);
    ui->action_addRow->setEnabled(true);
    initModelData(fileContent);
}


void MainWindow::on_action_preview_triggered()
{
    QString str;
    QStandardItem *item;
    ui->plainTextEdit->clear();
    //打印预览标题行
    for(int i=0;i<m_model->columnCount();++i){
        item=m_model->horizontalHeaderItem(i);
        str+=item->text();
        str+="\t";
    }
    ui->plainTextEdit->appendPlainText(str);
    //打印预览表格
    int j;
    for(int i=0;i<m_model->rowCount();++i){
        str.clear();
        for(j=0;j<m_model->columnCount()-1;++j){
            item=m_model->item(i,j);
            if(item==nullptr){
                return;
            }
            str+=item->text();
            str+="\t";
        }
        item=m_model->item(i,j);
        if(item==nullptr){
            return;
        }
        if(item->checkState()==Qt::Checked){
            str+="是";
        }
        else{
            str+="否";
        }
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_action_addRow_triggered()
{
    QList<QStandardItem*>itemList;
    QStandardItem *item;
    for(int i=0;i<m_model->columnCount()-1;++i){
        item=new QStandardItem("0");
        itemList<<item;
    }
    QString str=m_model->headerData(m_model->columnCount()-1,Qt::Horizontal,Qt::DisplayRole).toString();
    item=new QStandardItem(str);
    item->setCheckable(true);
    item->setBackground(QBrush(Qt::yellow));
    itemList<<item;
    m_model->insertRow(m_model->rowCount(),itemList);
    m_selection->clearSelection();
    m_selection->setCurrentIndex(m_model->index(m_model->rowCount()-1,0),QItemSelectionModel::Select);
}


void MainWindow::on_action_insertRow_triggered()
{
    QList<QStandardItem*>itemList;
    QStandardItem *item;
    for(int i=0;i<m_model->columnCount()-1;++i){
        item=new QStandardItem("0");
        itemList<<item;
    }
    QString str=m_model->headerData(m_model->columnCount()-1,Qt::Horizontal,Qt::DisplayRole).toString();
    item=new QStandardItem(str);
    item->setCheckable(true);
    item->setBackground(QBrush(Qt::yellow));
    itemList<<item;
    m_model->insertRow(m_selection->currentIndex().row(),itemList);
    //用来选中当前项
    //m_selection->clearSelection();
    m_selection->setCurrentIndex(m_selection->currentIndex(),QItemSelectionModel::Select);
}


void MainWindow::on_action_deleteRow_triggered()
{
    QModelIndex curIndex=m_selection->currentIndex();
    if(curIndex.row()!=m_model->rowCount()-1){
        m_model->removeRow(curIndex.row());
        m_selection->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    }
    else{
        m_model->removeRow(curIndex.row());
    }
}


void MainWindow::on_action_left_triggered()
{
    QStandardItem *item;
    if(!m_selection->hasSelection()){
        return;
    }
    QModelIndexList indexList=m_selection->selectedIndexes();
    for(auto index:indexList){
        item=m_model->itemFromIndex(index);
        item->setTextAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    }
}


void MainWindow::on_action_center_triggered()
{
    QStandardItem *item;
    if(!m_selection->hasSelection()){
        return;
    }
    QModelIndexList indexList=m_selection->selectedIndexes();
    for(auto index:indexList){
        item=m_model->itemFromIndex(index);
        item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    }
}


void MainWindow::on_action_right_triggered()
{
    QStandardItem *item;
    if(!m_selection->hasSelection()){
        return;
    }
    QModelIndexList indexList=m_selection->selectedIndexes();
    for(auto index:indexList){
        item=m_model->itemFromIndex(index);
        item->setTextAlignment(Qt::AlignRight|Qt::AlignVCenter);
    }
}


void MainWindow::on_action_bold_triggered()
{
    QStandardItem *item;
    if(!m_selection->hasSelection()){
        return;
    }
    QModelIndexList indexList=m_selection->selectedIndexes();
    for(auto index:indexList){
        item=m_model->itemFromIndex(index);
        QFont font=item->font();
        if(ui->action_bold->isChecked()){
            font.setBold(true);
        }
        else{
            font.setBold(false);
        }
        item->setFont(font);
    }
}

