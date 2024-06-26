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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_SC;
    QLabel *label_DC;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(528, 340);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        label_SC = new QLabel(Widget);
        label_SC->setObjectName("label_SC");
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        label_SC->setFont(font);
        label_SC->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_SC);

        label_DC = new QLabel(Widget);
        label_DC->setObjectName("label_DC");
        label_DC->setFont(font);
        label_DC->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_DC);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\344\272\213\344\273\266\350\277\207\346\273\244\342\200\224\342\200\224\345\247\224\346\211\230\346\211\247\350\241\214", nullptr));
        label_SC->setText(QCoreApplication::translate("Widget", "\345\215\225\345\207\273\346\210\221", nullptr));
        label_DC->setText(QCoreApplication::translate("Widget", "\345\217\214\345\207\273\346\210\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
