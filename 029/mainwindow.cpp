#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include"tdialogdata.h"
#include<QDebug>

void MainWindow::selectData()
{
    queModel=new QSqlQueryModel(this);
    selModel=new QItemSelectionModel(queModel);
    ui->tableView->setModel(queModel);
    ui->tableView->setSelectionModel(selModel);
    queModel->setQuery("select empNo,Name,Gender,Birthday,Province,Department,Salary from employee order by empNo");
    if(queModel->lastError().isValid()){
        QMessageBox::warning(this,"警告","数据库读取失败！"+queModel->lastError().text());
    }
    else{
        QSqlRecord rec=queModel->record();
        queModel->setHeaderData(rec.indexOf("empNo"),Qt::Horizontal,"工号");
        queModel->setHeaderData(rec.indexOf("Name"),Qt::Horizontal,"姓名");
        queModel->setHeaderData(rec.indexOf("Gender"),Qt::Horizontal,"性别");
        queModel->setHeaderData(rec.indexOf("Birthday"),Qt::Horizontal,"出生日期");
        queModel->setHeaderData(rec.indexOf("Province"),Qt::Horizontal,"出生省份");
        queModel->setHeaderData(rec.indexOf("Department"),Qt::Horizontal,"部门");
        queModel->setHeaderData(rec.indexOf("Salary"),Qt::Horizontal,"工资");

        //更新按钮的状态
        ui->action_open->setEnabled(false);
        ui->action_insert->setEnabled(true);
        ui->action_edit->setEnabled(true);
        ui->action_delete->setEnabled(true);
        ui->action_increase->setEnabled(true);
    }
}

void MainWindow::updateData(int curRow)
{
    QSqlRecord curRec=queModel->record(curRow);//这个curRec还不全
    int empNo=curRec.value("empNo").toInt();
    QSqlQuery query;
    query.prepare("select * from employee where empNo=:NUM");//查询一下更全的
    query.bindValue(":NUM",empNo);
    query.exec();
    query.first();
    if(!query.isValid()){
        qDebug()<<"query是无效的"+query.lastError().text();
        return;
    }
    curRec=query.record();
    TDialogData *dialogData=new TDialogData(this);
    dialogData->setSqlRecord(&curRec);
    if(dialogData->exec()==QDialog::Accepted){
        QSqlRecord *dataRec=dialogData->sqlRecord();
        query.prepare("update employee set Name=:Name,Gender=:Gender,Birthday=:Birthday,Province=:Province,"
"Department=:Department,Salary=:Salary,Memo=:Memo,Photo=:Photo where empNo=:empNo");
        query.bindValue(":empNo",dataRec->value("empNo"));
        query.bindValue(":Name",dataRec->value("Name"));
        query.bindValue(":Gender",dataRec->value("Gender"));
        query.bindValue(":Birthday",dataRec->value("Birthday"));
        query.bindValue(":Province",dataRec->value("Province"));
        query.bindValue(":Department",dataRec->value("Department"));
        query.bindValue(":Salary",dataRec->value("Salary"));
        query.bindValue(":Memo",dataRec->value("Memo"));
        query.bindValue(":Photo",dataRec->value("Photo"));

        if(!query.exec()){
            QMessageBox::warning(this,"警告","更新记录错误"+query.lastError().text());
        }
        else{
            queModel->setQuery(queModel->query().executedQuery());
        }
    }
    dialogData->setAttribute(Qt::WA_DeleteOnClose);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setAlternatingRowColors(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"请选择文件","","QSLite文件(*.db)");
    if(aFile.isEmpty()){
        return;
    }
    else{
        DB=QSqlDatabase::addDatabase("QSQLITE");//添加驱动
        DB.setDatabaseName(aFile);
        if(DB.open()){
            selectData();
        }
        else{
            QMessageBox::warning(this,"警告","数据库打开失败！"+DB.lastError().text());
        }
    }
}


void MainWindow::on_action_insert_triggered()
{
    QSqlQuery sqlQuery;
    sqlQuery.exec("select * from employee where empNo=-1");
    QSqlRecord curRecord=sqlQuery.record();
    curRecord.setValue("empNo",3000+queModel->rowCount());

    TDialogData *dialogData=new TDialogData(this);
    dialogData->setSqlRecord(&curRecord);
    if(dialogData->exec()==QDialog::Accepted){
        QSqlRecord *dataRecord=dialogData->sqlRecord();
        sqlQuery.prepare("insert into employee (empNo,Name,Gender,Birthday,Province,Department,Salary,Memo,Photo) "
                         "values(:empNo,:Name,:Gender,:Birthday,:Province,:Department,:Salary,:Memo,:Photo)");
        sqlQuery.bindValue(":empNo",dataRecord->value("empNo"));
        sqlQuery.bindValue(":Name",dataRecord->value("Name"));
        sqlQuery.bindValue(":Gender",dataRecord->value("Gender"));
        sqlQuery.bindValue(":Birthday",dataRecord->value("Birthday"));
        sqlQuery.bindValue(":Province",dataRecord->value("Province"));
        sqlQuery.bindValue(":Department",dataRecord->value("Department"));
        sqlQuery.bindValue(":Salary",dataRecord->value("Salary"));
        sqlQuery.bindValue(":Memo",dataRecord->value("Memo"));
        sqlQuery.bindValue(":Photo",dataRecord->value("Photo"));

        if(!sqlQuery.exec()){
            QMessageBox::warning(this,"警告","插入记录错误"+sqlQuery.lastError().text());
        }
        else{
            queModel->setQuery(queModel->query().executedQuery());
        }
    }

    dialogData->setAttribute(Qt::WA_DeleteOnClose);
}


void MainWindow::on_action_edit_triggered()
{
    int row=selModel->currentIndex().row();
    updateData(row);
}


void MainWindow::on_action_delete_triggered()
{
    int curRow=selModel->currentIndex().row();
    QSqlRecord curRec=queModel->record(curRow);
    int empNo=curRec.value("empNo").toInt();
    QSqlQuery query;
    query.prepare("delete from employee where empNo=:ID");
    query.bindValue(":ID",empNo);
    if(!query.exec()){
        QMessageBox::warning(this,"警告","删除记录出错！"+query.lastError().text());
    }
    else{
        queModel->setQuery("select *from employee");
        QMessageBox::information(this,"提示","删除记录成功！"+query.lastError().text());
    }
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    int row=index.row();
    updateData(row);
}


void MainWindow::on_action_increase_triggered()
{
    QSqlQuery updateQue;
    updateQue.exec("update employee set Salary=Salary+1000");
    queModel->setQuery("select empNo,Name,Gender,Birthday,Province,Department,Salary from employee order by empNo");
}

