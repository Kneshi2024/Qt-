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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_open;
    QAction *action_save;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_back;
    QAction *action_remake;
    QAction *action_bold;
    QAction *action_italic;
    QAction *action_underLine;
    QAction *action_chinese;
    QAction *action_english;
    QAction *action_close;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_A;
    QMenu *menu_E;
    QMenu *menu_M;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(861, 618);
        action_new = new QAction(MainWindow);
        action_new->setObjectName("action_new");
        action_new->setMenuRole(QAction::NoRole);
        action_open = new QAction(MainWindow);
        action_open->setObjectName("action_open");
        action_open->setMenuRole(QAction::NoRole);
        action_save = new QAction(MainWindow);
        action_save->setObjectName("action_save");
        action_save->setCheckable(false);
        action_save->setEnabled(false);
        action_save->setMenuRole(QAction::NoRole);
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
        action_back = new QAction(MainWindow);
        action_back->setObjectName("action_back");
        action_back->setEnabled(false);
        action_back->setMenuRole(QAction::NoRole);
        action_remake = new QAction(MainWindow);
        action_remake->setObjectName("action_remake");
        action_remake->setEnabled(false);
        action_remake->setMenuRole(QAction::NoRole);
        action_bold = new QAction(MainWindow);
        action_bold->setObjectName("action_bold");
        action_bold->setCheckable(true);
        action_bold->setMenuRole(QAction::NoRole);
        action_italic = new QAction(MainWindow);
        action_italic->setObjectName("action_italic");
        action_italic->setCheckable(true);
        action_italic->setMenuRole(QAction::NoRole);
        action_underLine = new QAction(MainWindow);
        action_underLine->setObjectName("action_underLine");
        action_underLine->setCheckable(true);
        action_underLine->setMenuRole(QAction::NoRole);
        action_chinese = new QAction(MainWindow);
        action_chinese->setObjectName("action_chinese");
        action_chinese->setCheckable(true);
        action_chinese->setMenuRole(QAction::NoRole);
        action_english = new QAction(MainWindow);
        action_english->setObjectName("action_english");
        action_english->setCheckable(true);
        action_english->setMenuRole(QAction::NoRole);
        action_close = new QAction(MainWindow);
        action_close->setObjectName("action_close");
        action_close->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 861, 25));
        menu_A = new QMenu(menubar);
        menu_A->setObjectName("menu_A");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_M = new QMenu(menubar);
        menu_M->setObjectName("menu_M");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_A->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_M->menuAction());
        menu_A->addAction(action_new);
        menu_A->addAction(action_open);
        menu_A->addAction(action_save);
        menu_E->addAction(action_cut);
        menu_E->addAction(action_copy);
        menu_E->addAction(action_paste);
        menu_E->addSeparator();
        menu_E->addAction(action_back);
        menu_E->addAction(action_remake);
        menu_M->addAction(action_bold);
        menu_M->addAction(action_italic);
        menu_M->addAction(action_underLine);
        menu_M->addSeparator();
        menu_M->addAction(action_chinese);
        menu_M->addAction(action_english);
        toolBar->addAction(action_new);
        toolBar->addAction(action_open);
        toolBar->addAction(action_save);
        toolBar->addSeparator();
        toolBar->addAction(action_cut);
        toolBar->addAction(action_copy);
        toolBar->addAction(action_paste);
        toolBar->addSeparator();
        toolBar->addAction(action_back);
        toolBar->addAction(action_remake);
        toolBar->addSeparator();
        toolBar->addAction(action_bold);
        toolBar->addAction(action_italic);
        toolBar->addAction(action_underLine);
        toolBar->addSeparator();
        toolBar->addAction(action_chinese);
        toolBar->addAction(action_english);

        retranslateUi(MainWindow);
        QObject::connect(action_back, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));
        QObject::connect(action_close, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(action_copy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(action_cut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(action_paste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(action_remake, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));
        QObject::connect(textEdit, &QTextEdit::undoAvailable, action_back, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::redoAvailable, action_remake, &QAction::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_new->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(tooltip)
        action_new->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_new->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        action_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_save->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_cut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        action_cut->setToolTip(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_cut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        action_copy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_copy->setToolTip(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_copy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        action_paste->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        action_paste->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264\346\226\207\346\234\254", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_paste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        action_back->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        action_back->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200\345\212\250\344\275\234", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_back->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_remake->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232", nullptr));
#if QT_CONFIG(tooltip)
        action_remake->setToolTip(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\345\274\200\345\247\213", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action_remake->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        action_bold->setText(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_bold->setToolTip(QCoreApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_italic->setText(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_italic->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_underLine->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        action_underLine->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        action_chinese->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        action_chinese->setToolTip(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_english->setText(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#if QT_CONFIG(tooltip)
        action_english->setToolTip(QCoreApplication::translate("MainWindow", "\350\213\261\346\226\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_close->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_close->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;?xml version=&quot;1.0&quot; encoding=&quot;UTF-8&quot;?&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&lt;ui version=&quot;4.0&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> &lt;class&gt;MainWindow&lt;/class&g"
                        "t;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> &lt;widget class=&quot;QMainWindow&quot; name=&quot;MainWindow&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  &lt;property name=&quot;geometry&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   &lt;rect&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;x&gt;0&lt;/x&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;y&gt;0&lt;/y&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;width&gt;861&lt;/width&gt;</p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;height&gt;618&lt;/height&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   &lt;/rect&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  &lt;/property&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  &lt;property name=&quot;windowTitle&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   &lt;string&gt;MainWindow&lt;/string&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  &lt;/property&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\">  &lt;widget class=&quot;QWidget&quot; name=&quot;centralwidget&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   &lt;layout class=&quot;QVBoxLayout&quot; name=&quot;verticalLayout&quot;&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;item&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">     &lt;widget class=&quot;QTextEdit&quot; name=&quot;textEdit&quot;/&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">    &lt;/item&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   &lt;/layout&gt;</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  &lt;/widget&gt;</p></body></html>", nullptr));
        menu_A->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&A)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_M->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&M\357\274\211", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
