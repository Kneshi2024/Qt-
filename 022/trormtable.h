#ifndef TRORMTABLE_H
#define TRORMTABLE_H

#include <QMainWindow>
#include<QStandardItemModel>
#include<QItemSelectionModel>
#include"tdialogheaders.h"
#include<QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class TFormTable : public QMainWindow
{
    Q_OBJECT

private:
    QStandardItemModel *m_model;
    QItemSelectionModel *m_selection;
    TDialogHeaders *dlgHeaders=nullptr;
    QLabel *labPos;
    QLabel *labText;

public:
    TFormTable(QWidget *parent = nullptr);
    ~TFormTable();

private slots:
    void on_action_setRowColNum_triggered();

    void on_action_setHeader_triggered();

    void on_action_locateItem_triggered();

    void do_valueChanged(int row,int col,QString &text);

    void on_tableView_clicked(const QModelIndex &index);

    void do_setLabelText(const QModelIndex &current, const QModelIndex &previous);
signals:
    void cellTextChanged(int row,int col);

private:
    Ui::MainWindow *ui;
};
#endif // TRORMTABLE_H
