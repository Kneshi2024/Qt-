#ifndef TLOGINDIALOG_H
#define TLOGINDIALOG_H

#include <QDialog>
#include<QPixmap>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QSpacerItem>
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QCheckBox>
#include<QMouseEvent>
#include<QCryptographicHash>
#include<QSettings>
#include<QMessageBox>

namespace Ui {
class TLoginDialog;
}

class TLoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TLoginDialog(QWidget *parent = nullptr);
    // void updateLabelPixmap();
    // QCheckBox *checkBox;
    // QLineEdit *lineEdit;
    ~TLoginDialog();

private:
    Ui::TLoginDialog *ui;
    bool m_moving=false;
    QPoint m_lastPos;
    QString m_user="user";
    QString m_pswd="123456";
    // bool m_saved=false;
    int m_tryCount=0;
    int Max_Count=3;


    QString encrypt(const QString &str);
    // void readSettings();
    void writeSettings();

    // QWidget interface
protected:
    //virtual void showEvent(QShowEvent *event) override;

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
private slots:
    void on_pushButton_clicked();
};



#endif // TLOGINDIALOG_H
