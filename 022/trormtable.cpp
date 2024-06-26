#include "trormtable.h"
#include "ui_trormtable.h"
#include"tdialog.h"
#include"tdialoglocate.h"
#include<QModelIndex>

TFormTable::TFormTable(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
    //初始化model和selection_model
    m_model=new QStandardItemModel(4,4,this);
    QStringList list;
    list<<"姓名"<<"性别"<<"年龄"<<"学号";
    m_model->setHorizontalHeaderLabels(list);
    m_selection=new QItemSelectionModel(m_model);
    ui->tableView->setModel(m_model);
    ui->tableView->setSelectionModel(m_selection);
    labPos=new QLabel("单元格坐标:",this);
    labPos->setMinimumWidth(200);
    labText=new QLabel("单元格内容:",this);
    labText->setMinimumWidth(200);
    ui->statusbar->addWidget(labPos);
    ui->statusbar->addWidget(labText);
    connect(m_selection,&QItemSelectionModel::currentChanged,this,&TFormTable::do_setLabelText);
}

TFormTable::~TFormTable()
{
    delete ui;
}

void TFormTable::on_action_setRowColNum_triggered()
{
    TDialog *dlgTableSize=new TDialog;
    dlgTableSize->setRowColumn(m_model->rowCount(),m_model->columnCount());
    //执行对话框
    int result=dlgTableSize->exec();
    //根据对话框中的选项，返回值给main
    if(result==QDialog::Accepted){
        m_model->setRowCount(dlgTableSize->getRow());
        m_model->setColumnCount(dlgTableSize->getColumn());
    }
    delete dlgTableSize;
}


void TFormTable::on_action_setHeader_triggered()
{
    if(dlgHeaders==nullptr){
        dlgHeaders=new TDialogHeaders;
    }
    QStringList curHeaders;
    for(int i=0;i<m_model->columnCount();++i){
        curHeaders.append(m_model->headerData(i,Qt::Horizontal,Qt::DisplayRole).toString());
    }
    dlgHeaders->setStringList(curHeaders);

    int result=dlgHeaders->exec();
    if(result==QDialog::Accepted){
        m_model->setHorizontalHeaderLabels(dlgHeaders->getList());
    }
}


void TFormTable::on_action_locateItem_triggered()
{
    TDialogLocate *dlgLocate=new TDialogLocate(this);
    //设置属性使他关闭的时候就自动删除
    dlgLocate->setAttribute(Qt::WA_DeleteOnClose);
    //将对话框属性设置为始终在顶层
    //dlgLocate->setWindowFlag(Qt::WindowStaysOnTopHint);  强制性的让窗口始终在其他窗口前面
    dlgLocate->setWindowFlag(Qt::WindowStaysOnTopHint);//非强制性的
    //初始化对话框
    dlgLocate->setSpinBoxRange(m_model->rowCount(),m_model->columnCount());//范围
    //将当前选中的单元格数据设置到对话框中的spinbox
    QModelIndex curIndex=m_selection->currentIndex();
    dlgLocate->setSpinBoxValue(curIndex.row(),curIndex.column());
    connect(dlgLocate,&TDialogLocate::cellTextChanged,this,&TFormTable::do_valueChanged);
    connect(dlgLocate,&TDialogLocate::changeActionEnable,ui->action_locateItem,&QAction::setEnabled);
    connect(this,&TFormTable::cellTextChanged,dlgLocate,&TDialogLocate::setSpinBoxValue);
    //显示出对话框
    dlgLocate->show();
    //设置为非模态，可以操控其他窗口
    dlgLocate->setModal(false);
}

void TFormTable::do_valueChanged(int row, int col, QString &text)
{
    //通过模型找到有变化的索引
    QModelIndex index=m_model->index(row,col);
    //移除当前被选中的项
    m_selection->clearSelection();
    //将选区设置为索引到的位置
    m_selection->setCurrentIndex(index,QItemSelectionModel::Select);
    //将当前位置看到的值设置为模型的数据
    m_model->setData(index,text,Qt::DisplayRole);
}


void TFormTable::on_tableView_clicked(const QModelIndex &index)
{
    emit cellTextChanged(index.row(),index.column());
}

void TFormTable::do_setLabelText(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(current.isValid()){
        labPos->setText(QString::asprintf("单元格坐标为: %d,%d",current.row(),current.column()));
        //通过索引找到对应的单元格item
        QStandardItem *item=m_model->itemFromIndex(current);
        labText->setText("单元格内容为: "+item->text());
    }
}

