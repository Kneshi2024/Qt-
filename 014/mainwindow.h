#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLabel>
#include<QStandardItemModel>
#include<QItemSelectionModel>
#include<QModelIndex>
#include<QFileDialog>

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

private:
    Ui::MainWindow *ui;
    const int FixedColumnNumber=6;
    QLabel *labCurFile;
    QLabel *labCellText;
    QLabel *labCellPos;
    QStandardItemModel *m_model;
    QItemSelectionModel *m_selection;
    void initModelData(QStringList &fileContent);

private slots:
    void do_currentChanged(const QModelIndex &current,const QModelIndex &previous);

    void on_action_open_triggered();
    void on_action_preview_triggered();
    void on_action_addRow_triggered();
    void on_action_insertRow_triggered();
    void on_action_deleteRow_triggered();
    void on_action_left_triggered();
    void on_action_center_triggered();
    void on_action_right_triggered();
    void on_action_bold_triggered();
};
#endif // MAINWINDOW_H
