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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQFile_open;
    QAction *actionQFile_save;
    QAction *actionQSaveFile;
    QAction *actionQTextStream_open;
    QAction *actionQTextStream_save;
    QAction *action_quit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *plainTextEdit_QFile;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *plainTextEdit_QTextStream;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(651, 442);
        actionQFile_open = new QAction(MainWindow);
        actionQFile_open->setObjectName("actionQFile_open");
        actionQFile_open->setMenuRole(QAction::NoRole);
        actionQFile_save = new QAction(MainWindow);
        actionQFile_save->setObjectName("actionQFile_save");
        actionQFile_save->setMenuRole(QAction::NoRole);
        actionQSaveFile = new QAction(MainWindow);
        actionQSaveFile->setObjectName("actionQSaveFile");
        actionQSaveFile->setMenuRole(QAction::NoRole);
        actionQTextStream_open = new QAction(MainWindow);
        actionQTextStream_open->setObjectName("actionQTextStream_open");
        actionQTextStream_open->setMenuRole(QAction::NoRole);
        actionQTextStream_save = new QAction(MainWindow);
        actionQTextStream_save->setObjectName("actionQTextStream_save");
        actionQTextStream_save->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        plainTextEdit_QFile = new QPlainTextEdit(tab);
        plainTextEdit_QFile->setObjectName("plainTextEdit_QFile");

        gridLayout_2->addWidget(plainTextEdit_QFile, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        plainTextEdit_QTextStream = new QPlainTextEdit(tab_2);
        plainTextEdit_QTextStream->setObjectName("plainTextEdit_QTextStream");

        gridLayout_3->addWidget(plainTextEdit_QTextStream, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionQFile_open);
        toolBar->addAction(actionQFile_save);
        toolBar->addAction(actionQSaveFile);
        toolBar->addSeparator();
        toolBar->addAction(actionQTextStream_open);
        toolBar->addAction(actionQTextStream_save);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQFile_open->setText(QCoreApplication::translate("MainWindow", "QFile\346\211\223\345\274\200", nullptr));
        actionQFile_save->setText(QCoreApplication::translate("MainWindow", "QFile\345\217\246\345\255\230", nullptr));
        actionQSaveFile->setText(QCoreApplication::translate("MainWindow", "QSaveFile\345\217\246\345\255\230", nullptr));
        actionQTextStream_open->setText(QCoreApplication::translate("MainWindow", "QTextStream\346\211\223\345\274\200", nullptr));
        actionQTextStream_save->setText(QCoreApplication::translate("MainWindow", "QTextStream\345\217\246\345\255\230", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "QFile\347\233\264\346\216\245\346\223\215\344\275\234", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "QTextStream\346\223\215\344\275\234", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
