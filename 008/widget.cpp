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

void Widget::on_pushButton_clearText_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_pushButton_initList_clicked()
{
    QIcon icon;
    icon.addFile(":/Image/Coin0001.ico");
    ui->comboBox->clear();
    for(int i=0;i<20;++i){
        ui->comboBox->addItem(icon,QString("Item%1").arg(i));
    }
}


void Widget::on_pushButton_clearList_clicked()
{
    ui->comboBox->clear();
}


void Widget::on_checkBox_clicked(bool checked)
{
    ui->comboBox->setEditable(checked);
}


void Widget::on_pushButton_initCountry_clicked()
{
    ui->comboBox_2->clear();
    QMap<QString,int>temp;
    temp.insert("北京",11);
    temp.insert("上海",12);
    temp.insert("广东",22);
    temp.insert("深圳",23);
    temp.insert("江苏",33);
    for(const QString &str:temp.keys()){
        ui->comboBox_2->addItem(str,temp.value(str));
    }
}


void Widget::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->plainTextEdit->appendPlainText(arg1);
}


void Widget::on_comboBox_2_currentIndexChanged(int index)
{
    (void)index;
    QString str=ui->comboBox_2->currentText()+"  "+ui->comboBox_2->currentData().toString();
    ui->plainTextEdit->appendPlainText(str);
}

