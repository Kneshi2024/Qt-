#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //将toolBttton和toolBar中的action联系起来
    ui->toolButton_initList->setDefaultAction(ui->action_initList);
    ui->toolButton_clearList->setDefaultAction(ui->action_clear);
    ui->toolButton_delete->setDefaultAction(ui->action_delete);
    ui->toolButton_insert->setDefaultAction(ui->action_insert);
    ui->toolButton_add->setDefaultAction(ui->action_add);

    //再将tool button与action联系在一起
    ui->toolButton_selAll->setDefaultAction(ui->action_selAll);
    ui->toolButton_selNone->setDefaultAction(ui->action_selNone);
    ui->toolButton_selInverse->setDefaultAction(ui->action_selInverse);

    //设置tool button里的菜单模式
    QMenu *menuSelect=new QMenu(this);
    menuSelect->addAction(ui->action_selAll);
    menuSelect->addAction(ui->action_selNone);
    menuSelect->addAction(ui->action_selInverse);

    ui->toolButton_selectItem->setPopupMode(QToolButton::MenuButtonPopup);
    ui->toolButton_selectItem->setMenu(menuSelect);

    //将菜单栏放入toolbar中
    QToolButton *tbn=new QToolButton(this);
    tbn->setPopupMode(QToolButton::InstantPopup);
    tbn->setText("选择选项");
    tbn->setMenu(menuSelect);
    ui->toolBar->addWidget(tbn);

    //将退出活动加入toolbar
    ui->toolBar->addSeparator();
    ui->toolBar->addAction(ui->action_quit);

    // connect(ui->toolButton_initList,&QToolButton::clicked,ui->action_initList,&QAction::trigger);
    // connect(ui->toolButton_insert,&QToolButton::clicked,ui->action_insert,&QAction::trigger);
    // connect(ui->toolButton_add,&QToolButton::clicked,ui->action_add,&QAction::trigger);
    // connect(ui->toolButton_clearList,&QToolButton::clicked,ui->action_clear,&QAction::trigger);
    // connect(ui->toolButton_delete,&QToolButton::clicked,ui->action_delete,&QAction::trigger);

    //初始化可排序按钮为非选中,并且不可排序
    ui->checkBox_allowSlot->setCheckState(Qt::Unchecked);
    ui->listWidget->setSortingEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_initList_triggered()
{
    QListWidgetItem *listItem;
    ui->listWidget->clear();
    QIcon icon;
    icon.addFile(":/Image/Coin0001.ico");
    bool chk=ui->checkBox_enableEdit->isChecked();
    for(int i=0;i<10;++i){
        listItem=new QListWidgetItem;
        //填充文字
        listItem->setText("Item"+QString::number(i));
        //将图标写入
        listItem->setIcon(icon);
        //初始化为被选中状态
        listItem->setCheckState(Qt::Checked);

        if(chk){
            listItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
        }
        else{
            listItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
        }
        ui->listWidget->addItem(listItem);

    }
}


void MainWindow::on_action_clear_triggered()
{
    ui->listWidget->clear();
}


void MainWindow::on_action_insert_triggered()
{
    QIcon icon(":/Image/Coin0001.ico");
    bool chk=ui->checkBox_enableEdit->isChecked();

    QListWidgetItem *listItem=new QListWidgetItem;
    //填充文字
    listItem->setText("Item Insert");
    //将图标写入
    listItem->setIcon(icon);
    //初始化为被选中状态
    listItem->setCheckState(Qt::Checked);

    if(chk){
        listItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
    }
    else{
        listItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
    }
    ui->listWidget->insertItem(ui->listWidget->currentRow(),listItem);

}


void MainWindow::on_action_add_triggered()
{
    QIcon icon(":/Image/Coin0001.ico");
    bool chk=ui->checkBox_enableEdit->isChecked();

    QListWidgetItem *listItem=new QListWidgetItem;
    //填充文字
    listItem->setText("Item Add");
    //将图标写入
    listItem->setIcon(icon);
    //初始化为被选中状态
    listItem->setCheckState(Qt::Checked);

    if(chk){
        listItem->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
    }
    else{
        listItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
    }
    ui->listWidget->addItem(listItem);
}


void MainWindow::on_action_delete_triggered()
{
    delete ui->listWidget->takeItem(ui->listWidget->currentRow());
}


void MainWindow::on_toolButton_clearText_clicked()
{
    ui->plainTextEdit->clear();
}


void MainWindow::on_action_selAll_triggered()
{
    int num=ui->listWidget->count();
    for(int i=0;i<num;++i){
        QListWidgetItem *item=ui->listWidget->item(i);
        item->setCheckState(Qt::Checked);
    }
}


void MainWindow::on_action_selNone_triggered()
{
    int num=ui->listWidget->count();
    for(int i=0;i<num;++i){
        QListWidgetItem *item=ui->listWidget->item(i);
        item->setCheckState(Qt::Unchecked);
    }
}


void MainWindow::on_action_selInverse_triggered()
{
    int num=ui->listWidget->count();
    for(int i=0;i<num;++i){
        QListWidgetItem *item=ui->listWidget->item(i);
        if(item->checkState()==Qt::Checked){
            item->setCheckState(Qt::Unchecked);
        }
        else{
            item->setCheckState(Qt::Checked);
        }
    }
}


void MainWindow::on_listWidget_currentItemChanged(QListWidgetItem *current, QListWidgetItem *previous)
{
    QString str;
    if(current!=nullptr&&previous==nullptr){
        str="当前项="+current->text();
    }
    else if(current!=nullptr&&previous!=nullptr){
        str="前一项="+previous->text()+"当前项="+current->text();
    }
    ui->lineEdit->setText(str);
    ui->plainTextEdit->appendPlainText("currentItemChanged已被发送");
}


void MainWindow::on_checkBox_allowSlot_clicked(bool checked)
{
    ui->listWidget->setSortingEnabled(checked);
}


void MainWindow::on_toolButton_clicked()
{
    if(ui->checkBox_allowSlot->isChecked()){
        ui->listWidget->sortItems(Qt::AscendingOrder);
    }
    else{
        return;
    }
}


void MainWindow::on_toolButton_5_clicked()
{
    if(ui->checkBox_allowSlot->isChecked()){
        ui->listWidget->sortItems(Qt::DescendingOrder);
    }
    else{
        return;
    }
}


void MainWindow::on_listWidget_customContextMenuRequested(const QPoint &pos)
{
    //(void)pos;
    Q_UNUSED(pos);
    QMenu*menu=new QMenu;
    menu->addAction(ui->action_initList);
    menu->addAction(ui->action_clear);
    menu->addAction(ui->action_add);
    menu->addAction(ui->action_insert);
    menu->addAction(ui->action_delete);
    menu->addSeparator();
    menu->addAction(ui->action_selAll);
    menu->addAction(ui->action_selNone);
    menu->addAction(ui->action_selInverse);
    menu->addAction(ui->action_quit);
    menu->exec(QCursor::pos());
    delete menu;
}

