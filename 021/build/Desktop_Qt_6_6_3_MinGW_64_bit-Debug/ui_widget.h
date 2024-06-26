/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_Top;
    QGroupBox *groupBox_setObject;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_listSource;
    QRadioButton *radioButton_listWidget;
    QRadioButton *radioButton_treeWidget;
    QRadioButton *radioButton_tableWidget;
    QGroupBox *groupBox_params;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_acceptDrops;
    QCheckBox *checkBox_dragEnabled;
    QLabel *label_dragDropMode;
    QComboBox *comboBox_DropAction;
    QLabel *label_dragDropMode_2;
    QComboBox *comboBox_CopyAction;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_Bottom;
    QGroupBox *groupBox_listSource;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget_listSource;
    QGroupBox *groupBox_listWidget;
    QGridLayout *gridLayout_4;
    QListWidget *listWidget;
    QGroupBox *groupBox_treeWidget;
    QGridLayout *gridLayout_3;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_tableWidget;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(782, 475);
        verticalLayout_2 = new QVBoxLayout(Widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_Top = new QHBoxLayout();
        horizontalLayout_Top->setObjectName("horizontalLayout_Top");
        groupBox_setObject = new QGroupBox(Widget);
        groupBox_setObject->setObjectName("groupBox_setObject");
        verticalLayout = new QVBoxLayout(groupBox_setObject);
        verticalLayout->setObjectName("verticalLayout");
        radioButton_listSource = new QRadioButton(groupBox_setObject);
        radioButton_listSource->setObjectName("radioButton_listSource");
        radioButton_listSource->setChecked(true);

        verticalLayout->addWidget(radioButton_listSource);

        radioButton_listWidget = new QRadioButton(groupBox_setObject);
        radioButton_listWidget->setObjectName("radioButton_listWidget");

        verticalLayout->addWidget(radioButton_listWidget);

        radioButton_treeWidget = new QRadioButton(groupBox_setObject);
        radioButton_treeWidget->setObjectName("radioButton_treeWidget");

        verticalLayout->addWidget(radioButton_treeWidget);

        radioButton_tableWidget = new QRadioButton(groupBox_setObject);
        radioButton_tableWidget->setObjectName("radioButton_tableWidget");

        verticalLayout->addWidget(radioButton_tableWidget);


        horizontalLayout_Top->addWidget(groupBox_setObject);

        groupBox_params = new QGroupBox(Widget);
        groupBox_params->setObjectName("groupBox_params");
        gridLayout = new QGridLayout(groupBox_params);
        gridLayout->setObjectName("gridLayout");
        checkBox_acceptDrops = new QCheckBox(groupBox_params);
        checkBox_acceptDrops->setObjectName("checkBox_acceptDrops");
        checkBox_acceptDrops->setChecked(true);

        gridLayout->addWidget(checkBox_acceptDrops, 0, 0, 1, 1);

        checkBox_dragEnabled = new QCheckBox(groupBox_params);
        checkBox_dragEnabled->setObjectName("checkBox_dragEnabled");
        checkBox_dragEnabled->setChecked(true);

        gridLayout->addWidget(checkBox_dragEnabled, 0, 1, 1, 1);

        label_dragDropMode = new QLabel(groupBox_params);
        label_dragDropMode->setObjectName("label_dragDropMode");

        gridLayout->addWidget(label_dragDropMode, 1, 0, 1, 1);

        comboBox_DropAction = new QComboBox(groupBox_params);
        comboBox_DropAction->addItem(QString());
        comboBox_DropAction->addItem(QString());
        comboBox_DropAction->addItem(QString());
        comboBox_DropAction->addItem(QString());
        comboBox_DropAction->addItem(QString());
        comboBox_DropAction->setObjectName("comboBox_DropAction");

        gridLayout->addWidget(comboBox_DropAction, 1, 1, 1, 1);

        label_dragDropMode_2 = new QLabel(groupBox_params);
        label_dragDropMode_2->setObjectName("label_dragDropMode_2");

        gridLayout->addWidget(label_dragDropMode_2, 2, 0, 1, 1);

        comboBox_CopyAction = new QComboBox(groupBox_params);
        comboBox_CopyAction->addItem(QString());
        comboBox_CopyAction->addItem(QString());
        comboBox_CopyAction->addItem(QString());
        comboBox_CopyAction->addItem(QString());
        comboBox_CopyAction->setObjectName("comboBox_CopyAction");

        gridLayout->addWidget(comboBox_CopyAction, 2, 1, 1, 1);


        horizontalLayout_Top->addWidget(groupBox_params);

        horizontalSpacer = new QSpacerItem(258, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_Top->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_Top);

        horizontalLayout_Bottom = new QHBoxLayout();
        horizontalLayout_Bottom->setObjectName("horizontalLayout_Bottom");
        groupBox_listSource = new QGroupBox(Widget);
        groupBox_listSource->setObjectName("groupBox_listSource");
        QFont font;
        font.setBold(true);
        groupBox_listSource->setFont(font);
        gridLayout_5 = new QGridLayout(groupBox_listSource);
        gridLayout_5->setObjectName("gridLayout_5");
        listWidget_listSource = new QListWidget(groupBox_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        new QListWidgetItem(listWidget_listSource);
        listWidget_listSource->setObjectName("listWidget_listSource");
        listWidget_listSource->setFocusPolicy(Qt::StrongFocus);
        listWidget_listSource->setAcceptDrops(true);
        listWidget_listSource->setDragEnabled(true);

        gridLayout_5->addWidget(listWidget_listSource, 0, 0, 1, 1);


        horizontalLayout_Bottom->addWidget(groupBox_listSource);

        groupBox_listWidget = new QGroupBox(Widget);
        groupBox_listWidget->setObjectName("groupBox_listWidget");
        gridLayout_4 = new QGridLayout(groupBox_listWidget);
        gridLayout_4->setObjectName("gridLayout_4");
        listWidget = new QListWidget(groupBox_listWidget);
        listWidget->setObjectName("listWidget");

        gridLayout_4->addWidget(listWidget, 0, 0, 1, 1);


        horizontalLayout_Bottom->addWidget(groupBox_listWidget);

        groupBox_treeWidget = new QGroupBox(Widget);
        groupBox_treeWidget->setObjectName("groupBox_treeWidget");
        gridLayout_3 = new QGridLayout(groupBox_treeWidget);
        gridLayout_3->setObjectName("gridLayout_3");
        treeWidget = new QTreeWidget(groupBox_treeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        gridLayout_3->addWidget(treeWidget, 0, 0, 1, 1);


        horizontalLayout_Bottom->addWidget(groupBox_treeWidget);

        groupBox_tableWidget = new QGroupBox(Widget);
        groupBox_tableWidget->setObjectName("groupBox_tableWidget");
        gridLayout_2 = new QGridLayout(groupBox_tableWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        tableWidget = new QTableWidget(groupBox_tableWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setFocusPolicy(Qt::StrongFocus);
        tableWidget->setAcceptDrops(false);
        tableWidget->setAutoFillBackground(false);

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        horizontalLayout_Bottom->addWidget(groupBox_tableWidget);


        verticalLayout_2->addLayout(horizontalLayout_Bottom);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\213\226\346\224\276\345\212\237\350\203\275\347\273\204\344\273\266", nullptr));
        groupBox_setObject->setTitle(QCoreApplication::translate("Widget", "\350\256\276\347\275\256\345\257\271\350\261\241", nullptr));
        radioButton_listSource->setText(QCoreApplication::translate("Widget", "listSource", nullptr));
        radioButton_listWidget->setText(QCoreApplication::translate("Widget", "listWidget", nullptr));
        radioButton_treeWidget->setText(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        radioButton_tableWidget->setText(QCoreApplication::translate("Widget", "tableWidget", nullptr));
        groupBox_params->setTitle(QCoreApplication::translate("Widget", "\346\213\226\346\224\276\345\217\202\346\225\260", nullptr));
        checkBox_acceptDrops->setText(QCoreApplication::translate("Widget", "acceptDrops", nullptr));
        checkBox_dragEnabled->setText(QCoreApplication::translate("Widget", "dragEnabled", nullptr));
        label_dragDropMode->setText(QCoreApplication::translate("Widget", "dragDropMode", nullptr));
        comboBox_DropAction->setItemText(0, QCoreApplication::translate("Widget", "NoDragDrop", nullptr));
        comboBox_DropAction->setItemText(1, QCoreApplication::translate("Widget", "DragOnly", nullptr));
        comboBox_DropAction->setItemText(2, QCoreApplication::translate("Widget", "DropOnly", nullptr));
        comboBox_DropAction->setItemText(3, QCoreApplication::translate("Widget", "DragDrop", nullptr));
        comboBox_DropAction->setItemText(4, QCoreApplication::translate("Widget", "intemalMove", nullptr));

        label_dragDropMode_2->setText(QCoreApplication::translate("Widget", "defaultDropAction", nullptr));
        comboBox_CopyAction->setItemText(0, QCoreApplication::translate("Widget", "CopyAction", nullptr));
        comboBox_CopyAction->setItemText(1, QCoreApplication::translate("Widget", "MoveAction", nullptr));
        comboBox_CopyAction->setItemText(2, QCoreApplication::translate("Widget", "LinkAction", nullptr));
        comboBox_CopyAction->setItemText(3, QCoreApplication::translate("Widget", "IgnoreAction", nullptr));

        groupBox_listSource->setTitle(QCoreApplication::translate("Widget", "listSource", nullptr));

        const bool __sortingEnabled = listWidget_listSource->isSortingEnabled();
        listWidget_listSource->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_listSource->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("Widget", "\345\211\252\345\210\207", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_listSource->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("Widget", "\345\244\215\345\210\266", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_listSource->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("Widget", "\347\262\230\350\264\264", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget_listSource->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("Widget", "\347\262\227\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_listSource->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("Widget", "\346\226\234\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_listSource->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("Widget", "\344\270\213\345\210\222\347\272\277", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget_listSource->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("Widget", "\345\267\246\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget_listSource->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("Widget", "\344\270\255\351\227\264\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget_listSource->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("Widget", "\345\217\263\345\257\271\351\275\220", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget_listSource->item(9);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("Widget", "\347\272\242\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget_listSource->item(10);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("Widget", "\347\273\277\350\211\262", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget_listSource->item(11);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("Widget", "\350\223\235\350\211\262", nullptr));
        listWidget_listSource->setSortingEnabled(__sortingEnabled);

        groupBox_listWidget->setTitle(QCoreApplication::translate("Widget", "listWidget", nullptr));
        groupBox_treeWidget->setTitle(QCoreApplication::translate("Widget", "treeWidget", nullptr));
        groupBox_tableWidget->setTitle(QCoreApplication::translate("Widget", "tableWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
