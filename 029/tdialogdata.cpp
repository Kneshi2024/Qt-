#include "tdialogdata.h"
#include "ui_tdialogdata.h"
#include<QFileDialog>
#include<QMessageBox>

QSqlRecord *TDialogData::sqlRecord() const
{
    m_sqlRecord->setValue("empNo",ui->spinBox->text());
    m_sqlRecord->setValue("Name",ui->lineEdit->text());
    m_sqlRecord->setValue("Gender",ui->comboBox->currentText());
    m_sqlRecord->setValue("Birthday",ui->dateEdit->date());
    m_sqlRecord->setValue("Province",ui->comboBox_3->currentText());
    m_sqlRecord->setValue("Department",ui->comboBox_4->currentText());
    m_sqlRecord->setValue("Salary",ui->spinBox_2->text());
    m_sqlRecord->setValue("Memo",ui->plainTextEdit->toPlainText());

    return m_sqlRecord;
}

void TDialogData::setSqlRecord(QSqlRecord *newSqlRecord)
{
    m_sqlRecord = newSqlRecord;
    ui->spinBox->setEnabled(false);
    setWindowTitle("Data对话框");

    //设置对话框内容
    ui->spinBox->setValue(m_sqlRecord->value("empNo").toInt());
    ui->lineEdit->setText(m_sqlRecord->value("Name").toString());
    ui->comboBox->addItem(m_sqlRecord->value("Gender").toString());
    ui->dateEdit->setDate(m_sqlRecord->value("Birthday").toDate());
    ui->comboBox_3->addItem(m_sqlRecord->value("Province").toString());
    ui->comboBox_4->addItem(m_sqlRecord->value("Department").toString());
    ui->spinBox_2->setValue(m_sqlRecord->value("Salary").toInt());
    ui->plainTextEdit->setPlainText(m_sqlRecord->value("Memo").toString());
    QVariant va=newSqlRecord->value("Photo");
    if(va.isValid()){
        QPixmap pixmap;
        pixmap.loadFromData(va.toByteArray());
        ui->label_picture->setPixmap(pixmap.scaledToWidth(ui->label_picture->width()));
    }
    else{
        ui->label_picture->clear();
    }
}

TDialogData::TDialogData(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogData)
{
    ui->setupUi(this);
}

TDialogData::~TDialogData()
{
    delete ui;
}

void TDialogData::on_pushButton_loadPicture_clicked()
{
    QString aFile=QFileDialog::getOpenFileName(this,"请选择图片","","图片(*.jpg *.jpeg *.png)");
    QFile *file=new QFile(aFile);
    if(!file->open(QIODevice::ReadOnly)){
        QMessageBox::warning(this,"警告","图片打开失败！");
        return;
    }
    else{
        QByteArray data=file->readAll();
        file->close();
        m_sqlRecord->setValue("Photo",data);
        QPixmap pixmap;
        pixmap.loadFromData(data);
        ui->label_picture->setPixmap(pixmap.scaledToWidth(ui->label_picture->width()));
    }
}


void TDialogData::on_pushButton_clearPicture_clicked()
{
    m_sqlRecord->setNull("Photo");
    ui->label_picture->clear();
}

