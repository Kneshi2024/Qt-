#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->horizontalScrollBar,&QScrollBar::setValue);
    connect(ui->horizontalSlider,&QSlider::valueChanged,ui->dial,&QDial::setValue);
    connect(ui->horizontalScrollBar,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->horizontalScrollBar,&QSlider::valueChanged,ui->horizontalSlider,&QSlider::setValue);
    connect(ui->horizontalScrollBar,&QSlider::valueChanged,ui->dial,&QDial::setValue);
    connect(ui->dial,&QSlider::valueChanged,this,&Widget::do_valueChanged);
    connect(ui->dial,&QSlider::valueChanged,ui->horizontalSlider,&QSlider::setValue);
    connect(ui->dial,&QSlider::valueChanged,ui->horizontalScrollBar,&QScrollBar::setValue);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}

void Widget::on_checkBox_textVisible_clicked(bool checked)
{
    ui->progressBar->setTextVisible(checked);
}


void Widget::on_checkBox_invertedAppearance_clicked(bool checked)
{
    ui->progressBar->setInvertedAppearance(checked);
}


void Widget::on_radioButton_percentage_clicked()
{
    ui->progressBar->setFormat("%p%");
}


void Widget::on_radioButton_currentData_clicked()
{
    ui->progressBar->setFormat("%p");
}

