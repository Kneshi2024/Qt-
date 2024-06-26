#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>

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
    QSqlRelationalTableModel *tabModel;
    QItemSelectionModel *selModel;
    void openTable();
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_open_triggered();

    void on_action_add_triggered();

    void on_action_insert_triggered();

    void on_action_delete_triggered();

    void on_action_save_triggered();

    void do_currentChanged(const QModelIndex &current, const QModelIndex &previous);
    void on_action_cancel_triggered();

    void on_action_blockList_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
