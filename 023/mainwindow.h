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

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Embedded_Widget_triggered();
    void do_tabTitleChanged(QString text);

    void on_tabWidget_tabCloseRequested(int index);

    void on_action_Indepent_Widget_triggered();

    void on_action_Embedded_MainWindow_triggered();

    void on_action_Independ_MainWindow_triggered();

private:
    Ui::MainWindow *ui;

    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event) override;
};


#endif // MAINWINDOW_H
