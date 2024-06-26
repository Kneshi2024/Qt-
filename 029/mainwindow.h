#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QItemSelectionModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QSqlDatabase DB;
    QItemSelectionModel *selModel;
    QSqlQueryModel *queModel;
    void selectData();
    void updateData(int curRow);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_open_triggered();

    void on_action_insert_triggered();

    void on_action_edit_triggered();

    void on_action_delete_triggered();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_action_increase_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
