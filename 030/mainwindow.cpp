#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QMessageBox>

void MainWindow::openTable()
{
    tabModel=new QSqlRelationalTableModel(this,DB);
    tabModel->setTable("studInfo");//指定从哪一个数据库表格中选取数据
    tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置自动提交
    tabModel->setSort(tabModel->fieldIndex("studID"),Qt::AscendingOrder);//设置升序排列
    selModel=new QItemSelectionModel(tabModel,this);
    ui->tableView->setModel(tabModel);
    ui->tableView->setSelectionModel(selModel);

    //设置表头
    tabModel->setHeaderData(tabModel->fieldIndex("studID"),Qt::Horizontal,"学号");
    tabModel->setHeaderData(tabModel->fieldIndex("name"),Qt::Horizontal,"姓名");
    tabModel->setHeaderData(tabModel->fieldIndex("gender"),Qt::Horizontal,"性别");
    tabModel->setHeaderData(tabModel->fieldIndex("departID"),Qt::Horizontal,"学院");
    tabModel->setHeaderData(tabModel->fieldIndex("majorID"),Qt::Horizontal,"专业");

    //通过外建表格连接数据
    tabModel->setRelation(tabModel->fieldIndex("departID"),QSqlRelation("departs","departID","depart"));
    tabModel->setRelation(tabModel->fieldIndex("majorID"),QSqlRelation("majors","majorID","major"));

    //使用自带的代理
    ui->tableView->setItemDelegate(new QSqlRelationalDelegate(ui->tableView));
    //查询表格，遍历表格
    tabModel->select();
    ui->action_open->setEnabled(false);
    ui->action_add->setEnabled(true);
    ui->action_insert->setEnabled(true);
    ui->action_delete->setEnabled(true);
    ui->action_blockList->setEnabled(true);

    connect(selModel,&QItemSelectionModel::currentRowChanged,this,&MainWindow::do_currentChanged);

}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tableView);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectItems);//设置选择小隔间
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);//一次只能选择一个，不能多选
    ui->tableView->setAlternatingRowColors(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_open_triggered()
{
    QString aFile=QFileDialog::getOpenFileName(this,"请选择文件","","数据库文件(*.db)");
    if(aFile.isEmpty()){
        return;
    }
    else{
        DB=QSqlDatabase::addDatabase("QSQLITE");
        DB.setDatabaseName(aFile);
        if(!DB.open()){
            QMessageBox::warning(this,"警告","打开数据库失败！"+DB.lastError().text());
        }
        else{
            openTable();
        }
    }
}


void MainWindow::on_action_add_triggered()
{
    tabModel->insertRow(tabModel->rowCount());
    QModelIndex curIndex=tabModel->index(tabModel->rowCount()-1,0);
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}


void MainWindow::on_action_insert_triggered()
{
    int curRow=selModel->currentIndex().row();
    tabModel->insertRow(curRow);
    QModelIndex curIndex=tabModel->index(curRow,0);
    selModel->clearSelection();
    selModel->setCurrentIndex(curIndex,QItemSelectionModel::Select);
}


void MainWindow::on_action_delete_triggered()
{
    QSqlRecord rec=tabModel->record(selModel->currentIndex().row());
    int studID=rec.value("studID").toInt();
    QSqlQuery query;
    query.prepare("delete from studInfo where studID=:studID");
    query.bindValue(":studID",studID);
    if(!query.exec()){
        QMessageBox::warning(this,"警告","删除失败！"+query.lastError().text());
    }
    else{
        tabModel->select();
        tabModel->removeRow(selModel->currentIndex().row());
        tabModel->submitAll();
    }
}


void MainWindow::on_action_save_triggered()
{
    bool res=tabModel->submitAll();
    if(!res){
        QMessageBox::warning(this,"警告","保存失败！"+tabModel->lastError().text());
    }
    else{
        QMessageBox::information(this,"信息","保存成功！");
        ui->action_save->setEnabled(false);
        ui->action_cancel->setEnabled(false);
    }
}

void MainWindow::do_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
    Q_UNUSED(current);
    Q_UNUSED(previous);
    ui->action_save->setEnabled(tabModel->isDirty());
    ui->action_cancel->setEnabled(tabModel->isDirty());
}


void MainWindow::on_action_cancel_triggered()
{
    tabModel->revertAll();
    ui->action_save->setEnabled(false);
    ui->action_cancel->setEnabled(false);
}


void MainWindow::on_action_blockList_triggered()
{
    QSqlRecord rec=tabModel->record();
    QString str;
    for(int i=0;i<rec.count();++i){
        str+=rec.fieldName(i)+"\n";
    }
    QMessageBox::information(this,"信息","所有字段名称为：\n"+str);
}

