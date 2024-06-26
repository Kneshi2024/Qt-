/********************************************************************************
** Form generated from reading UI file 'tformdoc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMDOC_H
#define UI_TFORMDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormDoc
{
public:
    QAction *action_paste;
    QAction *action_font;
    QAction *action_quit;
    QAction *action_cancel;
    QAction *action_repeat;
    QAction *action_save;
    QAction *action_copy;
    QAction *action_cut;
    QAction *action_open;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *TFormDoc)
    {
        if (TFormDoc->objectName().isEmpty())
            TFormDoc->setObjectName("TFormDoc");
        TFormDoc->resize(400, 300);
        action_paste = new QAction(TFormDoc);
        action_paste->setObjectName("action_paste");
        action_paste->setMenuRole(QAction::NoRole);
        action_font = new QAction(TFormDoc);
        action_font->setObjectName("action_font");
        action_font->setMenuRole(QAction::NoRole);
        action_quit = new QAction(TFormDoc);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        action_cancel = new QAction(TFormDoc);
        action_cancel->setObjectName("action_cancel");
        action_cancel->setMenuRole(QAction::NoRole);
        action_repeat = new QAction(TFormDoc);
        action_repeat->setObjectName("action_repeat");
        action_repeat->setMenuRole(QAction::NoRole);
        action_save = new QAction(TFormDoc);
        action_save->setObjectName("action_save");
        action_save->setMenuRole(QAction::NoRole);
        action_copy = new QAction(TFormDoc);
        action_copy->setObjectName("action_copy");
        action_copy->setMenuRole(QAction::NoRole);
        action_cut = new QAction(TFormDoc);
        action_cut->setObjectName("action_cut");
        action_cut->setMenuRole(QAction::NoRole);
        action_open = new QAction(TFormDoc);
        action_open->setObjectName("action_open");
        action_open->setMenuRole(QAction::NoRole);
        plainTextEdit = new QPlainTextEdit(TFormDoc);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(40, 40, 301, 211));

        retranslateUi(TFormDoc);
        QObject::connect(action_repeat, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(action_copy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(action_cut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(action_quit, &QAction::triggered, TFormDoc, qOverload<>(&QWidget::close));
        QObject::connect(action_paste, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));
        QObject::connect(action_cancel, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));

        QMetaObject::connectSlotsByName(TFormDoc);
    } // setupUi

    void retranslateUi(QWidget *TFormDoc)
    {
        TFormDoc->setWindowTitle(QCoreApplication::translate("TFormDoc", "Form", nullptr));
        action_paste->setText(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        action_paste->setToolTip(QCoreApplication::translate("TFormDoc", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
        action_font->setText(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action_font->setToolTip(QCoreApplication::translate("TFormDoc", "\345\255\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("TFormDoc", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        action_cancel->setText(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
#if QT_CONFIG(tooltip)
        action_cancel->setToolTip(QCoreApplication::translate("TFormDoc", "\346\222\244\351\224\200", nullptr));
#endif // QT_CONFIG(tooltip)
        action_repeat->setText(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215", nullptr));
#if QT_CONFIG(tooltip)
        action_repeat->setToolTip(QCoreApplication::translate("TFormDoc", "\351\207\215\345\244\215", nullptr));
#endif // QT_CONFIG(tooltip)
        action_save->setText(QCoreApplication::translate("TFormDoc", "\344\277\235\345\255\230", nullptr));
#if QT_CONFIG(tooltip)
        action_save->setToolTip(QCoreApplication::translate("TFormDoc", "\344\277\235\345\255\230", nullptr));
#endif // QT_CONFIG(tooltip)
        action_copy->setText(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        action_copy->setToolTip(QCoreApplication::translate("TFormDoc", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
        action_cut->setText(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        action_cut->setToolTip(QCoreApplication::translate("TFormDoc", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
        action_open->setText(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200", nullptr));
#if QT_CONFIG(tooltip)
        action_open->setToolTip(QCoreApplication::translate("TFormDoc", "\346\211\223\345\274\200", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class TFormDoc: public Ui_TFormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMDOC_H
