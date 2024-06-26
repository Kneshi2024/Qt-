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
#include <QtWidgets/QWidget>
#include <tmylabel.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    TMyLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(512, 346);
        label = new TMyLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 140, 241, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\272\213\344\273\266\344\270\216\344\277\241\345\217\267\342\200\224\342\200\224\350\277\233\351\230\266", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\217\214\345\207\273\346\210\221\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
