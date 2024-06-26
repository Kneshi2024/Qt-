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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_setRoot;
    QAction *action_quit;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter_main;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_showDirAndFile;
    QRadioButton *radioButton_showDirOnly;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_filter;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_isfileFilter;
    QComboBox *comboBox_fileFilter;
    QPushButton *pushButton_applicate;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *treeView;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QListView *listView;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_fileName;
    QLabel *label_fileSize;
    QLabel *label_fileType;
    QCheckBox *checkBox_isDir;
    QLabel *label_pathName;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1018, 583);
        action_setRoot = new QAction(MainWindow);
        action_setRoot->setObjectName("action_setRoot");
        action_setRoot->setMenuRole(QAction::NoRole);
        action_quit = new QAction(MainWindow);
        action_quit->setObjectName("action_quit");
        action_quit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        splitter_main = new QSplitter(centralwidget);
        splitter_main->setObjectName("splitter_main");
        splitter_main->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_main);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        radioButton_showDirAndFile = new QRadioButton(groupBox);
        radioButton_showDirAndFile->setObjectName("radioButton_showDirAndFile");
        radioButton_showDirAndFile->setChecked(true);

        horizontalLayout->addWidget(radioButton_showDirAndFile);

        radioButton_showDirOnly = new QRadioButton(groupBox);
        radioButton_showDirOnly->setObjectName("radioButton_showDirOnly");

        horizontalLayout->addWidget(radioButton_showDirOnly);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        groupBox_filter = new QGroupBox(groupBox);
        groupBox_filter->setObjectName("groupBox_filter");
        horizontalLayout_2 = new QHBoxLayout(groupBox_filter);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        checkBox_isfileFilter = new QCheckBox(groupBox_filter);
        checkBox_isfileFilter->setObjectName("checkBox_isfileFilter");

        horizontalLayout_2->addWidget(checkBox_isfileFilter);

        comboBox_fileFilter = new QComboBox(groupBox_filter);
        comboBox_fileFilter->addItem(QString());
        comboBox_fileFilter->addItem(QString());
        comboBox_fileFilter->addItem(QString());
        comboBox_fileFilter->setObjectName("comboBox_fileFilter");
        comboBox_fileFilter->setEnabled(false);

        horizontalLayout_2->addWidget(comboBox_fileFilter);

        pushButton_applicate = new QPushButton(groupBox_filter);
        pushButton_applicate->setObjectName("pushButton_applicate");
        pushButton_applicate->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_applicate);

        horizontalSpacer_2 = new QSpacerItem(133, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(groupBox_filter);

        treeView = new QTreeView(groupBox);
        treeView->setObjectName("treeView");

        verticalLayout->addWidget(treeView);

        splitter_main->addWidget(groupBox);
        splitter = new QSplitter(splitter_main);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName("gridLayout");
        listView = new QListView(groupBox_2);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 0, 0, 1, 1);

        splitter->addWidget(groupBox_3);
        splitter_main->addWidget(splitter);

        gridLayout_3->addWidget(splitter_main, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_fileName = new QLabel(centralwidget);
        label_fileName->setObjectName("label_fileName");

        horizontalLayout_3->addWidget(label_fileName);

        label_fileSize = new QLabel(centralwidget);
        label_fileSize->setObjectName("label_fileSize");

        horizontalLayout_3->addWidget(label_fileSize);

        label_fileType = new QLabel(centralwidget);
        label_fileType->setObjectName("label_fileType");

        horizontalLayout_3->addWidget(label_fileType);

        checkBox_isDir = new QCheckBox(centralwidget);
        checkBox_isDir->setObjectName("checkBox_isDir");

        horizontalLayout_3->addWidget(checkBox_isDir);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        label_pathName = new QLabel(centralwidget);
        label_pathName->setObjectName("label_pathName");

        gridLayout_3->addWidget(label_pathName, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(action_setRoot);
        toolBar->addAction(action_quit);

        retranslateUi(MainWindow);
        QObject::connect(action_quit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\347\256\241\347\220\206\345\231\250", nullptr));
        action_setRoot->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        action_setRoot->setToolTip(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\346\240\271\347\233\256\345\275\225", nullptr));
#endif // QT_CONFIG(tooltip)
        action_quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        action_quit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "TreeView", nullptr));
        radioButton_showDirAndFile->setText(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272\347\233\256\345\275\225\345\222\214\346\226\207\344\273\266", nullptr));
        radioButton_showDirOnly->setText(QCoreApplication::translate("MainWindow", "\345\217\252\346\230\276\347\244\272\347\233\256\345\275\225", nullptr));
        groupBox_filter->setTitle(QString());
        checkBox_isfileFilter->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\350\277\207\346\273\244", nullptr));
        comboBox_fileFilter->setItemText(0, QCoreApplication::translate("MainWindow", "*.cpp;*.h;*.ui", nullptr));
        comboBox_fileFilter->setItemText(1, QCoreApplication::translate("MainWindow", "*.txt", nullptr));
        comboBox_fileFilter->setItemText(2, QCoreApplication::translate("MainWindow", "*.jpg", nullptr));

        pushButton_applicate->setText(QCoreApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "ListView", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "TableView", nullptr));
        label_fileName->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\357\274\232", nullptr));
        label_fileSize->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217\357\274\232", nullptr));
        label_fileType->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\347\261\273\345\236\213\357\274\232", nullptr));
        checkBox_isDir->setText(QCoreApplication::translate("MainWindow", "\350\212\202\347\202\271\346\230\257\345\220\246\346\230\257\347\233\256\345\275\225", nullptr));
        label_pathName->setText(QCoreApplication::translate("MainWindow", "\350\267\257\345\276\204\345\220\215\357\274\232", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
