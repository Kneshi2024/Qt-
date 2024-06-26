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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_front_back;
    QPushButton *pushButton_left_right;
    QPushButton *pushButton_first_last;
    QPushButton *pushButton_section;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_resize;
    QPushButton *pushButton_size_length;
    QPushButton *pushButton_fill;
    QPushButton *pushButton_isNull_isEmpty;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_trimmed_simplified;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_remove;
    QPushButton *pushButton_replace;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboBox_str1;
    QLabel *label_2;
    QComboBox *comboBox_str2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_clear;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(664, 517);
        horizontalLayout_3 = new QHBoxLayout(Widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        splitter = new QSplitter(Widget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_front_back = new QPushButton(groupBox);
        pushButton_front_back->setObjectName("pushButton_front_back");

        gridLayout_2->addWidget(pushButton_front_back, 0, 0, 1, 1);

        pushButton_left_right = new QPushButton(groupBox);
        pushButton_left_right->setObjectName("pushButton_left_right");

        gridLayout_2->addWidget(pushButton_left_right, 0, 1, 1, 1);

        pushButton_first_last = new QPushButton(groupBox);
        pushButton_first_last->setObjectName("pushButton_first_last");

        gridLayout_2->addWidget(pushButton_first_last, 1, 0, 1, 1);

        pushButton_section = new QPushButton(groupBox);
        pushButton_section->setObjectName("pushButton_section");

        gridLayout_2->addWidget(pushButton_section, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_resize = new QPushButton(groupBox_2);
        pushButton_resize->setObjectName("pushButton_resize");

        gridLayout_3->addWidget(pushButton_resize, 0, 1, 1, 1);

        pushButton_size_length = new QPushButton(groupBox_2);
        pushButton_size_length->setObjectName("pushButton_size_length");

        gridLayout_3->addWidget(pushButton_size_length, 1, 0, 1, 1);

        pushButton_fill = new QPushButton(groupBox_2);
        pushButton_fill->setObjectName("pushButton_fill");

        gridLayout_3->addWidget(pushButton_fill, 1, 1, 1, 1);

        pushButton_isNull_isEmpty = new QPushButton(groupBox_2);
        pushButton_isNull_isEmpty->setObjectName("pushButton_isNull_isEmpty");

        gridLayout_3->addWidget(pushButton_isNull_isEmpty, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        pushButton_trimmed_simplified = new QPushButton(groupBox_3);
        pushButton_trimmed_simplified->setObjectName("pushButton_trimmed_simplified");

        gridLayout_4->addWidget(pushButton_trimmed_simplified, 0, 0, 1, 1);

        pushButton_insert = new QPushButton(groupBox_3);
        pushButton_insert->setObjectName("pushButton_insert");

        gridLayout_4->addWidget(pushButton_insert, 0, 1, 1, 1);

        pushButton_remove = new QPushButton(groupBox_3);
        pushButton_remove->setObjectName("pushButton_remove");

        gridLayout_4->addWidget(pushButton_remove, 1, 0, 1, 1);

        pushButton_replace = new QPushButton(groupBox_3);
        pushButton_replace->setObjectName("pushButton_replace");

        gridLayout_4->addWidget(pushButton_replace, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox_4);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboBox_str1 = new QComboBox(groupBox_4);
        comboBox_str1->addItem(QString());
        comboBox_str1->addItem(QString());
        comboBox_str1->setObjectName("comboBox_str1");

        gridLayout->addWidget(comboBox_str1, 0, 1, 1, 3);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBox_str2 = new QComboBox(groupBox_4);
        comboBox_str2->addItem(QString());
        comboBox_str2->addItem(QString());
        comboBox_str2->addItem(QString());
        comboBox_str2->setObjectName("comboBox_str2");

        gridLayout->addWidget(comboBox_str2, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName("spinBox");

        gridLayout->addWidget(spinBox, 1, 3, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(frame_2);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_clear = new QPushButton(groupBox_5);
        pushButton_clear->setObjectName("pushButton_clear");

        verticalLayout_3->addWidget(pushButton_clear);

        plainTextEdit = new QPlainTextEdit(groupBox_5);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout_3->addWidget(plainTextEdit);


        verticalLayout_4->addWidget(groupBox_5);

        splitter->addWidget(frame_2);

        horizontalLayout_3->addWidget(splitter);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "QString\345\270\270\347\224\250\345\212\237\350\203\275\346\265\213\350\257\225", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "\345\255\227\347\254\246\344\270\262\346\210\252\345\217\226", nullptr));
        pushButton_front_back->setText(QCoreApplication::translate("Widget", "front && back", nullptr));
        pushButton_left_right->setText(QCoreApplication::translate("Widget", "left && right", nullptr));
        pushButton_first_last->setText(QCoreApplication::translate("Widget", "first && last", nullptr));
        pushButton_section->setText(QCoreApplication::translate("Widget", "section*", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Widget", "\345\255\230\345\202\250\347\233\270\345\205\263", nullptr));
        pushButton_resize->setText(QCoreApplication::translate("Widget", "resize", nullptr));
        pushButton_size_length->setText(QCoreApplication::translate("Widget", "size && length", nullptr));
        pushButton_fill->setText(QCoreApplication::translate("Widget", "fill", nullptr));
        pushButton_isNull_isEmpty->setText(QCoreApplication::translate("Widget", "isNull && isEmpty", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Widget", "\350\275\254\346\215\242\346\210\226\344\277\256\346\224\271", nullptr));
        pushButton_trimmed_simplified->setText(QCoreApplication::translate("Widget", "trimmed && simplified", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("Widget", "insert", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("Widget", "remove", nullptr));
        pushButton_replace->setText(QCoreApplication::translate("Widget", "replace", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Widget", "\350\276\223\345\205\245", nullptr));
        label->setText(QCoreApplication::translate("Widget", "str1", nullptr));
        comboBox_str1->setItemText(0, QCoreApplication::translate("Widget", "G:/QT6/QT_Creator/003.cpp", nullptr));
        comboBox_str1->setItemText(1, QCoreApplication::translate("Widget", "   Are  you  ok   ?", nullptr));

        label_2->setText(QCoreApplication::translate("Widget", "str2", nullptr));
        comboBox_str2->setItemText(0, QCoreApplication::translate("Widget", "/", nullptr));
        comboBox_str2->setItemText(1, QCoreApplication::translate("Widget", "QT", nullptr));
        comboBox_str2->setItemText(2, QCoreApplication::translate("Widget", ":", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\345\217\202\346\225\260", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Widget", "\347\273\223\346\236\234\346\230\276\347\244\272", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
