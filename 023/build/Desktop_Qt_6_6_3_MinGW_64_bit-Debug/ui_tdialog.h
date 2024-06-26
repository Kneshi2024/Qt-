/********************************************************************************
** Form generated from reading UI file 'tdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOG_H
#define UI_TDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TDialog
{
public:
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox_Row;
    QLabel *label_2;
    QSpinBox *spinBox_Column;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *TDialog)
    {
        if (TDialog->objectName().isEmpty())
            TDialog->setObjectName("TDialog");
        TDialog->resize(350, 164);
        groupBox = new QGroupBox(TDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 20, 231, 100));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_Row = new QSpinBox(groupBox);
        spinBox_Row->setObjectName("spinBox_Row");

        gridLayout->addWidget(spinBox_Row, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_Column = new QSpinBox(groupBox);
        spinBox_Column->setObjectName("spinBox_Column");

        gridLayout->addWidget(spinBox_Column, 1, 1, 1, 1);

        pushButton_OK = new QPushButton(TDialog);
        pushButton_OK->setObjectName("pushButton_OK");
        pushButton_OK->setGeometry(QRect(250, 40, 93, 28));
        pushButton_Cancel = new QPushButton(TDialog);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(250, 90, 93, 28));

        retranslateUi(TDialog);
        QObject::connect(pushButton_OK, &QPushButton::clicked, TDialog, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_Cancel, &QPushButton::clicked, TDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialog);
    } // setupUi

    void retranslateUi(QDialog *TDialog)
    {
        TDialog->setWindowTitle(QCoreApplication::translate("TDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialog", "\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label->setText(QCoreApplication::translate("TDialog", "\350\241\214\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("TDialog", "\345\210\227\346\225\260", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("TDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialog: public Ui_TDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOG_H
