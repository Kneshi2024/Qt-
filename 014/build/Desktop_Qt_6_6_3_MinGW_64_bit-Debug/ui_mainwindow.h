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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
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
    QAction *action_preview;
    QAction *action_addRow;
    QAction *action_insertRow;
    QAction *action_deleteRow;
    QAction *action_left;
    QAction *action_center;
    QAction *action_right;
    QAction *action_quit;
    QAction *action_bold;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1043, 510);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_open->setMenuRole(QAction::NoRole);
        action_preview = new QAction(MainWindow);
        action_preview->setObjectName("action_preview");
        action_preview->setMenuRole(QAction::NoRole);
        action_addRow = new QAction(MainWindow);
        action_addRow->setObjectName("action_addRow");
        action_addRow->setCheckable(false);
        action_addRow->setEnabled(false);
        action_addRow->setMenuRole(QAction::NoRole);
        action_insertRow = new QAction(MainWindow);
        action_insertRow->setObjectName("action_insertRow");
        action_insertRow->setEnabled(false);
        action_insertRow->setMenuRole(QAction::NoRole);
        action_deleteRow = new QAction(MainWindow);
        action_deleteRow->setObjectName("action_deleteRow");
        action_deleteRow->setEnabled(false);
        action_deleteRow->setMenuRole(QAction::NoRole);
        action_left = new QAction(MainWindow);
        action_left->setObjectName("action_left");
        action_left->setMenuRole(QAction::NoRole);
        action_center = new QAction(MainWindow);
        action_center->setObjectName("action_center");
        action_center->setMenuRole(QAction::NoRole);
        action_right = new QAction(MainWindow);
        action_right->setObjectName("action_right");
        action_right->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        action_bold = new QAction(MainWindow);
        action_bold->setObjectName("action_bold");
        action_bold->setCheckable(true);
        action_bold->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        tableView = new QTableView(groupBox);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_2->addWidget(plainTextEdit, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_open);
        toolBar->addAction(action_preview);
        toolBar->addSeparator();
        toolBar->addAction(action_addRow);
        toolBar->addAction(action_insertRow);
        toolBar->addAction(action_deleteRow);
        toolBar->addSeparator();
        toolBar->addAction(action_left);
        toolBar->addAction(action_center);
        toolBar->addAction(action_right);
        toolBar->addAction(action_bold);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TableView Demo", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_preview->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\242\204\350\247\210", nullptr));
#if QT_CONFIG(tooltip)
        action_preview->setToolTip(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\351\242\204\350\247\210", nullptr));
#endif // QT_CONFIG(tooltip)
        action_addRow->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        action_addRow->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_insertRow->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        action_insertRow->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_deleteRow->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#if QT_CONFIG(tooltip)
        action_deleteRow->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        action_left->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#if QT_CONFIG(tooltip)
        action_left->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#endif // QT_CONFIG(tooltip)
        action_center->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#if QT_CONFIG(tooltip)
        action_center->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#endif // QT_CONFIG(tooltip)
        action_right->setText(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#if QT_CONFIG(tooltip)
        action_right->setToolTip(QCoreApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Table View", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "PlainTextEdit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
