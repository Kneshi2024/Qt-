#include "widget.h"
#include "ui_widget.h"
#include<QMimeData>
#include<QFileInfo>
#include<QPixmap>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setAcceptDrops(true);
    ui->label->setAcceptDrops(false);
    ui->plainTextEdit->setAcceptDrops(false);
    ui->label->setScaledContents(true);//将图片缩放成框大小
}

Widget::~Widget()
{
    delete ui;
}

void Widget::resizeEvent(QResizeEvent *event)
{
    QSize size=ui->plainTextEdit->size();
    ui->plainTextEdit->move(5,5);
    ui->label->move(5,size.height()+10);
    ui->plainTextEdit->resize(this->width()-10,size.height());
    ui->label->resize(this->width()-10,this->height()-size.height()-10);
    event->accept();
}

void Widget::dragEnterEvent(QDragEnterEvent *event)
{
    ui->plainTextEdit->clear();
    ui->plainTextEdit->appendPlainText("dragEnterEvent事件，mimeData的formats");
    for(auto &item:event->mimeData()->formats()){
        ui->plainTextEdit->appendPlainText(item);
    }
    for(auto &item:event->mimeData()->urls()){
        ui->plainTextEdit->appendPlainText(item.path());
    }
    if(event->mimeData()->hasUrls()){//判断是否有数据
        QString fileName=event->mimeData()->urls().at(0).fileName();
        QFileInfo fileInfo(fileName);
        QString str=fileInfo.suffix().toUpper();
        if(str=="JPG"){
            event->acceptProposedAction();//接受拖入动作
        }
        else{
            event->ignore();
        }
    }
    else{
        event->ignore();
    }
}

void Widget::dropEvent(QDropEvent *event)
{
    QString filePath=event->mimeData()->urls()[0].path();
    QString fullPath=filePath.right(filePath.size()-1);//filePath有/所以去掉第一个/
    QPixmap pixmap;
    pixmap.load(fullPath);
    ui->label->setPixmap(pixmap);
}
