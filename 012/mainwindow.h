#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDate>
#include<QTableWidgetItem>
#include<QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum colNum{
    COL_NAME=0,
    COL_SEX,
    COL_BIRTH,
    COL_NATION,
    COL_SCORE,
    COL_PARTY
};
enum cellType{
    CT_NAME=1000,
    CT_SEX,
    CT_BIRTH,
    CT_NATION,
    CT_SCORE,
    CT_PARTY
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_9_clicked();

    void on_checkBox_clicked(bool checked);

    void on_checkBox_2_clicked(bool checked);

    void on_checkBox_4_clicked(bool checked);

    void on_checkBox_3_clicked(bool checked);

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn);

private:
    Ui::MainWindow *ui;
    QLabel *cellIndex;
    QLabel *cellType;
    QLabel *StuID;

private:
    void creatRowItem(int row,QString name,QString sex,QDate birth,QString nation,int score,bool isParty);
};
#endif // MAINWINDOW_H
