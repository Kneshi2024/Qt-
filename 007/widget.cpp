#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //timer和counter初始化
    m_timer=new QTimer(this);
    m_counter=new QElapsedTimer;
    m_timer->stop();
    m_timer->setTimerType(Qt::CoarseTimer);//设置精确度
    //精确度单选框选上
    ui->radioButton_coarseTimer->setChecked(true);
    //m_timer发出timeOut时执行do_timer_timeOut
    connect(m_timer,&QTimer::timeout,this,&Widget::do_timer_timeOut);
}

Widget::~Widget()
{
    delete ui;
    delete m_counter;
}

void Widget::do_timer_timeOut()
{
    QApplication::beep();
    QTime currentTimer=QTime::currentTime();
    ui->lcdNumber_Hour->display(currentTimer.hour());
    ui->lcdNumber_Minute->display(currentTimer.minute());
    ui->lcdNumber_Second->display(currentTimer.second());

    if(m_timer->isSingleShot()){
        ui->pushButton_start->setEnabled(true);
        ui->pushButton_create->setEnabled(true);
        ui->pushButton_stop->setEnabled(false);
        //记录流失的时间
        int tm=m_counter->elapsed();
        int tm1=tm/1000;
        int tm2=tm%1000;
        QString timeStr=QString("流失的时间为：%1秒,%2毫秒").arg(tm1).arg(tm2);
        ui->label_time_lose->setText(timeStr);
    }
}

void Widget::on_pushButton_start_clicked()
{
    //设置间隔时间
    m_timer->setInterval(ui->spinBox->value());
    //是否开启单次模式
    if(ui->radioButton_once_time->isChecked()){
        m_timer->setSingleShot(true);
    }
    else if(ui->radioButton_continue_time->isChecked()){
        m_timer->setSingleShot(false);
    }
    //设置精度
    if(ui->radioButton_preciseTimer->isChecked()){
        m_timer->setTimerType(Qt::PreciseTimer);
    }
    else if(ui->radioButton_coarseTimer->isChecked()){
        m_timer->setTimerType(Qt::CoarseTimer);
    }
    else{
        m_timer->setTimerType(Qt::VeryCoarseTimer);
    }

    //开始计时
    m_timer->start();
    m_counter->start();

    //设置三个按钮状态
    ui->pushButton_start->setEnabled(false);
    ui->pushButton_create->setEnabled(false);
    ui->pushButton_stop->setEnabled(true);
}


void Widget::on_pushButton_stop_clicked()
{
    m_timer->stop();

    ui->pushButton_start->setEnabled(true);
    ui->pushButton_create->setEnabled(true);
    ui->pushButton_stop->setEnabled(false);

    int tm=m_counter->elapsed();
    int tm1=tm/1000;
    int tm2=tm%1000;
    QString timeStr=QString("流失的时间为：%1秒,%2毫秒").arg(tm1).arg(tm2);
    ui->label_time_lose->setText(timeStr);
}


void Widget::on_pushButton_create_clicked()
{

    int intval=ui->spinBox->value();
    m_timer->setSingleShot(true);
    QTimer::singleShot(intval,Qt::PreciseTimer,this,&Widget::do_timer_timeOut);
    m_counter->start();
    ui->pushButton_create->setEnabled(true);

}

