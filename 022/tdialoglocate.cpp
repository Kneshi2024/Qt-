#include "tdialoglocate.h"
#include "ui_tdialoglocate.h"
#include<QCloseEvent>

void TDialogLocate::setSpinBoxValue(int rowNum, int colNum)
{
    ui->spinBox_row->setValue(rowNum);
    ui->spinBox_column->setValue(colNum);
}

void TDialogLocate::setSpinBoxRange(int rowValue, int colValue)
{
    ui->spinBox_row->setMaximum(rowValue-1);
    ui->spinBox_column->setMaximum(colValue-1);
}

TDialogLocate::TDialogLocate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogLocate)
{
    ui->setupUi(this);
}

TDialogLocate::~TDialogLocate()
{
    delete ui;
}

void TDialogLocate::on_pushButton_setWords_clicked()
{
    //在消息框中拿到文本，行列的值
    QString text=ui->lineEdit->text();
    int row=ui->spinBox_row->value();
    int col=ui->spinBox_column->value();
    //判断是否选择了行增或者列增
    if(ui->checkBox_rowUp->isChecked()){
        ui->spinBox_row->setValue(row+1);
    }
    if(ui->checkBox_columnUp->isChecked()){
        ui->spinBox_column->setValue(col+1);
    }
    //发送信号给主窗口，从而改变主窗口上的值
    emit cellTextChanged(row,col,text);
}

//改变主窗口中定位单元格的可选择模式
void TDialogLocate::closeEvent(QCloseEvent *event)
{
    //执行了关闭事件后允许使用定位单元格
    event->accept();
    emit changeActionEnable(true);
}

void TDialogLocate::showEvent(QShowEvent *event)
{
    //执行了展示事件后不允许使用定位单元格
    event->accept();
    emit changeActionEnable(false);
}
