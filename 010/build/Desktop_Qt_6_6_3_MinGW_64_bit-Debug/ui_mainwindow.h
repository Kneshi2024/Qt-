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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_initList;
    QAction *action_clear;
    QAction *action_insert;
    QAction *action_add;
    QAction *action_delete;
    QAction *action_quit;
    QAction *action_selAll;
    QAction *action_selNone;
    QAction *action_selInverse;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QToolButton *toolButton_initList;
    QToolButton *toolButton_clearList;
    QToolButton *toolButton_insert;
    QToolButton *toolButton_add;
    QToolButton *toolButton_delete;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_allowSlot;
    QToolButton *toolButton;
    QToolButton *toolButton_5;
    QSpacerItem *verticalSpacer;
    QWidget *page_3;
    QGridLayout *gridLayout_2;
    QToolButton *toolButton_clearText;
    QToolButton *toolButton_addSpace;
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox_enableEdit;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_selectItem;
    QToolButton *toolButton_selAll;
    QToolButton *toolButton_selNone;
    QToolButton *toolButton_selInverse;
    QSpacerItem *horizontalSpacer;
    QListWidget *listWidget;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(570, 420);
        action_initList = new QAction(MainWindow);
        action_initList->setObjectName("action_initList");
        action_initList->setMenuRole(QAction::NoRole);
        action_clear = new QAction(MainWindow);
        action_clear->setObjectName("action_clear");
        action_clear->setMenuRole(QAction::NoRole);
        action_insert = new QAction(MainWindow);
        action_insert->setObjectName("action_insert");
        action_insert->setMenuRole(QAction::NoRole);
        action_add = new QAction(MainWindow);
        action_add->setObjectName("action_add");
        action_add->setMenuRole(QAction::NoRole);
        action_delete = new QAction(MainWindow);
        action_delete->setObjectName("action_delete");
        action_delete->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        action_selAll = new QAction(MainWindow);
        action_selAll->setObjectName("action_selAll");
        action_selAll->setMenuRole(QAction::NoRole);
        action_selNone = new QAction(MainWindow);
        action_selNone->setObjectName("action_selNone");
        action_selNone->setMenuRole(QAction::NoRole);
        action_selInverse = new QAction(MainWindow);
        action_selInverse->setObjectName("action_selInverse");
        action_selInverse->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName("toolBox");
        toolBox->setMaximumSize(QSize(200, 16777215));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 183, 269));
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName("gridLayout_3");
        toolButton_initList = new QToolButton(page);
        toolButton_initList->setObjectName("toolButton_initList");
        toolButton_initList->setContextMenuPolicy(Qt::PreventContextMenu);
        toolButton_initList->setAutoRepeat(false);
        toolButton_initList->setAutoExclusive(false);
        toolButton_initList->setAutoRepeatInterval(100);
        toolButton_initList->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_initList, 0, 0, 1, 1);

        toolButton_clearList = new QToolButton(page);
        toolButton_clearList->setObjectName("toolButton_clearList");
        toolButton_clearList->setContextMenuPolicy(Qt::PreventContextMenu);
        toolButton_clearList->setAutoRepeat(false);
        toolButton_clearList->setAutoExclusive(false);
        toolButton_clearList->setAutoRepeatInterval(100);
        toolButton_clearList->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_clearList, 1, 0, 1, 1);

        toolButton_insert = new QToolButton(page);
        toolButton_insert->setObjectName("toolButton_insert");
        toolButton_insert->setContextMenuPolicy(Qt::PreventContextMenu);
        toolButton_insert->setAutoRepeat(false);
        toolButton_insert->setAutoExclusive(false);
        toolButton_insert->setAutoRepeatInterval(100);
        toolButton_insert->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_insert, 2, 0, 1, 1);

        toolButton_add = new QToolButton(page);
        toolButton_add->setObjectName("toolButton_add");
        toolButton_add->setContextMenuPolicy(Qt::PreventContextMenu);
        toolButton_add->setAutoRepeat(false);
        toolButton_add->setAutoExclusive(false);
        toolButton_add->setAutoRepeatInterval(100);
        toolButton_add->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_add, 3, 0, 1, 1);

        toolButton_delete = new QToolButton(page);
        toolButton_delete->setObjectName("toolButton_delete");
        toolButton_delete->setContextMenuPolicy(Qt::PreventContextMenu);
        toolButton_delete->setAutoRepeat(false);
        toolButton_delete->setAutoExclusive(false);
        toolButton_delete->setAutoRepeatInterval(100);
        toolButton_delete->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_delete, 4, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 169, 269));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setObjectName("gridLayout_4");
        checkBox_allowSlot = new QCheckBox(page_2);
        checkBox_allowSlot->setObjectName("checkBox_allowSlot");
        QFont font;
        font.setPointSize(12);
        checkBox_allowSlot->setFont(font);

        gridLayout_4->addWidget(checkBox_allowSlot, 0, 0, 1, 1);

        toolButton = new QToolButton(page_2);
        toolButton->setObjectName("toolButton");
        toolButton->setFont(font);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setArrowType(Qt::UpArrow);

        gridLayout_4->addWidget(toolButton, 1, 0, 1, 1);

        toolButton_5 = new QToolButton(page_2);
        toolButton_5->setObjectName("toolButton_5");
        toolButton_5->setFont(font);
        toolButton_5->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton_5->setArrowType(Qt::DownArrow);

        gridLayout_4->addWidget(toolButton_5, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 132, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        toolBox->addItem(page_2, QString::fromUtf8("\345\210\227\350\241\250\346\216\222\345\272\217"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_2 = new QGridLayout(page_3);
        gridLayout_2->setObjectName("gridLayout_2");
        toolButton_clearText = new QToolButton(page_3);
        toolButton_clearText->setObjectName("toolButton_clearText");

        gridLayout_2->addWidget(toolButton_clearText, 0, 0, 1, 1);

        toolButton_addSpace = new QToolButton(page_3);
        toolButton_addSpace->setObjectName("toolButton_addSpace");

        gridLayout_2->addWidget(toolButton_addSpace, 0, 1, 1, 1);

        plainTextEdit = new QPlainTextEdit(page_3);
        plainTextEdit->setObjectName("plainTextEdit");

        gridLayout_2->addWidget(plainTextEdit, 1, 0, 1, 2);

        toolBox->addItem(page_3, QString::fromUtf8("\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272"));
        splitter->addWidget(toolBox);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName("groupBox");
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");

        gridLayout_5->addWidget(lineEdit, 0, 1, 1, 1);

        checkBox_enableEdit = new QCheckBox(groupBox);
        checkBox_enableEdit->setObjectName("checkBox_enableEdit");
        checkBox_enableEdit->setChecked(true);

        gridLayout_5->addWidget(checkBox_enableEdit, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        toolButton_selectItem = new QToolButton(groupBox);
        toolButton_selectItem->setObjectName("toolButton_selectItem");
        toolButton_selectItem->setPopupMode(QToolButton::MenuButtonPopup);

        horizontalLayout->addWidget(toolButton_selectItem);

        toolButton_selAll = new QToolButton(groupBox);
        toolButton_selAll->setObjectName("toolButton_selAll");

        horizontalLayout->addWidget(toolButton_selAll);

        toolButton_selNone = new QToolButton(groupBox);
        toolButton_selNone->setObjectName("toolButton_selNone");

        horizontalLayout->addWidget(toolButton_selNone);

        toolButton_selInverse = new QToolButton(groupBox);
        toolButton_selInverse->setObjectName("toolButton_selInverse");

        horizontalLayout->addWidget(toolButton_selInverse);

        horizontalSpacer = new QSpacerItem(50, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 3);

        listWidget = new QListWidget(groupBox);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Image/Coin0001.ico"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setCheckState(Qt::Checked);
        __qlistwidgetitem->setIcon(icon);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setCheckState(Qt::Checked);
        __qlistwidgetitem1->setIcon(icon);
        listWidget->setObjectName("listWidget");
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_5->addWidget(listWidget, 2, 0, 1, 3);

        splitter->addWidget(groupBox);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_initList);
        toolBar->addAction(action_clear);
        toolBar->addAction(action_insert);
        toolBar->addAction(action_add);
        toolBar->addAction(action_delete);
        toolBar->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "ToolBar_Demo", nullptr));
        action_initList->setText(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        action_initList->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_initList->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        action_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#if QT_CONFIG(tooltip)
        action_clear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\345\210\227\350\241\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_clear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        action_insert->setText(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        action_insert->setToolTip(QCoreApplication::translate("MainWindow", "\346\217\222\345\205\245\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_add->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        action_add->setToolTip(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
#if QT_CONFIG(tooltip)
        action_delete->setToolTip(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\351\241\271", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        action_selAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        action_selAll->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        action_selNone->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        action_selNone->setToolTip(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        action_selInverse->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#if QT_CONFIG(tooltip)
        action_selInverse->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_initList->setText(QCoreApplication::translate("MainWindow", "toolButton_initList", nullptr));
        toolButton_clearList->setText(QCoreApplication::translate("MainWindow", "toolButton_clearList", nullptr));
        toolButton_insert->setText(QCoreApplication::translate("MainWindow", "toolButton_insert", nullptr));
        toolButton_add->setText(QCoreApplication::translate("MainWindow", "toolButton_add", nullptr));
        toolButton_delete->setText(QCoreApplication::translate("MainWindow", "toolButton_delete", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\351\241\271\346\223\215\344\275\234", nullptr));
        checkBox_allowSlot->setText(QCoreApplication::translate("MainWindow", "\345\205\201\350\256\270\346\216\222\345\272\217", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "\345\215\207\345\272\217\346\216\222\345\272\217", nullptr));
        toolButton_5->setText(QCoreApplication::translate("MainWindow", "\351\231\215\345\272\217\346\216\222\345\272\217", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\345\210\227\350\241\250\346\216\222\345\272\217", nullptr));
        toolButton_clearText->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254", nullptr));
        toolButton_addSpace->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\347\251\272\350\241\214", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\344\277\241\345\217\267\345\217\221\345\260\204\346\227\266\346\234\272", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226", nullptr));
        checkBox_enableEdit->setText(QCoreApplication::translate("MainWindow", "\351\241\271\345\217\257\347\274\226\350\276\221", nullptr));
        toolButton_selectItem->setText(QCoreApplication::translate("MainWindow", "toolButton_selItem", nullptr));
        toolButton_selAll->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        toolButton_selNone->setText(QCoreApplication::translate("MainWindow", "\347\251\272\351\200\211", nullptr));
        toolButton_selInverse->setText(QCoreApplication::translate("MainWindow", "\345\217\215\351\200\211", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "New Item2", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
