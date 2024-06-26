#include "tlogindialog.h"
#include "ui_tlogindialog.h"
#include<QDebug>


TLoginDialog::TLoginDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TLoginDialog)
{
    ui->setupUi(this);
    QApplication::setOrganizationName("OOTD-QT");
    QApplication::setApplicationName("025");
    this->setAttribute(Qt::WA_DeleteOnClose);
    //设置为无边框
    //this->setWindowFlag(Qt::FramelessWindowHint);
    this->setWindowFlags(Qt::SplashScreen);
    writeSettings();

    //readSettings();

    // QLayout *currentLayout=this->layout();
    // delete currentLayout;
    // writeSettings();

    // QWidget *centralWidget = new QWidget(this);
    // this->setCentralWidget(centralWidget);
    // this->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    // this->setMinimumSize(300,200);
    // QLabel *label=new QLabel(this);

    // //将标签中的图片设置的和标签一样大
    // label->setScaledContents(true);
    // QPixmap pixmap(":/back.jpg");
    // //设置图片
    // //label->setPixmap(pixmap.scaled(label->size(),Qt::IgnoreAspectRatio));
    // label->setPixmap(pixmap);
    // label->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    // QVBoxLayout *Vlayoout=new QVBoxLayout(this);
    // Vlayoout->addWidget(label);

    // QHBoxLayout *Hlayout=new QHBoxLayout(this);
    // QLabel *label_2=new QLabel("用户名:",this);
    // QLabel *label_3=new QLabel("用户密码:",this);
    // lineEdit=new QLineEdit(this);
    // QLineEdit *lineEdit_2=new QLineEdit(this);
    // lineEdit_2->setEchoMode(QLineEdit::Password);
    // checkBox=new QCheckBox("保存用户名",this);
    // checkBox->setChecked(true);
    // QPushButton *btn_ok=new QPushButton("确定",this);
    // QPushButton *btn_cancel=new QPushButton("取消",this);
    // Hlayout->addWidget(label_2);
    // Hlayout->addWidget(lineEdit);
    // Hlayout->addWidget(label_3);
    // Hlayout->addWidget(lineEdit_2);
    // Hlayout->addWidget(checkBox);
    // Hlayout->addStretch();
    // Hlayout->addWidget(btn_ok);
    // Hlayout->addStretch();
    // Hlayout->addWidget(btn_cancel);

    // // QVBoxLayout *Vlayoout=new QVBoxLayout(this);
    // // Vlayoout->addWidget(label);
    // Vlayoout->addLayout(Hlayout);
    // this->setLayout(Vlayoout);

    // connect(btn_ok,&QPushButton::clicked,this,[=](){
    //     QString userName=lineEdit->text().trimmed();
    //     QString encryptPassword=encrypt(lineEdit_2->text().trimmed());
    //     if(userName==m_user&&encryptPassword==m_pswd){
    //         this->accept();
    //         writeSettings();
    //     }
    //     else{
    //         m_tryCount++;
    //         if(m_tryCount>=Max_Count){
    //             QMessageBox::critical(this,"错误","错误次数太多！！！");
    //         }
    //         else{
    //             QMessageBox::warning(this,"警告","用户名密码错误");
    //         }
    //     }
    //     this->accept();
    // });
    // connect(btn_cancel,&QPushButton::clicked,this,&TLoginDialog::close);
    // readSettings();

}
// //在窗口显示时，也即是布局完成后更新图片大小
// void TLoginDialog::showEvent(QShowEvent *event)
// {
//     QDialog::showEvent(event);
//     updateLabelPixmap(); // 更新图片大小以匹配QLabel
// }

// void TLoginDialog::updateLabelPixmap()
// {
//     QLabel *label = findChild<QLabel *>(); // 假设你的对话框中只有一个QLabel
//     if (label) {
//         QPixmap pixmap(":/back.jpg");
//         pixmap = pixmap.scaled(label->size(), Qt::IgnoreAspectRatio);
//         label->setPixmap(pixmap);
//     }
// }


TLoginDialog::~TLoginDialog()
{
    delete ui;
}

//加密算法
QString TLoginDialog::encrypt(const QString &str)
{
    QCryptographicHash hash(QCryptographicHash::Md5);
    hash.addData(str.toLocal8Bit());
    return hash.result();
}

// void TLoginDialog::readSettings()
// {
//     QSettings setting;
//     m_user=setting.value("USER","user").toString();
//     //m_pswd=encrypt("123456");
//     m_pswd=setting.value("PSWD",encrypt("123456")).toString();
//     bool saved=setting.value("saved",false).toBool();
//     if(saved){
//         ui->lineEdit_2->setText(m_user);
//         ui->checkBox->setChecked(true);
//     }
// }

void TLoginDialog::writeSettings()
{
    QSettings setting;
    setting.setValue("USER",m_user);
    setting.setValue("PSWD",m_pswd);
    setting.setValue("saved",ui->checkBox->isChecked());
}

void TLoginDialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        m_moving=true;
        m_lastPos=event->globalPosition().toPoint()-this->pos();
    }
    return QDialog::mousePressEvent(event);
}

void TLoginDialog::mouseReleaseEvent(QMouseEvent *event)
{
    m_moving=false;
    event->accept();
}

void TLoginDialog::mouseMoveEvent(QMouseEvent *event)
{
    //readSettings();
    QPoint eventPos=event->globalPosition().toPoint();
    if(m_moving==true&&(event->buttons()&Qt::LeftButton)&&(eventPos-m_lastPos-this->pos()).manhattanLength()>QApplication::startDragDistance()){
        move(eventPos-m_lastPos);
        m_lastPos=eventPos-this->pos();
    }
    return QDialog::mouseMoveEvent(event);
}

void TLoginDialog::on_pushButton_clicked()
{
    //readSettings();
    QString userName=ui->lineEdit->text().trimmed();
    QString encryptPassword=encrypt(ui->lineEdit_2->text().trimmed());
    // qDebug()<<"userName: "<<userName;
    // qDebug()<<"m_user: "<<m_user;
    // qDebug()<<"encryptPassword: "<<ui->lineEdit_2->text().trimmed();
    // qDebug()<<"m_pswd: "<<m_pswd;

    if(userName==m_user&&encryptPassword==encrypt(m_pswd)){
        this->accept();
        writeSettings();
    }
    else{
        m_tryCount++;
        if(m_tryCount>=Max_Count){
            QMessageBox::critical(this,"错误","错误次数太多！！！");
            this->reject();
        }
        else{
            QMessageBox::warning(this,"警告","用户名密码错误");
            if(ui->checkBox->isChecked()==false){
                ui->lineEdit->clear();
            }
            ui->lineEdit_2->clear();
        }
    }
}

