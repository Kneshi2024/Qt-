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

private slots:
    void on_pushButton_front_back_clicked();

    void on_pushButton_left_right_clicked();

    void on_pushButton_first_last_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_section_clicked();

    void on_pushButton_isNull_isEmpty_clicked();

    void on_pushButton_resize_clicked();

    void on_pushButton_size_length_clicked();

    void on_pushButton_fill_clicked();

    void on_pushButton_trimmed_simplified_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
