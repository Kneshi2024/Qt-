#include "widget.h"
#include "ui_widget.h"
#include<QMetaProperty>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //初始化boy和girl指针
    boy=new Tperson("小明",this);
    //设置男生属性
    boy->setProperty("sex","boy");
    boy->setAge(15);
    girl=new Tperson("小红",this);
    //设置女生属性
    girl->setProperty("sex","girl");
    girl->setAge(20);
    //设置男女生属性
    ui->spinBox_boy->setProperty("isBoy",true);
    ui->spinBox_girl->setProperty("isBoy",false);
    //连接年龄改变函数
    connect(boy,&Tperson::changeAge,this,&Widget::do_changeAge);
    connect(girl,&Tperson::changeAge,this,&Widget::do_changeAge);
    connect(ui->spinBox_boy,&QSpinBox::valueChanged,this,&Widget::do_spinChange);
    connect(ui->spinBox_girl,&QSpinBox::valueChanged,this,&Widget::do_spinChange);
    //连接按钮和spinbox
    connect(boy,&Tperson::changeAge,ui->spinBox_boy,&QSpinBox::setValue);
    connect(girl,&Tperson::changeAge,ui->spinBox_girl,&QSpinBox::setValue);


}

Widget::~Widget()
{
    delete ui;
}

void Widget::do_changeAge(int value)
{
    //获取信号发送者的对象 用person接收
    Tperson*person=qobject_cast<Tperson*>(sender());
    QString str=QString("%1,%2,年龄=%3岁").arg(person->property("name").toString()).arg(person->property("sex").toString()).arg(value);
    ui->plainTextEdit->appendPlainText(str);

}

void Widget::do_spinChange(int arg1)
{
    //获取信号发送者的对象 用spinBox接收
    QSpinBox*spinBox=qobject_cast<QSpinBox*>(sender());
    if(spinBox->property("isBoy")==true){
        boy->setAge(arg1);
    }
    else{
        girl->setAge(arg1);
    }
}

//增加男生年龄
void Widget::on_pushButton_Boy_Inc_clicked()
{
    boy->incAge();
}

//增加女生年龄
void Widget::on_pushButton_Girl_Inc_clicked()
{
    girl->incAge();
}

//清空文本
void Widget::on_pushButton_Clear_clicked()
{
    ui->plainTextEdit->clear();
}

//打印元属性信息
void Widget::on_pushButton_All_TXT_clicked()
{
    //元对象系统核心
    const QMetaObject *metaObject=boy->metaObject();
    //打印类名称
    ui->plainTextEdit->appendPlainText(QString("类名称：%1").arg(metaObject->className()));
    //打印属性值
    ui->plainTextEdit->appendPlainText("属性：");
    for(int i=metaObject->propertyOffset();i<metaObject->propertyCount();++i){
        //获取系统核心key：name
        const char*properName=metaObject->property(i).name();
        //通过key值找到对应的value
        QString properValue= boy->property(properName).toString();
        //打印出来一对属性值
        ui->plainTextEdit->appendPlainText(QString("属性1: %1,\t\t属性2: %2").arg(properName,properValue));
    }
    //打印类信息
    ui->plainTextEdit->appendPlainText("\n类信息(classInfo):");
    for(int i=metaObject->classInfoOffset();i<metaObject->classInfoCount();++i){
        //获取classInfo键值对
        QMetaClassInfo classInfo=metaObject->classInfo(i);
        //按照键值对打印出来对应的信息
        ui->plainTextEdit->appendPlainText(QString("NAME: %1,\tVALUE: %2").arg(classInfo.name(),classInfo.value()));
    }
}

