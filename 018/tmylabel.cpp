#include "tmylabel.h"
#include<QEvent>

TMyLabel::TMyLabel(QWidget *parent):QLabel(parent)//通过parent构造其基类部分
{
    //设置悬停开关为true
    setAttribute(Qt::WA_Hover,true);
}

void TMyLabel::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    emit doubleClicked();
}

bool TMyLabel::event(QEvent *event)
{
    if(event->type()==QEvent::HoverEnter){
        QPalette palette=this->palette();
        palette.setColor(QPalette::WindowText,Qt::red);
        setPalette(palette);
    }
    else if(event->type()==QEvent::HoverLeave){
        QPalette palette=this->palette();
        palette.setColor(QPalette::WindowText,Qt::black);
        setPalette(palette);
    }
    return QLabel::event(event);//返回给QLabel继续执行默认
}
