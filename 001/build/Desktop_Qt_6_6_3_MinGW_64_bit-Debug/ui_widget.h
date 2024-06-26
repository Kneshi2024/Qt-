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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox_boy;
    QPushButton *pushButton_Boy_Inc;
    QPushButton *pushButton_All_TXT;
    QLabel *label_2;
    QSpinBox *spinBox_girl;
    QPushButton *pushButton_Girl_Inc;
    QPushButton *pushButton_Clear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(516, 328);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBox_boy = new QSpinBox(Widget);
        spinBox_boy->setObjectName("spinBox_boy");
        spinBox_boy->setValue(15);

        gridLayout->addWidget(spinBox_boy, 0, 1, 1, 1);

        pushButton_Boy_Inc = new QPushButton(Widget);
        pushButton_Boy_Inc->setObjectName("pushButton_Boy_Inc");

        gridLayout->addWidget(pushButton_Boy_Inc, 0, 2, 1, 1);

        pushButton_All_TXT = new QPushButton(Widget);
        pushButton_All_TXT->setObjectName("pushButton_All_TXT");

        gridLayout->addWidget(pushButton_All_TXT, 0, 3, 1, 1);

        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBox_girl = new QSpinBox(Widget);
        spinBox_girl->setObjectName("spinBox_girl");
        spinBox_girl->setValue(20);

        gridLayout->addWidget(spinBox_girl, 1, 1, 1, 1);

        pushButton_Girl_Inc = new QPushButton(Widget);
        pushButton_Girl_Inc->setObjectName("pushButton_Girl_Inc");

        gridLayout->addWidget(pushButton_Girl_Inc, 1, 2, 1, 1);

        pushButton_Clear = new QPushButton(Widget);
        pushButton_Clear->setObjectName("pushButton_Clear");

        gridLayout->addWidget(pushButton_Clear, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setUnderline(false);
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\345\205\203\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204", nullptr));
        pushButton_Boy_Inc->setText(QCoreApplication::translate("Widget", "boy\345\271\264\351\276\204\345\242\236\345\244\247\344\270\200\345\262\201", nullptr));
        pushButton_All_TXT->setText(QCoreApplication::translate("Widget", "\345\257\271\350\261\241\344\277\241\346\201\257\345\205\203", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204", nullptr));
        pushButton_Girl_Inc->setText(QCoreApplication::translate("Widget", "girl\345\271\264\351\276\204\345\242\236\345\244\247\344\270\200\345\262\201", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("Widget", "\345\205\203\345\257\271\350\261\241\347\263\273\347\273\237\345\212\237\350\203\275\347\244\272\344\276\213\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
