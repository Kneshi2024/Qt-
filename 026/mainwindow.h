#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QString getFileName(bool save=false);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQFile_open_triggered();

    void on_actionQTextStream_open_triggered();

    void on_actionQFile_save_triggered();

    void on_actionQTextStream_save_triggered();

    void on_actionQSaveFile_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
