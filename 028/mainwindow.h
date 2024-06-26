#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QDataWidgetMapper>

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
    void selectData();
    void showRecLine();
    void reFreshTableView();
    ~MainWindow();

private slots:
    void on_action_openDataBase_triggered();
    void do_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);

    void on_action_firstRecord_triggered();

    void on_action_previousRecord_triggered();

    void on_action_nextRecord_triggered();

    void on_action_lastRecord_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB;
    QItemSelectionModel *selModel;
    QDataWidgetMapper *dataMapper;
    QSqlQueryModel *queModel;
};
#endif // MAINWINDOW_H
