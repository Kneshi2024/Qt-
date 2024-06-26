#ifndef TDIALOG_H
#define TDIALOG_H

#include <QDialog>

namespace Ui {
class TDialog;
}

class TDialog : public QDialog
{
    Q_OBJECT

public:
    //与对话框之间的交流
    void setRowColumn(int row,int col);
    int  getRow();
    int getColumn();

public:
    explicit TDialog(QWidget *parent = nullptr);
    ~TDialog();

private:
    Ui::TDialog *ui;
};

#endif // TDIALOG_H
