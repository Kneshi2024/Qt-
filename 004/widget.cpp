#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->spinBox,&QSpinBox::valueChanged,ui->pushButton,&QPushButton::clicked);
    connect(ui->doubleSpinBox,&QDoubleSpinBox::valueChanged,ui->pushButton,&QPushButton::clicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    int num=ui->spinBox->value();
    float num2=ui->doubleSpinBox->value();
    float res=num*num2;
    ui->doubleSpinBox_2->setValue(res);
}


void Widget::on_spinBox_2_valueChanged(int arg1)
{
    ui->spinBox_3->setValue(arg1);
    ui->spinBox_4->setValue(arg1);
}


void Widget::on_spinBox_3_valueChanged(int arg1)
{
    ui->spinBox_2->setValue(arg1);
    ui->spinBox_4->setValue(arg1);
}


void Widget::on_spinBox_4_valueChanged(int arg1)
{
    ui->spinBox_2->setValue(arg1);
    ui->spinBox_3->setValue(arg1);
}

