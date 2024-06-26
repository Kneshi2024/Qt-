#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //将活动传递给this代表的对象来处理反应
    ui->label_SC->installEventFilter(this);
    ui->label_DC->installEventFilter(this);
}

Widget::~Widget()
{
    delete ui;
}
//用widget来处理时间过滤器
bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->label_SC){
        if(event->type()==QEvent::Enter){
            ui->label_SC->setStyleSheet("background-color:rgb(170,255,255)");
        }
        else if(event->type()==QEvent::Leave){
            ui->label_SC->setStyleSheet("");
            ui->label_SC->setText("单击我！");
        }
        else if(event->type()==QEvent::MouseButtonPress){
            ui->label_SC->setText("press button");
        }
        else if(event->type()==QEvent::MouseButtonRelease){
            ui->label_SC->setText("release button");
        }
    }
    else if(watched==ui->label_DC){
        if(event->type()==QEvent::Enter){
            ui->label_DC->setStyleSheet("background-color:rgb(255,180,180)");
        }
        else if(event->type()==QEvent::Leave){
            ui->label_DC->setStyleSheet("");
            ui->label_DC->setText("双击我！");
        }
        else if(event->type()==QEvent::MouseButtonDblClick){
            ui->label_DC->setText("double ckicked");
        }
    }
    return QWidget::eventFilter(watched,event);
}
