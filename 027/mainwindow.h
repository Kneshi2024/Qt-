#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSql>
#include<QDataWidgetMapper>
#include"tcomboboxdelegate.h"
#include<QSqlDatabase>
#include<QSqlTableModel>
#include<QItemSelectionModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void openTable();
    ~MainWindow();
    void showRecordNum();

private slots:
    void on_action_open_triggered();
    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_action_add_triggered();

    void on_action_insert_triggered();

    void on_action_delete_triggered();

    void on_action_setPhoto_triggered();

    void on_action_clearPhoto_triggered();

    void on_action_increase_triggered();

    void on_action_save_triggered();

    void on_action_cancel_triggered();

    void on_comboBox_sort_currentIndexChanged(int index);

    void on_radioButton_rise_clicked();

    void on_radioButton_down_clicked();

    void on_radioButton__man_clicked();

    void on_radioButton_womon_clicked();

    void on_radioButton_showAll_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;
    QSqlTableModel *tabModel;
    QItemSelectionModel *selModel;
    QDataWidgetMapper *dataMapper;

    TComboBoxDelegate *delegateSex;
    TComboBoxDelegate delegateDepart;
};
#endif // MAINWINDOW_H
