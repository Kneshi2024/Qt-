#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->label,&TMyLabel::doubleClicked,this,&Widget::do_doubleClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_doubleClicked()
{
    ui->label->setText("标签被双击，槽函数响应!");
    ui->label->adjustSize();
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    ui->label->setText("窗口被双击了！");
    //ui->label->setStyleSheet("color:red");
    ui->label->adjustSize();
}
