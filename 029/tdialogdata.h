#ifndef TDIALOGDATA_H
#define TDIALOGDATA_H

#include <QDialog>
#include<QSqlRecord>

namespace Ui {
class TDialogData;
}

class TDialogData : public QDialog
{
    Q_OBJECT
private:
    QSqlRecord *m_sqlRecord;

public:
    explicit TDialogData(QWidget *parent = nullptr);
    ~TDialogData();

    QSqlRecord *sqlRecord() const;
    void setSqlRecord(QSqlRecord *newSqlRecord);

private slots:
    void on_pushButton_loadPicture_clicked();

    void on_pushButton_clearPicture_clicked();

private:
    Ui::TDialogData *ui;
};

#endif // TDIALOGDATA_H
