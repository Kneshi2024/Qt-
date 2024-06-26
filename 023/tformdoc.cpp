#include "tformdoc.h"
#include "ui_tformdoc.h"
#include<QToolBar>
#include<QVBoxLayout>
#include<QFontDialog>
#include<QFileDialog>
#include<QFileInfo>

TFormDoc::TFormDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
    QToolBar *localToolBar=new QToolBar("文档",this);
    localToolBar->addAction(ui->action_open);
    localToolBar->addAction(ui->action_font);
    localToolBar->addSeparator();
    localToolBar->addAction(ui->action_copy);
    localToolBar->addAction(ui->action_paste);
    localToolBar->addAction(ui->action_cut);
    localToolBar->addAction(ui->action_repeat);
    localToolBar->addAction(ui->action_cancel);
    localToolBar->addSeparator();
    localToolBar->addAction(ui->action_quit);
    QVBoxLayout *layout=new QVBoxLayout(this);
    layout->addWidget(localToolBar);
    layout->addWidget(ui->plainTextEdit);
    this->setLayout(layout);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}

void TFormDoc::on_action_open_triggered()
{
    QString filePath=QCoreApplication::applicationFilePath();
    QString fileName=QFileDialog::getOpenFileName(this,"请选择文件",filePath,"c++文件(*.cpp *.h);;文本文件(*.txt);;所有文件(*.*)");
    if(fileName.isEmpty()){
        return;
    }
    QFile aFile(fileName);
    if(aFile.open(QIODevice::ReadOnly|QIODevice::Text)){
        ui->plainTextEdit->clear();
        QTextStream aStream(&aFile);
        while(!aStream.atEnd()){
            QString str=aStream.readLine();
            ui->plainTextEdit->appendPlainText(str);
        }
        aFile.close();
        QFileInfo fileInfo(fileName);
        QString shortName=fileInfo.fileName();
        this->setWindowTitle(shortName);
        emit titleChanged(shortName);
    }
}


void TFormDoc::on_action_font_triggered()
{
    QFont font=ui->plainTextEdit->font();
    bool ok;
    font =QFontDialog::getFont(&ok,font,this,"请选择字体");
    if(ok){
        ui->plainTextEdit->setFont(font);
    }
}

