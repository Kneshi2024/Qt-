#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
#include<QMessageBox>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //让窗口捕获所有键盘操作
    grabKeyboard();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()!=Qt::LeftButton){
        return;
    }
    //相对widget的相对位置
    QPoint pt=event->pos();
    QPointF realPt=event->position();
    QPointF winPt=event->scenePosition();//QPointF是浮点型更加精细
    //相对屏幕的绝对位置
    QPointF globalPt=event->globalPosition();
    QString str=QString::asprintf("pos():%d,%d",pt.x(),pt.y());
    str+=QString::asprintf("\nposition():%.0f,%.0f",realPt.x(),realPt.y());
    str+=QString::asprintf("\nscenePosition():%.0f,%.0f",winPt.x(),winPt.y());
    str+=QString::asprintf("\nglobalPos():%.0f,%.0f",globalPt.x(),globalPt.y());
    ui->label->setText(str);
    //自动调节大小
    ui->label->adjustSize();
    //移动标签的位置
    ui->label->move(event->pos());
    QWidget::mousePressEvent(event);//用基类处理函数，确保Qt默认行为任然能执行
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    QPoint pt=ui->pushButton->pos();//拿到了按钮的相对位置
    //根据不同的按键触发不同的动作
    if((event->key()==Qt::Key_A)|(event->key()==Qt::Key_Left)){
        ui->pushButton->move(pt.x()-20,pt.y());
    }
    else if((event->key()==Qt::Key_S)|(event->key()==Qt::Key_Down)){
        ui->pushButton->move(pt.x(),pt.y()+20);
    }
    else if((event->key()==Qt::Key_D)|(event->key()==Qt::Key_Right)){
        ui->pushButton->move(pt.x()+20,pt.y());
    }
    else if((event->key()==Qt::Key_W)|(event->key()==Qt::Key_Up)){
        ui->pushButton->move(pt.x(),pt.y()-20);
    }

    QWidget::keyPressEvent(event);
}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/back.jpg"));

}
//写关闭事件
void Widget::closeEvent(QCloseEvent *event)
{
    QMessageBox::StandardButton result=QMessageBox::question(this,"消息框","是否要关闭窗口？",QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
    if(result==QMessageBox::Yes){
        event->accept();
    }
    else{
        event->ignore();
    }
}


