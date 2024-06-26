/********************************************************************************
** Form generated from reading UI file 'tdialogdata.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGDATA_H
#define UI_TDIALOGDATA_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogData
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QDateEdit *dateEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_picture;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_loadPicture;
    QPushButton *pushButton_clearPicture;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *TDialogData)
    {
        if (TDialogData->objectName().isEmpty())
            TDialogData->setObjectName("TDialogData");
        TDialogData->resize(621, 448);
        gridLayout_3 = new QGridLayout(TDialogData);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(TDialogData);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(TDialogData);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(9999999);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(TDialogData);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(TDialogData);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(TDialogData);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(TDialogData);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(TDialogData);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(TDialogData);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox_3 = new QComboBox(TDialogData);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_3);

        label_6 = new QLabel(TDialogData);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBox_4 = new QComboBox(TDialogData);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox_4);

        label_7 = new QLabel(TDialogData);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        spinBox_2 = new QSpinBox(TDialogData);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMaximum(999999999);

        formLayout->setWidget(6, QFormLayout::FieldRole, spinBox_2);

        dateEdit = new QDateEdit(TDialogData);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDate(QDate(2000, 12, 3));

        formLayout->setWidget(3, QFormLayout::FieldRole, dateEdit);


        horizontalLayout->addLayout(formLayout);

        groupBox = new QGroupBox(TDialogData);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(220, 0));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_picture = new QLabel(groupBox);
        label_picture->setObjectName("label_picture");
        label_picture->setMinimumSize(QSize(220, 0));
        label_picture->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_picture, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_loadPicture = new QPushButton(TDialogData);
        pushButton_loadPicture->setObjectName("pushButton_loadPicture");

        verticalLayout->addWidget(pushButton_loadPicture);

        pushButton_clearPicture = new QPushButton(TDialogData);
        pushButton_clearPicture->setObjectName("pushButton_clearPicture");

        verticalLayout->addWidget(pushButton_clearPicture);

        pushButton_OK = new QPushButton(TDialogData);
        pushButton_OK->setObjectName("pushButton_OK");

        verticalLayout->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(TDialogData);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        verticalLayout->addWidget(pushButton_Cancel);


        gridLayout_3->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(TDialogData);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(TDialogData);
        QObject::connect(pushButton_OK, &QPushButton::clicked, TDialogData, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_Cancel, &QPushButton::clicked, TDialogData, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogData);
    } // setupUi

    void retranslateUi(QDialog *TDialogData)
    {
        TDialogData->setWindowTitle(QCoreApplication::translate("TDialogData", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TDialogData", "\345\267\245  \345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogData", "\345\247\223  \345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogData", "\346\200\247  \345\210\253", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("TDialogData", "\347\224\267", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("TDialogData", "\345\245\263", nullptr));

        label_4->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        label_5->setText(QCoreApplication::translate("TDialogData", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("TDialogData", "\346\261\237\350\213\217\347\234\201", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("TDialogData", "\345\214\227\344\272\254\345\270\202", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("TDialogData", "\345\271\277\344\270\234\347\234\201", nullptr));

        label_6->setText(QCoreApplication::translate("TDialogData", "\351\203\250  \351\227\250", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("TDialogData", "\347\250\213\345\272\217\345\221\230", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("TDialogData", "\350\277\220\347\273\264\345\267\245\347\250\213\345\270\210", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("TDialogData", "\345\220\216\347\253\257\347\250\213\345\272\217\345\221\230", nullptr));

        label_7->setText(QCoreApplication::translate("TDialogData", "\345\267\245  \350\265\204", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("TDialogData", "yyyy-M-d", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogData", "\347\205\247\347\211\207", nullptr));
        label_picture->setText(QCoreApplication::translate("TDialogData", "TextLabel", nullptr));
        pushButton_loadPicture->setText(QCoreApplication::translate("TDialogData", "\345\257\274\345\205\245\347\205\247\347\211\207", nullptr));
        pushButton_clearPicture->setText(QCoreApplication::translate("TDialogData", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("TDialogData", "\347\241\256\345\256\232", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("TDialogData", "\345\217\226\346\266\210", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("TDialogData", "\345\244\207\346\263\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogData: public Ui_TDialogData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGDATA_H
