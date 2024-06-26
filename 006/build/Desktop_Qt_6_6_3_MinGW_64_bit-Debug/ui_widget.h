/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_get_date_time;
    QLabel *label_4;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLineEdit *lineEdit_time;
    QPushButton *pushButton_debug_time;
    QPushButton *pushButton_set_time;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLineEdit *lineEdit_date;
    QPushButton *pushButton_debug_date;
    QPushButton *pushButton_set_date;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *lineEdit_date_time;
    QPushButton *pushButton_debug_date_time;
    QPushButton *pushButton_set_time_date;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_choose_date_time;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(875, 368);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        pushButton_get_date_time = new QPushButton(groupBox);
        pushButton_get_date_time->setObjectName("pushButton_get_date_time");

        gridLayout->addWidget(pushButton_get_date_time, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        timeEdit = new QTimeEdit(groupBox);
        timeEdit->setObjectName("timeEdit");
        timeEdit->setTime(QTime(16, 25, 32));

        gridLayout->addWidget(timeEdit, 1, 1, 1, 1);

        lineEdit_time = new QLineEdit(groupBox);
        lineEdit_time->setObjectName("lineEdit_time");

        gridLayout->addWidget(lineEdit_time, 1, 2, 1, 1);

        pushButton_debug_time = new QPushButton(groupBox);
        pushButton_debug_time->setObjectName("pushButton_debug_time");

        gridLayout->addWidget(pushButton_debug_time, 2, 1, 1, 1);

        pushButton_set_time = new QPushButton(groupBox);
        pushButton_set_time->setObjectName("pushButton_set_time");

        gridLayout->addWidget(pushButton_set_time, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setDate(QDate(2024, 1, 1));

        gridLayout->addWidget(dateEdit, 3, 1, 1, 1);

        lineEdit_date = new QLineEdit(groupBox);
        lineEdit_date->setObjectName("lineEdit_date");

        gridLayout->addWidget(lineEdit_date, 3, 2, 1, 1);

        pushButton_debug_date = new QPushButton(groupBox);
        pushButton_debug_date->setObjectName("pushButton_debug_date");

        gridLayout->addWidget(pushButton_debug_date, 4, 1, 1, 1);

        pushButton_set_date = new QPushButton(groupBox);
        pushButton_set_date->setObjectName("pushButton_set_date");

        gridLayout->addWidget(pushButton_set_date, 4, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setDateTime(QDateTime(QDate(2024, 1, 1), QTime(0, 0, 0)));

        gridLayout->addWidget(dateTimeEdit, 5, 1, 1, 1);

        lineEdit_date_time = new QLineEdit(groupBox);
        lineEdit_date_time->setObjectName("lineEdit_date_time");

        gridLayout->addWidget(lineEdit_date_time, 5, 2, 1, 1);

        pushButton_debug_date_time = new QPushButton(groupBox);
        pushButton_debug_date_time->setObjectName("pushButton_debug_date_time");

        gridLayout->addWidget(pushButton_debug_date_time, 6, 1, 1, 1);

        pushButton_set_time_date = new QPushButton(groupBox);
        pushButton_set_time_date->setObjectName("pushButton_set_time_date");

        gridLayout->addWidget(pushButton_set_time_date, 6, 2, 1, 1);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_choose_date_time = new QLineEdit(groupBox_2);
        lineEdit_choose_date_time->setObjectName("lineEdit_choose_date_time");

        gridLayout_2->addWidget(lineEdit_choose_date_time, 0, 1, 1, 1);

        calendarWidget = new QCalendarWidget(groupBox_2);
        calendarWidget->setObjectName("calendarWidget");

        gridLayout_2->addWidget(calendarWidget, 1, 0, 1, 2);


        horizontalLayout->addWidget(groupBox_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264demo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        pushButton_get_date_time->setText(QCoreApplication::translate("Widget", "\350\257\273\345\217\226\345\275\223\345\211\215\346\227\245\346\234\237\345\222\214\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\227\266 \351\227\264", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "H:mm:ss", nullptr));
        lineEdit_time->setInputMask(QCoreApplication::translate("Widget", "99:99:99;_", nullptr));
        pushButton_debug_time->setText(QCoreApplication::translate("Widget", "qDebug--time", nullptr));
        pushButton_set_time->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\266\351\227\264fromString", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\346\227\245 \346\234\237", nullptr));
        lineEdit_date->setInputMask(QCoreApplication::translate("Widget", "9999-99-99;_", nullptr));
        pushButton_debug_date->setText(QCoreApplication::translate("Widget", "qDebug--date", nullptr));
        pushButton_set_date->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\346\227\245\346\234\237fromString", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Widget", "yyyy/M/d H:mm:ss", nullptr));
        lineEdit_date_time->setInputMask(QCoreApplication::translate("Widget", "9999-99-99 99:99:99", nullptr));
        pushButton_debug_date_time->setText(QCoreApplication::translate("Widget", "qDebug--date--time", nullptr));
        pushButton_set_time_date->setText(QCoreApplication::translate("Widget", "\346\227\245\346\234\237\346\227\266\351\227\264fromString", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\346\227\245\345\216\206\351\200\211\346\213\251", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\351\200\211\346\213\251\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
