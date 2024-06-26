#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"tformdoc.h"
#include<QPainter>
#include<trormtable.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->tabWidget->clear();
    ui->tabWidget->setVisible(false);
    ui->tabWidget->setTabsClosable(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//嵌入式QWidget，有parent
void MainWindow::on_action_Embedded_Widget_triggered()
{
    TFormDoc *formDoc=new TFormDoc(this);
    formDoc->setAttribute(Qt::WA_DeleteOnClose);
    int curIndex=ui->tabWidget->addTab(formDoc,QString::asprintf("Doc %d",ui->tabWidget->count()));
    //设置当前标签页的索引，为下面函数做铺垫
    ui->tabWidget->setCurrentIndex(curIndex);
    ui->tabWidget->setVisible(true);
    //改变标签页的名称
    connect(formDoc,&TFormDoc::titleChanged,this,&MainWindow::do_tabTitleChanged);
}

void MainWindow::do_tabTitleChanged(QString text)
{
    int curIndex=ui->tabWidget->currentIndex();
    ui->tabWidget->setTabText(curIndex,text);
}


void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->widget(index)->close();
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);//this表示的是画板
    painter.drawPixmap(0,this->ui->toolBar->height(),this->width(),this->height()-ui->toolBar->height()-ui->statusbar->height(),QPixmap(":/back.jpg"));
}

//独立的QWidget窗口
void MainWindow::on_action_Indepent_Widget_triggered()
{
    TFormDoc *formDoc=new TFormDoc();
    formDoc->setAttribute(Qt::WA_DeleteOnClose);
    formDoc->setWindowTitle("独立的QWidget窗口，无parent");
    formDoc->setWindowOpacity(0.8);
    formDoc->show();
}

//嵌入式MainWindow，有parent
void MainWindow::on_action_Embedded_MainWindow_triggered()
{
    TFormTable *formTable=new TFormTable(this);
    formTable->setAttribute(Qt::WA_DeleteOnClose);
    int curIndex=ui->tabWidget->addTab(formTable,QString::asprintf("Table %d",ui->tabWidget->count()));
    //设置当前标签页的索引，为下面函数做铺垫
    ui->tabWidget->setCurrentIndex(curIndex);
    ui->tabWidget->setVisible(true);
}

//独立的MainWindow
void MainWindow::on_action_Independ_MainWindow_triggered()
{
    TFormTable *formTable=new TFormTable(this);//加入对象树有助于关闭主窗口，衍生窗口也跟着关闭
    formTable->setAttribute(Qt::WA_DeleteOnClose);
    formTable->setWindowTitle("独立的MainWindow");
    formTable->show();
}

