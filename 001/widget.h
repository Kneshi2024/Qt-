#ifndef WIDGET_H
#define WIDGET_H
#include"tperson.h"

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    //设置两个指针
    Tperson*boy;
    Tperson*girl;
private slots:
    //构建两个槽函数年龄改变槽函数、spinbox改变槽函数
    void do_changeAge(int value);
    void do_spinChange(int arg1);
    void on_pushButton_Boy_Inc_clicked();
    void on_pushButton_Girl_Inc_clicked();
    void on_pushButton_Clear_clicked();
    void on_pushButton_All_TXT_clicked();
};
#endif // WIDGET_H
