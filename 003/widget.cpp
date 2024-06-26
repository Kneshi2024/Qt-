#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_front_back_clicked()
{
    ui->plainTextEdit->appendPlainText("front(),back()测试!");
    QString str1= ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("front="+QString(str1.front()));
    ui->plainTextEdit->appendPlainText("back="+QString(str1.back()));
}


void Widget::on_pushButton_left_right_clicked()
{
    ui->plainTextEdit->appendPlainText("left(),right()测试!");
    QString str1= ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText(str1);
    ui->plainTextEdit->appendPlainText("left="+str1.left(2));
    ui->plainTextEdit->appendPlainText("right="+str1.right(7));
}


void Widget::on_pushButton_first_last_clicked()
{
    ui->plainTextEdit->appendPlainText("first(),last()测试!");
    QString str1= ui->comboBox_str1->currentText();
    QString str2= ui->comboBox_str2->currentText();
    ui->plainTextEdit->appendPlainText("str1="+str1);
    ui->plainTextEdit->appendPlainText("str2="+str2);
    int n=str1.lastIndexOf(str2);
    QString firststr=str1.first(n+1);
    QString laststr=str1.last(str1.size()-n-1);
    ui->plainTextEdit->appendPlainText("文件的路径="+firststr);
    ui->plainTextEdit->appendPlainText("文件的名称="+laststr);
}


void Widget::on_pushButton_clear_clicked()
{
    ui->plainTextEdit->clear();
}

//str1以srt2切割
void Widget::on_pushButton_section_clicked()
{
    ui->plainTextEdit->appendPlainText("section测试!");
    QString str1= ui->comboBox_str1->currentText();
    QString str2= ui->comboBox_str2->currentText();
    ui->plainTextEdit->appendPlainText("str1="+str1);
    ui->plainTextEdit->appendPlainText("str2="+str2);
    int n=ui->spinBox->value();
    QString strSection= str1.section(str2,n,n);
    ui->plainTextEdit->appendPlainText(strSection);
}


void Widget::on_pushButton_isNull_isEmpty_clicked()
{
    ui->plainTextEdit->appendPlainText("continue");
}


void Widget::on_pushButton_resize_clicked()
{
    ui->plainTextEdit->appendPlainText("continue");
}


void Widget::on_pushButton_size_length_clicked()
{
    ui->plainTextEdit->appendPlainText("continue");
}


void Widget::on_pushButton_fill_clicked()
{
    ui->plainTextEdit->appendPlainText("fill函数测试！");
    QString str="Hello";
    ui->plainTextEdit->appendPlainText(str);
    str.fill('X');
    ui->plainTextEdit->appendPlainText(str);
    str.fill('A',2);
    ui->plainTextEdit->appendPlainText(str);
    str.fill(QChar(0x54C8),3);
    ui->plainTextEdit->appendPlainText(str);
}

//取出两边空白和最精简模式(trimmed 和 simplified)
void Widget::on_pushButton_trimmed_simplified_clicked()
{
    ui->plainTextEdit->appendPlainText("trimmed & simplified函数测试！");
    QString str=ui->comboBox_str1->currentText();
    ui->plainTextEdit->appendPlainText("str="+str);
    QString str2=str.trimmed();
    ui->plainTextEdit->appendPlainText("trimmed="+str2);
    str2=str.simplified();
    ui->plainTextEdit->appendPlainText("simplified="+str2);
}

