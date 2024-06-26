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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_str;
    QPushButton *pushButton_Unicode;
    QLabel *label_2;
    QLineEdit *lineEdit_char;
    QPushButton *pushButton_Check;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_UTF16;
    QPushButton *pushButton_Latin1;
    QPushButton *pushButton_QChar;
    QPushButton *pushButton_Clear;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_Digit;
    QCheckBox *checkBox_Letter;
    QCheckBox *checkBox_LetterOrNumber;
    QCheckBox *checkBox_Upper;
    QCheckBox *checkBox_Lower;
    QCheckBox *checkBox_Mark;
    QCheckBox *checkBox_Space;
    QCheckBox *checkBox_Symbol;
    QCheckBox *checkBox_Punct;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(457, 537);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_str = new QLineEdit(groupBox);
        lineEdit_str->setObjectName("lineEdit_str");

        gridLayout->addWidget(lineEdit_str, 0, 1, 1, 1);

        pushButton_Unicode = new QPushButton(groupBox);
        pushButton_Unicode->setObjectName("pushButton_Unicode");

        gridLayout->addWidget(pushButton_Unicode, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_char = new QLineEdit(groupBox);
        lineEdit_char->setObjectName("lineEdit_char");

        gridLayout->addWidget(lineEdit_char, 1, 1, 1, 1);

        pushButton_Check = new QPushButton(groupBox);
        pushButton_Check->setObjectName("pushButton_Check");

        gridLayout->addWidget(pushButton_Check, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_UTF16 = new QPushButton(groupBox_2);
        pushButton_UTF16->setObjectName("pushButton_UTF16");

        gridLayout_2->addWidget(pushButton_UTF16, 0, 1, 1, 1);

        pushButton_Latin1 = new QPushButton(groupBox_2);
        pushButton_Latin1->setObjectName("pushButton_Latin1");

        gridLayout_2->addWidget(pushButton_Latin1, 0, 0, 1, 1);

        pushButton_QChar = new QPushButton(groupBox_2);
        pushButton_QChar->setObjectName("pushButton_QChar");

        gridLayout_2->addWidget(pushButton_QChar, 1, 0, 1, 1);

        pushButton_Clear = new QPushButton(groupBox_2);
        pushButton_Clear->setObjectName("pushButton_Clear");

        gridLayout_2->addWidget(pushButton_Clear, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox_3 = new QGroupBox(Widget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        plainTextEdit = new QPlainTextEdit(groupBox_3);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_3->addWidget(plainTextEdit, 0, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(Widget);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBox_Digit = new QCheckBox(groupBox_4);
        checkBox_Digit->setObjectName("checkBox_Digit");

        gridLayout_4->addWidget(checkBox_Digit, 0, 0, 1, 1);

        checkBox_Letter = new QCheckBox(groupBox_4);
        checkBox_Letter->setObjectName("checkBox_Letter");

        gridLayout_4->addWidget(checkBox_Letter, 1, 0, 1, 1);

        checkBox_LetterOrNumber = new QCheckBox(groupBox_4);
        checkBox_LetterOrNumber->setObjectName("checkBox_LetterOrNumber");

        gridLayout_4->addWidget(checkBox_LetterOrNumber, 2, 0, 1, 1);

        checkBox_Upper = new QCheckBox(groupBox_4);
        checkBox_Upper->setObjectName("checkBox_Upper");

        gridLayout_4->addWidget(checkBox_Upper, 3, 0, 1, 1);

        checkBox_Lower = new QCheckBox(groupBox_4);
        checkBox_Lower->setObjectName("checkBox_Lower");

        gridLayout_4->addWidget(checkBox_Lower, 4, 0, 1, 1);

        checkBox_Mark = new QCheckBox(groupBox_4);
        checkBox_Mark->setObjectName("checkBox_Mark");

        gridLayout_4->addWidget(checkBox_Mark, 5, 0, 1, 1);

        checkBox_Space = new QCheckBox(groupBox_4);
        checkBox_Space->setObjectName("checkBox_Space");

        gridLayout_4->addWidget(checkBox_Space, 6, 0, 1, 1);

        checkBox_Symbol = new QCheckBox(groupBox_4);
        checkBox_Symbol->setObjectName("checkBox_Symbol");

        gridLayout_4->addWidget(checkBox_Symbol, 7, 0, 1, 1);

        checkBox_Punct = new QCheckBox(groupBox_4);
        checkBox_Punct->setObjectName("checkBox_Punct");

        gridLayout_4->addWidget(checkBox_Punct, 8, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QChar\345\212\237\350\203\275\346\265\213\350\257\225", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\255\227\347\254\246\344\270\262", nullptr));
        lineEdit_str->setText(QCoreApplication::translate("Widget", "Hello,\351\235\222\345\262\233", nullptr));
        pushButton_Unicode->setText(QCoreApplication::translate("Widget", "\346\257\217\344\270\252\345\255\227\347\254\246\347\232\204Unicode", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\350\276\223\345\205\245\345\215\225\344\270\252\345\255\227\347\254\246", nullptr));
        lineEdit_char->setText(QCoreApplication::translate("Widget", "a", nullptr));
        pushButton_Check->setText(QCoreApplication::translate("Widget", "\345\215\225\344\270\252\345\255\227\347\254\246\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\205\266\344\273\226\346\265\213\350\257\225\345\222\214\345\212\237\350\203\275", nullptr));
        pushButton_UTF16->setText(QCoreApplication::translate("Widget", "\344\270\216UTF-16\350\275\254\346\215\242", nullptr));
        pushButton_Latin1->setText(QCoreApplication::translate("Widget", "\344\270\216Latin1\350\275\254\346\215\242", nullptr));
        pushButton_QChar->setText(QCoreApplication::translate("Widget", "QChar\346\257\224\350\276\203\345\222\214\346\233\277\346\215\242", nullptr));
        pushButton_Clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\346\230\276\347\244\272\347\273\223\346\236\234", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "QChar\347\211\271\346\200\247\345\210\244\346\226\255", nullptr));
        checkBox_Digit->setText(QCoreApplication::translate("Widget", "isDigit", nullptr));
        checkBox_Letter->setText(QCoreApplication::translate("Widget", "isLetter", nullptr));
        checkBox_LetterOrNumber->setText(QCoreApplication::translate("Widget", "isLetterOrNumber", nullptr));
        checkBox_Upper->setText(QCoreApplication::translate("Widget", "isUpper", nullptr));
        checkBox_Lower->setText(QCoreApplication::translate("Widget", "isLower", nullptr));
        checkBox_Mark->setText(QCoreApplication::translate("Widget", "isMark", nullptr));
        checkBox_Space->setText(QCoreApplication::translate("Widget", "isSpace", nullptr));
        checkBox_Symbol->setText(QCoreApplication::translate("Widget", "isSymbol", nullptr));
        checkBox_Punct->setText(QCoreApplication::translate("Widget", "isPunct", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
