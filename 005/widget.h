#ifndef WIDGET_H
#define WIDGET_H

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
private slots:
    void do_valueChanged(int value);
    void on_checkBox_textVisible_clicked(bool checked);
    void on_checkBox_invertedAppearance_clicked(bool checked);
    void on_radioButton_percentage_clicked();
    void on_radioButton_currentData_clicked();
};
#endif // WIDGET_H
