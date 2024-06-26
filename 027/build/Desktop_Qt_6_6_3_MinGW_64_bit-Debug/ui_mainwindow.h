/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_open;
    QAction *action_add;
    QAction *action_insert;
    QAction *action_delete;
    QAction *action_setPhoto;
    QAction *action_clearPhoto;
    QAction *action_increase;
    QAction *action_save;
    QAction *action_cancel;
    QAction *action_quit;
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_sort;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox_sort;
    QRadioButton *radioButton_rise;
    QRadioButton *radioButton_down;
    QGroupBox *groupBox_filter;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton__man;
    QRadioButton *radioButton_womon;
    QRadioButton *radioButton_showAll;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QComboBox *comboBox_sex;
    QLabel *label_5;
    QComboBox *comboBox_birthDay;
    QLabel *label_6;
    QComboBox *comboBox_birthProvince;
    QLabel *label_7;
    QComboBox *comboBox_department;
    QLabel *label_8;
    QSpinBox *spinBox_salary;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1039, 626);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_open->setMenuRole(QAction::NoRole);
        action_add = new QAction(MainWindow);
        action_add->setObjectName("action_add");
        action_add->setEnabled(false);
        action_add->setMenuRole(QAction::NoRole);
        action_insert = new QAction(MainWindow);
        action_insert->setObjectName("action_insert");
        action_insert->setEnabled(false);
        action_insert->setMenuRole(QAction::NoRole);
        action_delete = new QAction(MainWindow);
        action_delete->setObjectName("action_delete");
        action_delete->setEnabled(false);
        action_delete->setMenuRole(QAction::NoRole);
        action_setPhoto = new QAction(MainWindow);
        action_setPhoto->setObjectName("action_setPhoto");
        action_setPhoto->setEnabled(false);
        action_setPhoto->setMenuRole(QAction::NoRole);
        action_clearPhoto = new QAction(MainWindow);
        action_clearPhoto->setObjectName("action_clearPhoto");
        action_clearPhoto->setEnabled(false);
        action_clearPhoto->setMenuRole(QAction::NoRole);
        action_increase = new QAction(MainWindow);
        action_increase->setObjectName("action_increase");
        action_increase->setEnabled(false);
        action_increase->setMenuRole(QAction::NoRole);
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_save->setEnabled(false);
        action_save->setMenuRole(QAction::NoRole);
        action_cancel = new QAction(MainWindow);
        action_cancel->setObjectName("action_cancel");
        action_cancel->setEnabled(false);
        action_cancel->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 10, 1021, 561));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(540, 16777215));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        groupBox_sort = new QGroupBox(groupBox);
        groupBox_sort->setObjectName("groupBox_sort");
        horizontalLayout = new QHBoxLayout(groupBox_sort);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox_sort);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        comboBox_sort = new QComboBox(groupBox_sort);
        comboBox_sort->setObjectName("comboBox_sort");

        horizontalLayout->addWidget(comboBox_sort);

        radioButton_rise = new QRadioButton(groupBox_sort);
        radioButton_rise->setObjectName("radioButton_rise");

        horizontalLayout->addWidget(radioButton_rise);

        radioButton_down = new QRadioButton(groupBox_sort);
        radioButton_down->setObjectName("radioButton_down");

        horizontalLayout->addWidget(radioButton_down);


        horizontalLayout_3->addWidget(groupBox_sort);

        groupBox_filter = new QGroupBox(groupBox);
        groupBox_filter->setObjectName("groupBox_filter");
        horizontalLayout_2 = new QHBoxLayout(groupBox_filter);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        radioButton__man = new QRadioButton(groupBox_filter);
        radioButton__man->setObjectName("radioButton__man");

        horizontalLayout_2->addWidget(radioButton__man);

        radioButton_womon = new QRadioButton(groupBox_filter);
        radioButton_womon->setObjectName("radioButton_womon");

        horizontalLayout_2->addWidget(radioButton_womon);

        radioButton_showAll = new QRadioButton(groupBox_filter);
        radioButton_showAll->setObjectName("radioButton_showAll");
        radioButton_showAll->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_showAll);


        horizontalLayout_3->addWidget(groupBox_filter);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        gridLayout_4->addWidget(tableView, 1, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 250, 461, 291));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName("gridLayout_3");
        plainTextEdit_2 = new QPlainTextEdit(groupBox_4);
        plainTextEdit_2->setObjectName("plainTextEdit_2");

        gridLayout_3->addWidget(plainTextEdit_2, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(240, 10, 231, 241));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 221, 231));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(99999);
        spinBox->setValue(1);

        gridLayout->addWidget(spinBox, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        comboBox_sex = new QComboBox(layoutWidget);
        comboBox_sex->addItem(QString());
        comboBox_sex->addItem(QString());
        comboBox_sex->setObjectName("comboBox_sex");

        gridLayout->addWidget(comboBox_sex, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        comboBox_birthDay = new QComboBox(layoutWidget);
        comboBox_birthDay->addItem(QString());
        comboBox_birthDay->addItem(QString());
        comboBox_birthDay->addItem(QString());
        comboBox_birthDay->setObjectName("comboBox_birthDay");
        comboBox_birthDay->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(comboBox_birthDay, 3, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        comboBox_birthProvince = new QComboBox(layoutWidget);
        comboBox_birthProvince->addItem(QString());
        comboBox_birthProvince->addItem(QString());
        comboBox_birthProvince->addItem(QString());
        comboBox_birthProvince->setObjectName("comboBox_birthProvince");

        gridLayout->addWidget(comboBox_birthProvince, 4, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        comboBox_department = new QComboBox(layoutWidget);
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->addItem(QString());
        comboBox_department->setObjectName("comboBox_department");

        gridLayout->addWidget(comboBox_department, 5, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        spinBox_salary = new QSpinBox(layoutWidget);
        spinBox_salary->setObjectName("spinBox_salary");
        spinBox_salary->setMaximum(9999999);

        gridLayout->addWidget(spinBox_salary, 6, 1, 1, 1);

        splitter->addWidget(groupBox_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_open);
        toolBar->addSeparator();
        toolBar->addAction(action_add);
        toolBar->addAction(action_insert);
        toolBar->addAction(action_delete);
        toolBar->addSeparator();
        toolBar->addAction(action_setPhoto);
        toolBar->addAction(action_clearPhoto);
        toolBar->addAction(action_increase);
        toolBar->addSeparator();
        toolBar->addAction(action_save);
        toolBar->addAction(action_cancel);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        action_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        action_setPhoto->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\205\247\347\211\207", nullptr));
        action_clearPhoto->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\347\205\247\347\211\207", nullptr));
        action_increase->setText(QCoreApplication::translate("MainWindow", "\346\266\250\345\267\245\350\265\204", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action_cancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\350\241\250\346\240\274\346\225\260\346\215\256", nullptr));
        groupBox_sort->setTitle(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\345\255\227\346\256\265", nullptr));
        radioButton_rise->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217", nullptr));
        radioButton_down->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217", nullptr));
        groupBox_filter->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\277\207\346\273\244", nullptr));
        radioButton__man->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        radioButton_womon->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        radioButton_showAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\346\230\276\347\244\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \345\217\267", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\247\223  \345\220\215", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\200\247  \345\210\253", nullptr));
        comboBox_sex->setItemText(0, QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        comboBox_sex->setItemText(1, QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        comboBox_birthDay->setItemText(0, QCoreApplication::translate("MainWindow", "2000-12-3", nullptr));
        comboBox_birthDay->setItemText(1, QCoreApplication::translate("MainWindow", "2000-3-26", nullptr));
        comboBox_birthDay->setItemText(2, QCoreApplication::translate("MainWindow", "2000-6-1", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        comboBox_birthProvince->setItemText(0, QCoreApplication::translate("MainWindow", "\346\261\237\350\213\217\347\234\201", nullptr));
        comboBox_birthProvince->setItemText(1, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254\345\270\202", nullptr));
        comboBox_birthProvince->setItemText(2, QCoreApplication::translate("MainWindow", "\345\271\277\344\270\234\347\234\201", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\351\203\250  \351\227\250", nullptr));
        comboBox_department->setItemText(0, QCoreApplication::translate("MainWindow", "\347\250\213\345\272\217\345\221\230", nullptr));
        comboBox_department->setItemText(1, QCoreApplication::translate("MainWindow", "\350\277\220\347\273\264\345\267\245\347\250\213\345\270\210", nullptr));
        comboBox_department->setItemText(2, QCoreApplication::translate("MainWindow", "\345\220\216\347\253\257\347\250\213\345\272\217\345\221\230", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \350\265\204", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
