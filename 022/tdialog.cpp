#include "tdialog.h"
#include "ui_tdialog.h"

void TDialog::setRowColumn(int row,int col)
{
    ui->spinBox_Row->setValue(row);
    ui->spinBox_Column->setValue(col);
}

int TDialog::getRow()
{
    return ui->spinBox_Row->value();
}

int TDialog::getColumn()
{
    return ui->spinBox_Column->value();
}

TDialog::TDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TDialog)
{
    ui->setupUi(this);
}

TDialog::~TDialog()
{
    delete ui;
}
