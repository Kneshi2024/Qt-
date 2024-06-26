#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QDateTime currentTime=QDateTime::currentDateTime();
    //初始化显示当前时间
    ui->lineEdit_choose_date_time->setText(currentTime.toString("yyyy年M月d日"));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_get_date_time_clicked()
{
    QDateTime currentTime=QDateTime::currentDateTime();
    ui->timeEdit->setTime(currentTime.time());
    ui->lineEdit_time->setText(currentTime.toString("HH:mm:ss"));

    ui->dateEdit->setDate(currentTime.date());
    ui->lineEdit_date->setText(currentTime.toString("yyyy-MM-dd"));

    ui->dateTimeEdit->setDateTime(currentTime);
    ui->lineEdit_date_time->setText(currentTime.toString("yyyy-MM-dd HH:mm:ss"));
}


void Widget::on_pushButton_set_time_clicked()
{
    QString str=ui->lineEdit_time->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QTime tm=QTime::fromString(str,"hh:mm:ss");
        ui->timeEdit->setTime(tm);
    }
}


void Widget::on_pushButton_set_date_clicked()
{
    QString str=ui->lineEdit_date->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QDate dt=QDate::fromString(str,"yyyy-MM-dd");
        ui->dateEdit->setDate(dt);
    }
}


void Widget::on_pushButton_set_time_date_clicked()
{
    QString str=ui->lineEdit_date_time->text();
    str=str.trimmed();
    if(!str.isEmpty()){
        QDateTime dateTime=QDateTime::fromString(str,"yyyy-MM-dd hh:mm:ss");
        ui->dateTimeEdit->setDateTime(dateTime);
    }
}


void Widget::on_calendarWidget_selectionChanged()
{
    QString str=ui->calendarWidget->selectedDate().toString("yyyy年M月d日");
    ui->lineEdit_choose_date_time->setText(str);
}

