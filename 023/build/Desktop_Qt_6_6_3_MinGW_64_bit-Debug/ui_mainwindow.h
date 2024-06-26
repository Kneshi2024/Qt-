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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Embedded_Widget;
    QAction *action_Indepent_Widget;
    QAction *action_Embedded_MainWindow;
    QAction *action_Independ_MainWindow;
    QAction *action_Quit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(664, 477);
        action_Embedded_Widget = new QAction(MainWindow);
        action_Embedded_Widget->setObjectName("action_Embedded_Widget");
        action_Embedded_Widget->setMenuRole(QAction::NoRole);
        action_Indepent_Widget = new QAction(MainWindow);
        action_Indepent_Widget->setObjectName("action_Indepent_Widget");
        action_Indepent_Widget->setMenuRole(QAction::NoRole);
        action_Embedded_MainWindow = new QAction(MainWindow);
        action_Embedded_MainWindow->setObjectName("action_Embedded_MainWindow");
        action_Embedded_MainWindow->setMenuRole(QAction::NoRole);
        action_Independ_MainWindow = new QAction(MainWindow);
        action_Independ_MainWindow->setObjectName("action_Independ_MainWindow");
        action_Independ_MainWindow->setMenuRole(QAction::NoRole);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName("action_Quit");
        action_Quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(120, 40, 351, 311));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_Embedded_Widget);
        toolBar->addAction(action_Indepent_Widget);
        toolBar->addAction(action_Embedded_MainWindow);
        toolBar->addAction(action_Independ_MainWindow);
        toolBar->addSeparator();
        toolBar->addAction(action_Quit);

        retranslateUi(MainWindow);
        QObject::connect(action_Quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_Embedded_Widget->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#if QT_CONFIG(tooltip)
        action_Embedded_Widget->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Indepent_Widget->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_Indepent_Widget->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Embedded_MainWindow->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        action_Embedded_MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Independ_MainWindow->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        action_Independ_MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_Quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Page1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Page 2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
