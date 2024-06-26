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
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_closeAll;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_setFont;
    QAction *actionMDI;
    QAction *action_cascade;
    QAction *action_tile;
    QAction *action_quit;
    QWidget *centralwidget;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(756, 482);
        action_new = new QAction(MainWindow);
        action_new->setObjectName("action_new");
        action_new->setMenuRole(QAction::NoRole);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_open->setMenuRole(QAction::NoRole);
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_save->setMenuRole(QAction::NoRole);
        action_closeAll = new QAction(MainWindow);
        action_closeAll->setObjectName("action_closeAll");
        action_closeAll->setMenuRole(QAction::NoRole);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName("action_cut");
        action_cut->setEnabled(false);
        action_cut->setMenuRole(QAction::NoRole);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName("action_copy");
        action_copy->setEnabled(false);
        action_copy->setMenuRole(QAction::NoRole);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName("action_paste");
        action_paste->setEnabled(false);
        action_paste->setMenuRole(QAction::NoRole);
        action_setFont = new QAction(MainWindow);
        action_setFont->setObjectName("action_setFont");
        action_setFont->setEnabled(false);
        action_setFont->setMenuRole(QAction::NoRole);
        actionMDI = new QAction(MainWindow);
        actionMDI->setObjectName("actionMDI");
        actionMDI->setCheckable(true);
        actionMDI->setMenuRole(QAction::NoRole);
        action_cascade = new QAction(MainWindow);
        action_cascade->setObjectName("action_cascade");
        action_cascade->setMenuRole(QAction::NoRole);
        action_tile = new QAction(MainWindow);
        action_tile->setObjectName("action_tile");
        action_tile->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName("mdiArea");
        mdiArea->setGeometry(QRect(90, 70, 331, 261));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addAction(action_closeAll);
        toolBar->addSeparator();
        toolBar->addAction(action_cut);
        toolBar->addAction(action_copy);
        toolBar->addAction(action_paste);
        toolBar->addAction(action_setFont);
        toolBar->addSeparator();
        toolBar->addAction(actionMDI);
        toolBar->addAction(action_cascade);
        toolBar->addAction(action_tile);
        toolBar->addSeparator();
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_new->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        action_new->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        action_closeAll->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\345\205\250\351\203\250", nullptr));
        action_cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
        action_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
        action_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
        action_setFont->setText(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
        actionMDI->setText(QCoreApplication::translate("MainWindow", "MDI\346\250\241\345\274\217", nullptr));
        action_cascade->setText(QCoreApplication::translate("MainWindow", "\347\272\247\350\201\224\345\261\225\345\274\200", nullptr));
        action_tile->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272\345\261\225\345\274\200", nullptr));
        action_quit->setText(QCoreApplication::translate("MainWindow", "  \351\200\200\345\207\272", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
