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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
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
    QAction *action_save;
    QAction *action_cancel;
    QAction *action_blockList;
    QAction *action_quit;
    QWidget *centralwidget;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(692, 470);
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
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_save->setEnabled(false);
        action_save->setMenuRole(QAction::NoRole);
        action_cancel = new QAction(MainWindow);
        action_cancel->setObjectName("action_cancel");
        action_cancel->setEnabled(false);
        action_cancel->setMenuRole(QAction::NoRole);
        action_blockList = new QAction(MainWindow);
        action_blockList->setObjectName("action_blockList");
        action_blockList->setEnabled(false);
        action_blockList->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 10, 651, 391));
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
        toolBar->addAction(action_save);
        toolBar->addAction(action_cancel);
        toolBar->addSeparator();
        toolBar->addAction(action_blockList);
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "QSqlRelationalTableModel\347\232\204\344\275\277\347\224\250", nullptr));
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245", nullptr));
        action_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action_cancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        action_blockList->setText(QCoreApplication::translate("MainWindow", "\345\255\227\346\256\265\345\210\227\350\241\250", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
