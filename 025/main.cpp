#include "mainwindow.h"

#include <QApplication>
#include "tlogindialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TLoginDialog *logDialog=new TLoginDialog();
    //logDialog->show();
    if(logDialog->exec()==QDialog::Accepted){
        MainWindow w;
        w.show();
        return a.exec();
    }
    else{
        return 0;
    }
    delete logDialog;
    return 0;
}
