/********************************************************************************
** Form generated from reading UI file 'tdialoglocate.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGLOCATE_H
#define UI_TDIALOGLOCATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogLocate
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpinBox *spinBox_column;
    QCheckBox *checkBox_columnUp;
    QLabel *label_2;
    QSpinBox *spinBox_row;
    QCheckBox *checkBox_rowUp;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_setWords;
    QPushButton *pushButton_quit;

    void setupUi(QDialog *TDialogLocate)
    {
        if (TDialogLocate->objectName().isEmpty())
            TDialogLocate->setObjectName("TDialogLocate");
        TDialogLocate->resize(332, 145);
        horizontalLayout = new QHBoxLayout(TDialogLocate);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(TDialogLocate);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        spinBox_column = new QSpinBox(TDialogLocate);
        spinBox_column->setObjectName("spinBox_column");

        gridLayout->addWidget(spinBox_column, 0, 1, 1, 1);

        checkBox_columnUp = new QCheckBox(TDialogLocate);
        checkBox_columnUp->setObjectName("checkBox_columnUp");

        gridLayout->addWidget(checkBox_columnUp, 0, 2, 1, 1);

        label_2 = new QLabel(TDialogLocate);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_row = new QSpinBox(TDialogLocate);
        spinBox_row->setObjectName("spinBox_row");

        gridLayout->addWidget(spinBox_row, 1, 1, 1, 1);

        checkBox_rowUp = new QCheckBox(TDialogLocate);
        checkBox_rowUp->setObjectName("checkBox_rowUp");

        gridLayout->addWidget(checkBox_rowUp, 1, 2, 1, 1);

        label_3 = new QLabel(TDialogLocate);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit = new QLineEdit(TDialogLocate);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        pushButton_setWords = new QPushButton(TDialogLocate);
        pushButton_setWords->setObjectName("pushButton_setWords");

        verticalLayout->addWidget(pushButton_setWords);

        pushButton_quit = new QPushButton(TDialogLocate);
        pushButton_quit->setObjectName("pushButton_quit");

        verticalLayout->addWidget(pushButton_quit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TDialogLocate);
        QObject::connect(pushButton_quit, &QPushButton::clicked, TDialogLocate, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(TDialogLocate);
    } // setupUi

    void retranslateUi(QDialog *TDialogLocate)
    {
        TDialogLocate->setWindowTitle(QCoreApplication::translate("TDialogLocate", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227 \345\217\267", nullptr));
        checkBox_columnUp->setText(QCoreApplication::translate("TDialogLocate", "\345\210\227\345\242\236", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214 \345\217\267", nullptr));
        checkBox_rowUp->setText(QCoreApplication::translate("TDialogLocate", "\350\241\214\345\242\236", nullptr));
        label_3->setText(QCoreApplication::translate("TDialogLocate", "\346\226\207 \345\255\227", nullptr));
        pushButton_setWords->setText(QCoreApplication::translate("TDialogLocate", "\350\256\276\347\275\256\346\226\207\345\255\227", nullptr));
        pushButton_quit->setText(QCoreApplication::translate("TDialogLocate", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogLocate: public Ui_TDialogLocate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGLOCATE_H
