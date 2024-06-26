#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<tformdoc.h>
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->mdiArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_new_triggered()
{
    TFormDoc *formDoc=new TFormDoc;
    ui->mdiArea->addSubWindow(formDoc);
    formDoc->show();

    ui->action_copy->setEnabled(true);
    ui->action_cut->setEnabled(true);
    ui->action_paste->setEnabled(true);
    ui->action_setFont->setEnabled(true);
}


void MainWindow::on_action_open_triggered()
{
    TFormDoc *formDoc;
    bool needNew=true;
    //一种情况是已经创建了窗口,直接在创建的窗口中显示打开的文件
    if(ui->mdiArea->subWindowList().size()>0){
        formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
        needNew=formDoc->m_isOpened;
    }
    //另一种情况,没有打开任何窗口的情况下，新建窗口，再显示文件
    if(needNew){
        formDoc=new TFormDoc(this);
        ui->mdiArea->addSubWindow(formDoc);
    }
    //拿到打开的文件文本
    QString filePath=QCoreApplication::applicationDirPath();
    QString fileName=QFileDialog::getOpenFileName(this,"打开一个文件",filePath,"C文件(*.cpp *.h);;文本文件(*.txt);;所有文件(*.*)");
    if(fileName.isEmpty()){
        return;
    }
    formDoc->loadCurrentFile(fileName);
    formDoc->show();

    ui->action_copy->setEnabled(true);
    ui->action_cut->setEnabled(true);
    ui->action_paste->setEnabled(true);
    ui->action_setFont->setEnabled(true);
}


void MainWindow::on_action_cut_triggered()
{
    TFormDoc *formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
    formDoc->textCut();
}


void MainWindow::on_action_copy_triggered()
{
    TFormDoc *formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
    formDoc->textCopy();
}


void MainWindow::on_action_paste_triggered()
{
    TFormDoc *formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
    formDoc->textPaste();
}


void MainWindow::on_action_setFont_triggered()
{
    TFormDoc *formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
    formDoc->setFont();
}

//设置视图模式
void MainWindow::on_actionMDI_triggered(bool checked)
{
    if(checked){
        ui->mdiArea->setViewMode(QMdiArea::TabbedView);
    }
    else{
        ui->mdiArea->setViewMode(QMdiArea::SubWindowView);
    }
    //设置标签可关闭
    ui->mdiArea->setTabsClosable(checked);
    //设置级联展开不可选中
    ui->action_cascade->setEnabled(!checked);
    //同上
    ui->action_tile->setEnabled(!checked);
}


void MainWindow::on_action_cascade_triggered()
{
    //设置为级联展开
    ui->mdiArea->cascadeSubWindows();
}


void MainWindow::on_action_tile_triggered()
{
    //设置为平铺展开
    ui->mdiArea->tileSubWindows();
}


void MainWindow::on_action_closeAll_triggered()
{
    ui->mdiArea->closeAllSubWindows();
}


void MainWindow::on_action_save_triggered()
{
    TFormDoc *formDoc=dynamic_cast<TFormDoc*>(ui->mdiArea->currentSubWindow()->widget());
    formDoc->saveToFile();
}


void MainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    Q_UNUSED(arg1);
    if(ui->mdiArea->subWindowList().size()==0){
        ui->action_copy->setEnabled(false);
        ui->action_cut->setEnabled(false);
        ui->action_paste->setEnabled(false);
        ui->action_setFont->setEnabled(false);
    }
}

