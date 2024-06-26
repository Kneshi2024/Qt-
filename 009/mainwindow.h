#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QActionGroup>
#include<QSpinBox>
#include<QComboBox>
#include<QLabel>
#include<QProgressBar>
#include<QFontDatabase>

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
    void on_action_new_triggered();

    void on_action_open_triggered();

    void on_action_save_triggered();

    void on_textEdit_copyAvailable(bool b);

    void on_textEdit_selectionChanged();

    void on_action_bold_triggered(bool checked);

    void on_action_italic_triggered(bool checked);

    void on_action_underLine_triggered(bool checked);

    void on_spinBox_valueChanged(int fontSize);

    void on_comboBox_currentText(const QFont &font);

private:
    Ui::MainWindow *ui;
    QLabel*labFile;
    QProgressBar*progress;
    QLabel*info;
};
#endif // MAINWINDOW_H
