#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileSystemModel>

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
    void on_action_setRoot_triggered();

    void on_radioButton_showDirAndFile_clicked();

    void on_radioButton_showDirOnly_clicked();

    void on_checkBox_isfileFilter_clicked(bool checked);

    void on_pushButton_applicate_clicked();

    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    QFileSystemModel *m_model;
};
#endif // MAINWINDOW_H
