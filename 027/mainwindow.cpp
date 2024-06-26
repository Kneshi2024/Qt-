#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QSqlError>
#include<QDebug>
#include<QSqlRecord>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->splitter);
    //设置为单选
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    //设置颜色为间隔
    ui->tableView->setAlternatingRowColors(true);
}

void MainWindow::openTable()
{
    //创建模型，打开数据表格
    tabModel=new QSqlTableModel(this,DB);
    //设置提交模式
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    //创建表格
    tabModel->setTable("employee");
    //设置排序方式
    tabModel->setSort(tabModel->fieldIndex("empNo"),Qt::AscendingOrder);

    if (!DB.open()) {
        QMessageBox::critical(this, "警告", "数据库连接失败！\n" + DB.lastError().text());
        return;
    }

    if(!(tabModel->select())){
        QMessageBox::critical(this,"警告","数据库表格打开失败！"+tabModel->lastError().text());
    }
    else{
        showRecordNum();
    }
    tabModel->setHeaderData(tabModel->fieldIndex("empNo"),Qt::Horizontal,"工号");
    tabModel->setHeaderData(tabModel->fieldIndex("Name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("Gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("Birthday"),Qt::Horizontal,"出生日期");
    tabModel->setHeaderData(tabModel->fieldIndex("Province"),Qt::Horizontal,"出生省份");
    tabModel->setHeaderData(tabModel->fieldIndex("Department"),Qt::Horizontal,"部门");
    tabModel->setHeaderData(tabModel->fieldIndex("Salary"),Qt::Horizontal,"薪资");
    // tabModel->setHeaderData(tabModel->fieldIndex("Memo"),Qt::Horizontal,"备注");
    // tabModel->setHeaderData(tabModel->fieldIndex("Photo"),Qt::Horizontal,"照片");

    selModel=new QItemSelectionModel(tabModel,this);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);
    //将特定的行隐藏
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Memo"),true);
    ui->tableView->setColumnHidden(tabModel->fieldIndex("Photo"),true);

    //代理
    QStringList list;
    list<<"男"<<"女";
    delegateSex=new TComboBoxDelegate(this);
    delegateSex->setItems(list,false);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Gender"),delegateSex);
    list.clear();
    list<<"程序员"<<"运维工程师"<<"后端程序员";
    delegateDepart.setItems(list,false);
    ui->tableView->setItemDelegateForColumn(tabModel->fieldIndex("Department"),&delegateDepart);

    //映射处理
    dataMapper=new QDataWidgetMapper(this);
    dataMapper->setModel(tabModel);
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    dataMapper->addMapping(ui->spinBox,tabModel->fieldIndex("empNo"));
    dataMapper->addMapping(ui->lineEdit,tabModel->fieldIndex("Name"));
    dataMapper->addMapping(ui->comboBox_sex,tabModel->fieldIndex("Gender"));
    dataMapper->addMapping(ui->comboBox_birthDay,tabModel->fieldIndex("Birthday"));
    dataMapper->addMapping(ui->comboBox_birthProvince,tabModel->fieldIndex("Province"));
    dataMapper->addMapping(ui->comboBox_department,tabModel->fieldIndex("Department"));
    dataMapper->addMapping(ui->spinBox_salary,tabModel->fieldIndex("Salary"));
    dataMapper->addMapping(ui->plainTextEdit_2,tabModel->fieldIndex("Memo"));
    dataMapper->toFirst();
    dataMapper->toNext();
    ui->action_add->setEnabled(true);
    ui->action_open->setEnabled(false);
    ui->action_delete->setEnabled(true);
    ui->action_insert->setEnabled(true);
    ui->action_increase->setEnabled(true);
    //ui->action_save->setEnabled(true);
    ui->groupBox_sort->setEnabled(true);
    ui->groupBox_filter->setEnabled(true);

    //获取字段名，更新comboBox
    QSqlRecord emptyRec=tabModel->record();
    for(int i=0;i<emptyRec.count();++i){
        ui->comboBox_sort->addItem(emptyRec.fieldName(i));
    }

    //连接选择区域改变，映射跟着改变
    connect(selModel,&QItemSelectionModel::currentChanged,this,&MainWindow::do_currentChanged);
    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showRecordNum()
{
    ui->statusbar->showMessage(QString("记录条数为%1").arg(tabModel->rowCount()));
}

void MainWindow::on_action_open_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择文件","","SQLite数据库(*.db)");
    if(aFile.isEmpty()){
        return;
    }
    DB=QSqlDatabase::addDatabase("QSQLITE");//添加驱动
    DB.setDatabaseName(aFile);
    if (!DB.open()) {
        QMessageBox::critical(this, "警告", "数据库连接失败！\n" + DB.lastError().text());
        return;
    }
    //qDebug()<<"数据库连接成功";
    if(!DB.isValid()){
        QMessageBox::warning(this,"提示","添加驱动失败");
        return;
    }
    else{
        //qDebug()<<"添加驱动成功";
        openTable();//打开数据库表格
    }
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->action_save->setEnabled(tabModel->isDirty());
    //qDebug()<<tabModel->isDirty();
    ui->action_cancel->setEnabled(tabModel->isDirty());
    //qDebug()<<tabModel->isDirty();
}

void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(!current.isValid()){
        ui->label_9->clear();
        return;
    }
    else{
        //将两个照片按钮打开
        ui->action_setPhoto->setEnabled(true);
        ui->action_clearPhoto->setEnabled(true);
        //映射到widget
        dataMapper->setCurrentIndex(current.row());
        //获取当前行记录
        QSqlRecord curRec=tabModel->record(current.row());
        //设置照片
        if(curRec.isNull("Photo")){
            ui->label_9->clear();
        }
        else{
            QPixmap pixmap;
            pixmap.loadFromData(curRec.value("Photo").toByteArray());
            ui->label_9->setPixmap(pixmap.scaledToWidth(ui->label_9->width()));
        }
    }
}


void MainWindow::on_action_add_triggered()
{
    QSqlRecord rec=tabModel->record();
    tabModel->insertRecord(tabModel->rowCount(),rec);

    //选中添加进去的新行的第一列
    selModel->clearSelection();
    selModel->setCurrentIndex(tabModel->index(tabModel->rowCount()-1,0),QItemSelectionModel::Select);
    showRecordNum();
}


void MainWindow::on_action_insert_triggered()
{
    QModelIndex curIndex=ui->tableView->currentIndex();
    int row=curIndex.row();
    QSqlRecord rec=tabModel->record();
    tabModel->insertRecord(row,rec);

    //选中添加进去的新行的第一列
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
    showRecordNum();
}


void MainWindow::on_action_delete_triggered()
{
    QModelIndex curIndex=ui->tableView->currentIndex();
    int row=curIndex.row();
    tabModel->removeRow(row);
    showRecordNum();
}


void MainWindow::on_action_setPhoto_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择照片","","招聘(*.jpg *.jpeg *.png)");
    if(aFile.isEmpty()){
        return;
    }
    QFile *file=new QFile(aFile);
    if(file->open(QIODevice::ReadOnly)){
        QByteArray data=file->readAll();
        file->close();
        delete file;
        QSqlRecord rec=tabModel->record(selModel->currentIndex().row());
        rec.setValue("Photo",data);
        tabModel->setRecord(selModel->currentIndex().row(),rec);

        QPixmap pixmap;
        pixmap.load(aFile);
        ui->label_9->setPixmap(pixmap.scaledToWidth(ui->label_9->width()));
    }
}


void MainWindow::on_action_clearPhoto_triggered()
{
    QSqlRecord rec=tabModel->record(selModel->currentIndex().row());
    rec.setNull("Photo");

    tabModel->setRecord(selModel->currentIndex().row(),rec);
    ui->label_9->clear();
}


void MainWindow::on_action_increase_triggered()
{
    if(tabModel->rowCount()==0){
        return;
    }
    else{
        for(int i=0;i<tabModel->rowCount();++i){
            QSqlRecord rec=tabModel->record(i);
            rec.setValue("Salary",rec.value("Salary").toFloat()*1.1);
            tabModel->setRecord(i,rec);
        }
    }
    if(tabModel->submitAll()){
        QMessageBox::information(this,"消息","涨工资完毕");
    }
}


void MainWindow::on_action_save_triggered()
{
    bool res=tabModel->submitAll();
    if(!res){
        QMessageBox::information(this,"信息","保存失败"+tabModel->lastError().text());
    }
    else{
        ui->action_save->setEnabled(false);
        ui->action_cancel->setEnabled(false);
        QMessageBox::information(this,"信息","保存成功"+tabModel->lastError().text());
    }
    showRecordNum();
}


void MainWindow::on_action_cancel_triggered()
{
    tabModel->revertAll();
    ui->action_save->setEnabled(false);
    ui->action_cancel->setEnabled(false);
    showRecordNum();
}


void MainWindow::on_comboBox_sort_currentIndexChanged(int index)
{
    if(ui->radioButton_rise->isChecked()){
        tabModel->sort(index,Qt::AscendingOrder);
    }
    else if(ui->radioButton_down->isChecked()){
        tabModel->sort(index,Qt::DescendingOrder);
    }
    //tabModel->select();
}


void MainWindow::on_radioButton_rise_clicked()
{
    tabModel->sort(ui->comboBox_sort->currentIndex(),Qt::AscendingOrder);
}


void MainWindow::on_radioButton_down_clicked()
{
    tabModel->sort(ui->comboBox_sort->currentIndex(),Qt::DescendingOrder);
}


void MainWindow::on_radioButton__man_clicked()
{
    tabModel->setFilter("Gender='男'");
    showRecordNum();
}


void MainWindow::on_radioButton_womon_clicked()
{
    tabModel->setFilter("Gender='女'");
    showRecordNum();
}


void MainWindow::on_radioButton_showAll_clicked()
{
    tabModel->setFilter("");
    showRecordNum();
}

