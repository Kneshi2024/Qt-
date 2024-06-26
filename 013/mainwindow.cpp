#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_List<<"北京"<<"上海"<<"广东"<<"深圳"<<"江苏";
    m_model=new QStringListModel(this);
    //中间模型
    m_model->setStringList(m_List);
    //设置listview的模型
    ui->listView->setModel(m_model);
    ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_model->setStringList(m_List);
}


void MainWindow::on_pushButton_2_clicked()
{
    m_model->removeRows(0,m_model->rowCount());
}


void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked){
        ui->listView->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    }
    else{
        ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    m_model->insertRow(m_model->rowCount());
    QModelIndex index=m_model->index(m_model->rowCount()-1);
    m_model->setData(index,"new Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_6_clicked()
{
    QModelIndex index=ui->listView->currentIndex();
    m_model->insertRow(index.row());
    m_model->setData(index,"insert Item",Qt::DisplayRole);
    ui->listView->setCurrentIndex(index);
}


void MainWindow::on_pushButton_8_clicked()
{
    QModelIndex index;
    int currRow=ui->listView->currentIndex().row();
    //减1,会与上一个数并排，系统自动将后一个数向上移
    m_model->moveRow(index,currRow,index,currRow-1);
}


void MainWindow::on_pushButton_9_clicked()
{
    QModelIndex index;
    int currRow=ui->listView->currentIndex().row();
    //加1会与下一个数字并排，而系统自动会把后面并排的数向上移，所以要加2
    m_model->moveRow(index,currRow,index,currRow+2);
}


void MainWindow::on_pushButton_7_clicked(bool checked)
{
    if(checked){//升序
        m_model->sort(0,Qt::AscendingOrder);
    }
    else{//降序
        m_model->sort(0,Qt::DescendingOrder);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_pushButton_10_clicked()
{
    ui->plainTextEdit->clear();
    QStringList tempList=m_model->stringList();
    for(int i=0;i<tempList.size();++i){
        ui->plainTextEdit->appendPlainText(tempList[i]);
    }
}


void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString str=QString::asprintf("模型索引：column=%d，row=%d",index.column(),index.row());
    str=m_model->data(index,Qt::DisplayRole).toString()+"  "+str;
    ui->statusbar->showMessage(str);
}

