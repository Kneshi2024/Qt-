#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMenu>
#include<QListWidgetItem>

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
    ~MainWindow();

private slots:
    void on_action_initList_triggered();

    void on_action_clear_triggered();

    void on_action_insert_triggered();

    void on_action_add_triggered();

    void on_action_delete_triggered();

    void on_toolButton_clearText_clicked();

    void on_action_selAll_triggered();

    void on_action_selNone_triggered();

    void on_action_selInverse_triggered();

    void on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous);

    void on_checkBox_allowSlot_clicked(bool checked);

    void on_toolButton_clicked();

    void on_toolButton_5_clicked();

    void on_listWidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
