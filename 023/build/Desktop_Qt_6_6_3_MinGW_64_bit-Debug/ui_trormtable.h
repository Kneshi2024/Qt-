/********************************************************************************
** Form generated from reading UI file 'trormtable.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRORMTABLE_H
#define UI_TRORMTABLE_H

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

class Ui_TFormTable
{
public:
    QAction *action_setRowColNum;
    QAction *action_setHeader;
    QAction *action_quit;
    QAction *action_locateItem;
    QWidget *centralwidget;
    QTableView *tableView;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TFormTable)
    {
        if (TFormTable->objectName().isEmpty())
            TFormTable->setObjectName("TFormTable");
        TFormTable->resize(454, 250);
        action_setRowColNum = new QAction(TFormTable);
        action_setRowColNum->setObjectName("action_setRowColNum");
        action_setRowColNum->setMenuRole(QAction::NoRole);
        action_setHeader = new QAction(TFormTable);
        action_setHeader->setObjectName("action_setHeader");
        action_setHeader->setMenuRole(QAction::NoRole);
        action_quit = new QAction(TFormTable);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        action_locateItem = new QAction(TFormTable);
        action_locateItem->setObjectName("action_locateItem");
        action_locateItem->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(TFormTable);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(5, -9, 591, 421));
        TFormTable->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(TFormTable);
        statusbar->setObjectName("statusbar");
        TFormTable->setStatusBar(statusbar);
        toolBar = new QToolBar(TFormTable);
        toolBar->setObjectName("toolBar");
        TFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_setRowColNum);
        toolBar->addAction(action_setHeader);
        toolBar->addAction(action_locateItem);
        toolBar->addAction(action_quit);

        retranslateUi(TFormTable);
        QObject::connect(action_quit, &QAction::triggered, TFormTable, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(TFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *TFormTable)
    {
        TFormTable->setWindowTitle(QCoreApplication::translate("TFormTable", "\350\207\252\345\256\232\344\271\211\345\257\271\350\257\235\346\241\206 Demo", nullptr));
        action_setRowColNum->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        action_setRowColNum->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\214\345\210\227\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
        action_setHeader->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        action_setHeader->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("TFormTable", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("TFormTable", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_locateItem->setText(QCoreApplication::translate("TFormTable", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#if QT_CONFIG(tooltip)
        action_locateItem->setToolTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\275\215\345\215\225\345\205\203\346\240\274", nullptr));
#endif // QT_CONFIG(tooltip)
        toolBar->setWindowTitle(QCoreApplication::translate("TFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormTable: public Ui_TFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRORMTABLE_H
