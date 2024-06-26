#ifndef TDIALOGHEADERS_H
#define TDIALOGHEADERS_H

#include <QDialog>
#include<QStringListModel>

namespace Ui {
class TDialogHeaders;
}

class TDialogHeaders : public QDialog
{
    Q_OBJECT
private:
    QStringListModel *m_model;
public:
    void setStringList(QStringList &list);
    QStringList getList();

public:
    explicit TDialogHeaders(QWidget *parent = nullptr);
    ~TDialogHeaders();

private:
    Ui::TDialogHeaders *ui;
};

#endif // TDIALOGHEADERS_H
