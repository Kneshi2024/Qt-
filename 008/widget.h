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
    void on_pushButton_clearText_clicked();

    void on_pushButton_initList_clicked();

    void on_pushButton_clearList_clicked();

    void on_checkBox_clicked(bool checked);

    void on_pushButton_initCountry_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
