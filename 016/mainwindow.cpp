#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_model=new QFileSystemModel(this);
    ui->treeView->setModel(m_model);
    ui->listView->setModel(m_model);
    ui->tableView->setModel(m_model);

    //用来启动目录
    m_model->setRootPath("");//括号内的内容无关
    //单个设置
    //ui->treeView->setRootIndex(m_model->index(QDir::currentPath()));

    connect(ui->treeView,&QTreeView::clicked,ui->listView,&QListView::setRootIndex);//clicked会自动传递一个setRootIndex需要的参数
    connect(ui->treeView,&QTreeView::clicked,ui->tableView,&QTableView::setRootIndex);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_setRoot_triggered()
{
    QString dir=QFileDialog::getExistingDirectory(this,"请选择目录",QDir::currentPath());
    ui->treeView->setRootIndex(m_model->index(dir));
    ui->listView->setRootIndex(m_model->index(dir));
    ui->tableView->setRootIndex(m_model->index(dir));
}


void MainWindow::on_radioButton_showDirAndFile_clicked()
{
    //设置模型的过滤器
    ui->groupBox_filter->setEnabled(true);
    m_model->setFilter(QDir::AllDirs|QDir::Files|QDir::NoDotAndDotDot);//所有目录，文件，没有点和点点（上级目录）
}


void MainWindow::on_radioButton_showDirOnly_clicked()
{
    ui->groupBox_filter->setEnabled(false);
    m_model->setFilter(QDir::AllDirs|QDir::NoDotAndDotDot);
}


void MainWindow::on_checkBox_isfileFilter_clicked(bool checked)
{
    ui->comboBox_fileFilter->setEnabled(checked);
    ui->pushButton_applicate->setEnabled(checked);
    m_model->setNameFilterDisables(!checked);
}


void MainWindow::on_pushButton_applicate_clicked()
{                                                               //删除两端空白、以;分割
    QStringList nameFilter=ui->comboBox_fileFilter->currentText().trimmed().split(";",Qt::SkipEmptyParts);
    m_model->setNameFilters(nameFilter);
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    ui->label_fileName->setText(m_model->fileName(index));
    ui->label_fileType->setText(m_model->type(index));
    ui->label_pathName->setText(m_model->filePath(index));
    ui->checkBox_isDir->setChecked(m_model->isDir(index));
    int size=m_model->size(index)/1024;//拿到的size单位是bit
    if(size<1024){
        ui->label_fileSize->setText(QString("%1 KB").arg(size));
    }
    else{
        ui->label_fileSize->setText(QString::asprintf("%.1f MB",size/1024.0));
    }
}

