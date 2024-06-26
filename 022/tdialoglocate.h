#ifndef TDIALOGLOCATE_H
#define TDIALOGLOCATE_H

#include <QDialog>

namespace Ui {
class TDialogLocate;
}

class TDialogLocate : public QDialog
{
    Q_OBJECT
public slots:
    //设置spinbox的值
    void setSpinBoxValue(int rowNum,int colNum);
public:
    //设置spinbox的范围
    void setSpinBoxRange(int rowValue,int colValue);

public:
    explicit TDialogLocate(QWidget *parent = nullptr);
    ~TDialogLocate();

private slots:
    void on_pushButton_setWords_clicked();

private:
    Ui::TDialogLocate *ui;
signals:
    void cellTextChanged(int row,int column,QString &text);
    void changeActionEnable(bool enable);

    // QWidget interface
protected:
    virtual void closeEvent(QCloseEvent *event) override;
    virtual void showEvent(QShowEvent *event) override;
};


#endif // TDIALOGLOCATE_H
