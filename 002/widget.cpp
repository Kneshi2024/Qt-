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

void Widget::on_pushButton_Unicode_clicked()
{
    QString str=ui->lineEdit_str->text();
    if(str.isEmpty()){
        return;
    }
    for(QChar ch:str){
        char16_t unicode=ch.unicode();//得到该字符的unicode字符编码
        QString chStr(ch);//将char类型ch转换成QString类型
        QString info=chStr+QString::asprintf("\tUnicode编码为：0x%X",unicode);
        ui->plainTextEdit->appendPlainText(info);//将上述字符串打印到文本框中
    }
}


void Widget::on_pushButton_Check_clicked()
{
    QString str=ui->lineEdit_char->text();
    if(str.isEmpty()){
        return;
    }
    QChar ch=str[0];
    char16_t unicode=ch.unicode();//得到该字符的unicode字符编码
    //QString chStr(ch);//将char类型ch转换成QString类型
    QString info=str+QString::asprintf("\tUnicode编码为：0x%X",unicode);
    ui->plainTextEdit->appendPlainText(info);//将上述字符串打印到文本框中

    ui->checkBox_Digit->setChecked(ch.isDigit());//是否为数字0~9
    ui->checkBox_Letter->setChecked(ch.isLetter());//是否为字母
    ui->checkBox_LetterOrNumber->setChecked(ch.isLetterOrNumber());//是否为数字或字母
    ui->checkBox_Lower->setChecked(ch.isLower());//是否为小写
    ui->checkBox_Mark->setChecked(ch.isMark());//是否为符号
    ui->checkBox_Punct->setChecked(ch.isPunct());//是否为标点符号
    ui->checkBox_Space->setChecked(ch.isSpace());//是否为空格
    ui->checkBox_Symbol->setChecked(ch.isSymbol());//是否为符号
    ui->checkBox_Upper->setChecked(ch.isUpper());//是否为大写
}


void Widget::on_pushButton_Clear_clicked()
{
    ui->plainTextEdit->clear();
}

