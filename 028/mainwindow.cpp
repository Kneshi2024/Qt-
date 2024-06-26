#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::selectData()
{
    QString str="select empNo,Name,Gender,Birthday,Province,Department,Salary from employee order by empNo";
    queModel=new QSqlQueryModel(this);
    queModel->setQuery(str);
    if(queModel->lastError().isValid()){
        QMessageBox::warning(this,"警告","数据库查询错误！\n"+queModel->lastError().text());
        return;
    }
    showRecLine();
    ui->tableView->setModel(queModel);
    selModel=new QItemSelectionModel(queModel,this);
    ui->tableView->setSelectionModel(selModel);
    // QModelIndex *curIndex=new QModelIndex();
    // selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);

    //设置表头
    QSqlRecord rec=queModel->record();
    queModel->setHeaderData(rec.indexOf("empNo"),Qt::Horizontal,"工号",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Name"),Qt::Horizontal,"姓名",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Gender"),Qt::Horizontal,"性别",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Birthday"),Qt::Horizontal,"出生日期",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Province"),Qt::Horizontal,"出生省份",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Department"),Qt::Horizontal,"部门",Qt::EditRole);
    queModel->setHeaderData(rec.indexOf("Salary"),Qt::Horizontal,"薪资",Qt::EditRole);

    //数据的映射
    dataMapper=new QDataWidgetMapper(this);
    //与模型数据联系起来
    dataMapper->setModel(queModel);
    //设置为自动提交
    dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    //建立映射关系
    dataMapper->addMapping(ui->spinBox,rec.indexOf("empNo"));
    dataMapper->addMapping(ui->lineEdit,rec.indexOf("Name"));
    dataMapper->addMapping(ui->comboBox,rec.indexOf("Gender"));
    dataMapper->addMapping(ui->comboBox_2,rec.indexOf("Birthday"));
    dataMapper->addMapping(ui->comboBox_3,rec.indexOf("Province"));
    dataMapper->addMapping(ui->comboBox_4,rec.indexOf("Department"));
    dataMapper->addMapping(ui->spinBox_2,rec.indexOf("Salary"));
    //dataMapper->addMapping(ui->plainTextEdit,rec.indexOf("Memo"));
    //dataMapper->addMapping(ui->label_picture,rec.indexOf("Photo"));

    dataMapper->toFirst();
    ui->action_openDataBase->setEnabled(false);
    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentRowChanged);
}

void MainWindow::showRecLine()
{
    ui->statusbar->showMessage(QString("当前记录的条数%1").arg(queModel->rowCount()));
}

void MainWindow::reFreshTableView()
{
    int index=dataMapper->currentIndex();
    selModel->clearSelection();
    selModel->setCurrentIndex(queModel->index(index,0),QItemSelectionModel::Select);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_openDataBase_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"选择文件","","QSLite文件(*.db)");
    DB=QSqlDatabase::addDatabase("QSQLITE");
    DB.setDatabaseName(aFile);
    if(DB.open()){
        selectData();
    }
    else{
        QMessageBox::information(this,"信息","打开数据库失败");
    }
}

void MainWindow::do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(previous);
    if(!current.isValid()){
        ui->label_picture->clear();
        ui->plainTextEdit->clear();
    }
    else{
        dataMapper->setCurrentIndex(current.row());
        bool first=(current.row()==0);
        bool last=(current.row()==queModel->rowCount()-1);
        ui->action_firstRecord->setEnabled(!first);
        ui->action_previousRecord->setEnabled(!first);
        ui->action_lastRecord->setEnabled(!last);
        ui->action_nextRecord->setEnabled(!last);
    }

    //将图片和备注加入到右侧控件中区
    //找到当前所选中的行
    int row=current.row();
    //根据当前的行号取出所对应的记录
    QSqlRecord curRec=queModel->record(row);
    int empNo=curRec.value("empNo").toInt();
    //通过QSqlQuery查找特定列的数据
    QSqlQuery query;
    //输入sql数据库查询语句
    query.prepare("select Photo,Memo from employee where empNo=:Num");
    //将:Num和empNo连接起来
    query.bindValue(":Num",empNo);
    //执行query
    query.exec();
    query.first();

    //将拿到的数据填入对应的窗口部件
    QVariant va=query.value("Photo");
    if(!va.isValid()){
        ui->label_picture->clear();
    }
    else{
        QByteArray data=va.toByteArray();
        QPixmap pix;
        if(data.isEmpty()){
            QMessageBox::information(this,"信息","载入图片出错");
        }
        else{
            pix.loadFromData(data);
            ui->label_picture->setPixmap(pix.scaledToWidth(ui->label_picture->width()));
        }
    }

    //将拿到的备注写入对应窗口
    va=query.value("Memo");
    //qDebug()<<va.toString();
    ui->plainTextEdit->setPlainText(va.toString());
}


void MainWindow::on_action_firstRecord_triggered()
{
    dataMapper->toFirst();
    reFreshTableView();
}


void MainWindow::on_action_previousRecord_triggered()
{
    dataMapper->toPrevious();
    reFreshTableView();
}


void MainWindow::on_action_nextRecord_triggered()
{
    dataMapper->toNext();
    reFreshTableView();
}


void MainWindow::on_action_lastRecord_triggered()
{
    dataMapper->toLast();
    reFreshTableView();
}

