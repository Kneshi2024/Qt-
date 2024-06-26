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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
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
    QAction *action_openDataBase;
    QAction *action_firstRecord;
    QAction *action_previousRecord;
    QAction *action_nextRecord;
    QAction *action_lastRecord;
    QAction *action_quit;
    QWidget *centralwidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_picture;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(980, 590);
        action_openDataBase = new QAction(MainWindow);
        action_openDataBase->setObjectName("action_openDataBase");
        action_openDataBase->setMenuRole(QAction::NoRole);
        action_firstRecord = new QAction(MainWindow);
        action_firstRecord->setObjectName("action_firstRecord");
        action_firstRecord->setMenuRole(QAction::NoRole);
        action_previousRecord = new QAction(MainWindow);
        action_previousRecord->setObjectName("action_previousRecord");
        action_previousRecord->setMenuRole(QAction::NoRole);
        action_nextRecord = new QAction(MainWindow);
        action_nextRecord->setObjectName("action_nextRecord");
        action_nextRecord->setMenuRole(QAction::NoRole);
        action_lastRecord = new QAction(MainWindow);
        action_lastRecord->setObjectName("action_lastRecord");
        action_lastRecord->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(10, 10, 961, 531));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        groupBox->setMaximumSize(QSize(460, 16777215));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(259, 20, 231, 231));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_picture = new QLabel(groupBox_3);
        label_picture->setObjectName("label_picture");
        label_picture->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_picture, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(12, 257, 491, 271));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName("gridLayout_2");
        plainTextEdit = new QPlainTextEdit(groupBox_4);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        widget = new QWidget(groupBox_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(12, 31, 240, 219));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(99999999);

        gridLayout_3->addWidget(spinBox, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        gridLayout_3->addWidget(lineEdit, 1, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout_3->addWidget(comboBox, 2, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 3, 0, 1, 2);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        gridLayout_3->addWidget(comboBox_2, 3, 2, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 4, 0, 1, 2);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        gridLayout_3->addWidget(comboBox_3, 4, 2, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 5, 0, 1, 1);

        comboBox_4 = new QComboBox(widget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        gridLayout_3->addWidget(comboBox_4, 5, 2, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 6, 0, 1, 1);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setMaximum(999999999);

        gridLayout_3->addWidget(spinBox_2, 6, 2, 1, 1);

        splitter->addWidget(groupBox_2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_openDataBase);
        toolBar->addSeparator();
        toolBar->addAction(action_firstRecord);
        toolBar->addAction(action_previousRecord);
        toolBar->addAction(action_nextRecord);
        toolBar->addAction(action_lastRecord);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_openDataBase->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", nullptr));
        action_firstRecord->setText(QCoreApplication::translate("MainWindow", "\351\246\226\350\256\260\345\275\225", nullptr));
        action_previousRecord->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\346\235\241\350\256\260\345\275\225", nullptr));
        action_nextRecord->setText(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\346\235\241\350\256\260\345\275\225", nullptr));
        action_lastRecord->setText(QCoreApplication::translate("MainWindow", "\345\260\276\350\256\260\345\275\225", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\211\200\346\234\211\350\256\260\345\275\225", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\256\260\345\275\225", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\205\247\347\211\207", nullptr));
        label_picture->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\247\223  \345\220\215", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\200\247  \345\210\253", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\274\240\344\270\211", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\346\235\216\345\233\233", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "\347\216\213\344\272\224", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\346\227\245\346\234\237", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "2000-12-3", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "2000-3-26", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("MainWindow", "2000-6-1", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\345\207\272\347\224\237\347\234\201\344\273\275", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "\346\261\237\350\213\217\347\234\201", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254\345\270\202", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "\345\271\277\344\270\234\347\234\201", nullptr));

        label_6->setText(QCoreApplication::translate("MainWindow", "\351\203\250  \351\227\250", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\347\250\213\345\272\217\345\221\230", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "\350\277\220\347\273\264\345\267\245\347\250\213\345\270\210", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "\345\220\216\347\253\257\347\250\213\345\272\217\345\221\230", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "\345\267\245  \350\265\204", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
