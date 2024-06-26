/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_create;
    QLabel *label;
    QSpinBox *spinBox;
    QRadioButton *radioButton_continue_time;
    QRadioButton *radioButton_once_time;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_preciseTimer;
    QRadioButton *radioButton_coarseTimer;
    QRadioButton *radioButton_veryCoarseTimer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_Hour;
    QLCDNumber *lcdNumber_Minute;
    QLCDNumber *lcdNumber_Second;
    QLabel *label_time_lose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(451, 412);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        pushButton_start = new QPushButton(groupBox);
        pushButton_start->setObjectName("pushButton_start");

        gridLayout->addWidget(pushButton_start, 0, 0, 1, 1);

        pushButton_stop = new QPushButton(groupBox);
        pushButton_stop->setObjectName("pushButton_stop");

        gridLayout->addWidget(pushButton_stop, 0, 1, 1, 1);

        pushButton_create = new QPushButton(groupBox);
        pushButton_create->setObjectName("pushButton_create");

        gridLayout->addWidget(pushButton_create, 0, 2, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(999999);
        spinBox->setValue(2000);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        radioButton_continue_time = new QRadioButton(groupBox);
        radioButton_continue_time->setObjectName("radioButton_continue_time");
        radioButton_continue_time->setChecked(true);

        gridLayout->addWidget(radioButton_continue_time, 1, 2, 1, 1);

        radioButton_once_time = new QRadioButton(groupBox);
        radioButton_once_time->setObjectName("radioButton_once_time");

        gridLayout->addWidget(radioButton_once_time, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        radioButton_preciseTimer = new QRadioButton(groupBox_2);
        radioButton_preciseTimer->setObjectName("radioButton_preciseTimer");

        gridLayout_2->addWidget(radioButton_preciseTimer, 0, 0, 1, 1);

        radioButton_coarseTimer = new QRadioButton(groupBox_2);
        radioButton_coarseTimer->setObjectName("radioButton_coarseTimer");

        gridLayout_2->addWidget(radioButton_coarseTimer, 0, 1, 1, 1);

        radioButton_veryCoarseTimer = new QRadioButton(groupBox_2);
        radioButton_veryCoarseTimer->setObjectName("radioButton_veryCoarseTimer");

        gridLayout_2->addWidget(radioButton_veryCoarseTimer, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        lcdNumber_Hour = new QLCDNumber(groupBox_3);
        lcdNumber_Hour->setObjectName("lcdNumber_Hour");
        sizePolicy.setHeightForWidth(lcdNumber_Hour->sizePolicy().hasHeightForWidth());
        lcdNumber_Hour->setSizePolicy(sizePolicy);
        lcdNumber_Hour->setDigitCount(2);
        lcdNumber_Hour->setProperty("intValue", QVariant(23));

        gridLayout_3->addWidget(lcdNumber_Hour, 0, 0, 1, 1);

        lcdNumber_Minute = new QLCDNumber(groupBox_3);
        lcdNumber_Minute->setObjectName("lcdNumber_Minute");
        sizePolicy.setHeightForWidth(lcdNumber_Minute->sizePolicy().hasHeightForWidth());
        lcdNumber_Minute->setSizePolicy(sizePolicy);
        lcdNumber_Minute->setDigitCount(2);
        lcdNumber_Minute->setProperty("intValue", QVariant(23));

        gridLayout_3->addWidget(lcdNumber_Minute, 0, 1, 1, 1);

        lcdNumber_Second = new QLCDNumber(groupBox_3);
        lcdNumber_Second->setObjectName("lcdNumber_Second");
        sizePolicy.setHeightForWidth(lcdNumber_Second->sizePolicy().hasHeightForWidth());
        lcdNumber_Second->setSizePolicy(sizePolicy);
        lcdNumber_Second->setDigitCount(2);
        lcdNumber_Second->setProperty("intValue", QVariant(23));

        gridLayout_3->addWidget(lcdNumber_Second, 0, 2, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        label_time_lose = new QLabel(Widget);
        label_time_lose->setObjectName("label_time_lose");

        verticalLayout->addWidget(label_time_lose);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250", nullptr));
        pushButton_start->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        pushButton_create->setText(QCoreApplication::translate("Widget", "\345\212\250\346\200\201\345\210\233\345\273\272\345\215\225\346\254\241\345\256\232\346\227\266\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\221\250\346\234\237", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("Widget", " ms", nullptr));
        radioButton_continue_time->setText(QCoreApplication::translate("Widget", "\350\277\236\347\273\255\345\256\232\346\227\266", nullptr));
        radioButton_once_time->setText(QCoreApplication::translate("Widget", "\345\215\225\346\254\241\345\256\232\346\227\266", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\231\250\347\262\276\345\272\246", nullptr));
        radioButton_preciseTimer->setText(QCoreApplication::translate("Widget", "PreciseTimer", nullptr));
        radioButton_coarseTimer->setText(QCoreApplication::translate("Widget", "CoarseTimer", nullptr));
        radioButton_veryCoarseTimer->setText(QCoreApplication::translate("Widget", "VeryCoarseTimer", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\210\345\260\217\346\227\266\357\274\232\345\210\206\357\274\232\347\247\222\357\274\211", nullptr));
        label_time_lose->setText(QCoreApplication::translate("Widget", "\346\265\201\345\244\261\347\232\204\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
