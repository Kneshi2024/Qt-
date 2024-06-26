/********************************************************************************
** Form generated from reading UI file 'tlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TLOGINDIALOG_H
#define UI_TLOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TLoginDialog
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TLoginDialog)
    {
        if (TLoginDialog->objectName().isEmpty())
            TLoginDialog->setObjectName("TLoginDialog");
        TLoginDialog->resize(770, 460);
        label = new QLabel(TLoginDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -10, 770, 450));
        label->setPixmap(QPixmap(QString::fromUtf8(":/back_small.jpg")));
        widget = new QWidget(TLoginDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 430, 771, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_2);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(false);

        horizontalLayout->addWidget(checkBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(TLoginDialog);
        QObject::connect(pushButton_2, &QPushButton::clicked, TLoginDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TLoginDialog);
    } // setupUi

    void retranslateUi(QDialog *TLoginDialog)
    {
        TLoginDialog->setWindowTitle(QCoreApplication::translate("TLoginDialog", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("TLoginDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("TLoginDialog", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        checkBox->setText(QCoreApplication::translate("TLoginDialog", "\344\277\235\345\255\230\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton->setText(QCoreApplication::translate("TLoginDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TLoginDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TLoginDialog: public Ui_TLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TLOGINDIALOG_H
