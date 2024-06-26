/********************************************************************************
** Form generated from reading UI file 'tdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGHEADERS_H
#define UI_TDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogHeaders
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListView *listView;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *TDialogHeaders)
    {
        if (TDialogHeaders->objectName().isEmpty())
            TDialogHeaders->setObjectName("TDialogHeaders");
        TDialogHeaders->resize(487, 325);
        horizontalLayout = new QHBoxLayout(TDialogHeaders);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(TDialogHeaders);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        listView = new QListView(groupBox);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox);

        frame = new QFrame(TDialogHeaders);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_5 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 58, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame);


        retranslateUi(TDialogHeaders);
        QObject::connect(pushButton, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::accept));
        QObject::connect(pushButton_2, &QPushButton::clicked, TDialogHeaders, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *TDialogHeaders)
    {
        TDialogHeaders->setWindowTitle(QCoreApplication::translate("TDialogHeaders", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        pushButton->setText(QCoreApplication::translate("TDialogHeaders", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogHeaders: public Ui_TDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGHEADERS_H
