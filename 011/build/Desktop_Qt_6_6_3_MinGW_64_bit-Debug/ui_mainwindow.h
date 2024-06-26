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
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_addFolder;
    QAction *action_addFile;
    QAction *action_deletePoint;
    QAction *action_ergodicPoint;
    QAction *action_enlarge;
    QAction *action_narrow;
    QAction *action_realSize;
    QAction *action_porperWidth;
    QAction *action_properHeight;
    QAction *action_windowFloat;
    QAction *action_windowVisible;
    QAction *action_quit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QLabel *label_picture;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(826, 435);
        action_addFolder = new QAction(MainWindow);
        action_addFolder->setObjectName("action_addFolder");
        action_addFolder->setMenuRole(QAction::NoRole);
        action_addFile = new QAction(MainWindow);
        action_addFile->setObjectName("action_addFile");
        action_addFile->setMenuRole(QAction::NoRole);
        action_deletePoint = new QAction(MainWindow);
        action_deletePoint->setObjectName("action_deletePoint");
        action_deletePoint->setEnabled(false);
        action_deletePoint->setMenuRole(QAction::NoRole);
        action_ergodicPoint = new QAction(MainWindow);
        action_ergodicPoint->setObjectName("action_ergodicPoint");
        action_ergodicPoint->setMenuRole(QAction::NoRole);
        action_enlarge = new QAction(MainWindow);
        action_enlarge->setObjectName("action_enlarge");
        action_enlarge->setEnabled(false);
        action_enlarge->setMenuRole(QAction::NoRole);
        action_narrow = new QAction(MainWindow);
        action_narrow->setObjectName("action_narrow");
        action_narrow->setEnabled(false);
        action_narrow->setMenuRole(QAction::NoRole);
        action_realSize = new QAction(MainWindow);
        action_realSize->setObjectName("action_realSize");
        action_realSize->setEnabled(false);
        action_realSize->setMenuRole(QAction::NoRole);
        action_porperWidth = new QAction(MainWindow);
        action_porperWidth->setObjectName("action_porperWidth");
        action_porperWidth->setEnabled(false);
        action_porperWidth->setMenuRole(QAction::NoRole);
        action_properHeight = new QAction(MainWindow);
        action_properHeight->setObjectName("action_properHeight");
        action_properHeight->setEnabled(false);
        action_properHeight->setMenuRole(QAction::NoRole);
        action_windowFloat = new QAction(MainWindow);
        action_windowFloat->setObjectName("action_windowFloat");
        action_windowFloat->setCheckable(true);
        action_windowFloat->setMenuRole(QAction::NoRole);
        action_windowVisible = new QAction(MainWindow);
        action_windowVisible->setObjectName("action_windowVisible");
        action_windowVisible->setCheckable(true);
        action_windowVisible->setChecked(true);
        action_windowVisible->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 578, 335));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName("gridLayout_3");
        label_picture = new QLabel(scrollAreaWidgetContents);
        label_picture->setObjectName("label_picture");
        label_picture->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_picture, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 826, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName("dockWidget");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        treeWidget = new QTreeWidget(dockWidgetContents);
        treeWidget->headerItem()->setText(0, QString());
        treeWidget->setObjectName("treeWidget");

        gridLayout_2->addWidget(treeWidget, 0, 0, 1, 1);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action_addFolder);
        menu->addAction(action_addFile);
        menu->addAction(action_deletePoint);
        menu->addAction(action_ergodicPoint);
        menu->addSeparator();
        menu->addAction(action_quit);
        menu_2->addAction(action_enlarge);
        menu_2->addAction(action_narrow);
        menu_2->addAction(action_realSize);
        menu_2->addAction(action_porperWidth);
        menu_2->addAction(action_properHeight);
        menu_2->addAction(action_windowFloat);
        menu_2->addAction(action_windowVisible);
        toolBar->addAction(action_addFolder);
        toolBar->addAction(action_addFile);
        toolBar->addAction(action_deletePoint);
        toolBar->addAction(action_ergodicPoint);
        toolBar->addSeparator();
        toolBar->addAction(action_enlarge);
        toolBar->addAction(action_narrow);
        toolBar->addAction(action_realSize);
        toolBar->addAction(action_porperWidth);
        toolBar->addAction(action_properHeight);
        toolBar->addSeparator();
        toolBar->addAction(action_windowFloat);
        toolBar->addAction(action_windowVisible);
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dock  Widget Demo", nullptr));
        action_addFolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_addFolder->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_addFile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        action_addFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_deletePoint->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        action_deletePoint->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_ergodicPoint->setText(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#if QT_CONFIG(tooltip)
        action_ergodicPoint->setToolTip(QCoreApplication::translate("MainWindow", "\351\201\215\345\216\206\350\212\202\347\202\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_enlarge->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#if QT_CONFIG(tooltip)
        action_enlarge->setToolTip(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
#endif // QT_CONFIG(tooltip)
        action_narrow->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_narrow->setToolTip(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_realSize->setText(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        action_realSize->setToolTip(QCoreApplication::translate("MainWindow", "\345\256\236\351\231\205\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
        action_porperWidth->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        action_porperWidth->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\345\256\275\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        action_properHeight->setText(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        action_properHeight->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\202\345\220\210\351\253\230\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
        action_windowFloat->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#if QT_CONFIG(tooltip)
        action_windowFloat->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\346\265\256\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
        action_windowVisible->setText(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#if QT_CONFIG(tooltip)
        action_windowVisible->setToolTip(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\243\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        label_picture->setText(QCoreApplication::translate("MainWindow", "lab_picture", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\233\256\345\275\225\346\240\221", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
