#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>
#include<QElapsedTimer>
#include<QTime>

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
    QTimer*m_timer;
    QElapsedTimer*m_counter;

private slots:
    void do_timer_timeOut();
    void on_pushButton_start_clicked();
    void on_pushButton_stop_clicked();
    void on_pushButton_create_clicked();
};
#endif // WIDGET_H
