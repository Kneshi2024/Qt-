#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFileDialog>
#include<QSaveFile>
#include<QException>
#include<QMessageBox>
#include<QTextBlock>

QString MainWindow::getFileName(bool save)
{
    QString curPath=QCoreApplication::applicationDirPath();
    QString fileName;
    if(save){
        fileName=QFileDialog::getSaveFileName(this,"请选择文件",curPath,"C文件(*.cpp *.h);;文本文件(*.txt);;所有文件(*.*)");
    }
    else{
        fileName=QFileDialog::getOpenFileName(this,"请选择文件",curPath,"C文件(*.cpp *.h);;文本文件(*.txt);;所有文件(*.*)");
    }
    if(fileName.isEmpty()){
        return fileName;
    }
    QFileInfo fileInfo(fileName);
    QDir::setCurrent(fileInfo.absoluteFilePath());
    return fileName;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQFile_open_triggered()
{
    //获取文件名
    QString fileName=this->getFileName();

    //用只读方式打开一个文件
    QFile aFile(fileName);
    if(!aFile.exists()){
        return;
    }
    if(!aFile.open(QFile::ReadOnly|QFile::Text)){
        return;
    }
    ui->plainTextEdit_QFile->appendPlainText(aFile.readAll());
    aFile.close();
}


void MainWindow::on_actionQTextStream_open_triggered()
{
    //获取文件名
    QString fileName=this->getFileName();

    //用只读方式打开一个文件
    QFile aFile(fileName);
    if(!aFile.exists()){
        return;
    }
    if(!aFile.open(QIODevice::ReadOnly|QIODevice::Text)){
        return;
    }
    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);
    ui->plainTextEdit_QTextStream->appendPlainText(aStream.readAll());
    aFile.close();
}


void MainWindow::on_actionQFile_save_triggered()
{
    //获取文件名
    QString fileName=this->getFileName(true);
    //用只写方式打开一个文件
    QFile aFile(fileName);
    if(!aFile.open(QIODevice::WriteOnly|QIODevice::Text)){
        return;
    }
    QString str=ui->plainTextEdit_QFile->toPlainText();
    aFile.write(str.toUtf8());
    aFile.close();
}


void MainWindow::on_actionQTextStream_save_triggered()
{
    QSaveFile aFile(getFileName(true));
    if(!aFile.open(QIODevice::WriteOnly|QIODevice::Text)){
        return;
    }
    //不直接写进文档，写在临时存储区
    aFile.setDirectWriteFallback(false);
    try{
        QTextStream aStream(&aFile);
        aStream.setAutoDetectUnicode(true);
        QTextDocument *doc=ui->plainTextEdit_QTextStream->document();
        for(int i=0;i<doc->blockCount();++i){
            aStream<<doc->findBlockByLineNumber(i).text();
            aStream<<"\n";
        }
        aFile.commit();
    }
    catch(QException &e){
        QMessageBox::warning(this,"警告","保存失败");
        aFile.cancelWriting();
    }
}


void MainWindow::on_actionQSaveFile_triggered()
{
    QSaveFile aFile(getFileName(true));
    if(!aFile.open(QIODevice::WriteOnly|QIODevice::Text)){
        return;
    }
    //不直接写进文档，写在临时存储区
    aFile.setDirectWriteFallback(false);
    try{
        QString str=ui->plainTextEdit_QTextStream->toPlainText();
        aFile.write(str.toUtf8());
        aFile.commit();
    }
    catch(QException &e){
        QMessageBox::warning(this,"警告","保存失败");
        aFile.cancelWriting();
    }
}

