#include "tdialogheaders.h"
#include "ui_tdialogheaders.h"

void TDialogHeaders::setStringList(QStringList &list)
{
    m_model->setStringList(list);
    ui->listView->setModel(m_model);
}

QStringList TDialogHeaders::getList()
{
    return m_model->stringList();
}

TDialogHeaders::TDialogHeaders(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialogHeaders)
{
    ui->setupUi(this);
    m_model=new QStringListModel(this);
    ui->listView->setModel(m_model);
}

TDialogHeaders::~TDialogHeaders()
{
    delete ui;
}
