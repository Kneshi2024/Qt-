#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QAbstractItemView>
#include<QGroupBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

private:
    QAbstractItemView *m_itemView=nullptr;
    void refreshToUI(QGroupBox *curGroupBox);

    //从活动类型中找到索引
    int getDropActionIndex(Qt::DropAction actionType);
    //从索引中找到活动类型
    Qt::DropAction getDropActionType(int index);

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_radioButton_listWidget_clicked();

    void on_radioButton_treeWidget_clicked();

    void on_radioButton_tableWidget_clicked();

    void on_radioButton_listSource_clicked();

    void on_checkBox_acceptDrops_clicked(bool checked);

    void on_checkBox_dragEnabled_clicked(bool checked);

    void on_comboBox_DropAction_currentIndexChanged(int index);

    void on_comboBox_CopyAction_currentIndexChanged(int index);

private:
    Ui::Widget *ui;

    // QObject interface
public:
    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};


#endif // WIDGET_H
