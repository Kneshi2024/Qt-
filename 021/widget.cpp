#include "widget.h"
#include "ui_widget.h"
#include<QFont>
#include<QKeyEvent>

void Widget::refreshToUI(QGroupBox *curGroupBox)
{
    //根据当前的选项设置复选框是否选中
    ui->checkBox_acceptDrops->setChecked(m_itemView->acceptDrops());
    ui->checkBox_dragEnabled->setChecked(m_itemView->dragEnabled());

    //根据当前项目的拖动落下模式设置UI界面的拖动落下的模式
    ui->comboBox_DropAction->setCurrentIndex((int)m_itemView->dragDropMode());
    //根据当前项目的默认的复制模式设置UI界面默认的复制模式
    int index=getDropActionIndex(m_itemView->defaultDropAction());
    ui->comboBox_CopyAction->setCurrentIndex(index);

    QFont font=ui->groupBox_listSource->font();
    font.setBold(false);
    ui->listWidget_listSource->setFont(font);
    ui->listWidget->setFont(font);
    ui->tableWidget->setFont(font);
    ui->treeWidget->setFont(font);
    font.setBold(true);
    curGroupBox->setFont(font);
}

    // CopyAction = 0x1,
    // MoveAction = 0x2,
    // LinkAction = 0x4,
    // IgnoreAction = 0x0
int Widget::getDropActionIndex(Qt::DropAction actionType)
{
    switch(actionType){
    case Qt::CopyAction:
        return 0;
    case Qt::MoveAction:
        return 1;
    case Qt::LinkAction:
        return 2;
    case Qt::IgnoreAction:
        return 3;
    default:
        return 0;
    }
}

Qt::DropAction Widget::getDropActionType(int index)
{
    switch(index){
    case 0:
        return Qt::CopyAction;
    case 1:
        return Qt::MoveAction;
    case 2:
        return Qt::LinkAction;
    case 3:
        return Qt::IgnoreAction;
    default:
        return Qt::CopyAction;
    }
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_itemView=ui->listWidget_listSource;
    refreshToUI(ui->groupBox_listSource);
    ui->listWidget_listSource->setDragEnabled(true);
    ui->listWidget_listSource->setAcceptDrops(true);
    ui->listWidget_listSource->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listWidget_listSource->setDefaultDropAction(Qt::CopyAction);

    ui->listWidget->setDragEnabled(true);
    ui->listWidget->setAcceptDrops(true);
    ui->listWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->listWidget->setDefaultDropAction(Qt::CopyAction);

    ui->treeWidget->setDragEnabled(true);
    ui->treeWidget->setAcceptDrops(true);
    ui->treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->treeWidget->setDefaultDropAction(Qt::CopyAction);

    ui->tableWidget->setDragEnabled(true);
    ui->tableWidget->setAcceptDrops(true);
    ui->tableWidget->setDragDropMode(QAbstractItemView::DragDrop);
    ui->tableWidget->setDefaultDropAction(Qt::MoveAction);

    //委托widget处理
    ui->listWidget_listSource->installEventFilter(this);
    ui->listWidget->installEventFilter(this);
    ui->treeWidget->installEventFilter(this);
    ui->tableWidget->installEventFilter(this);

    //当前窗口接受键盘所有命令
    //this->grabKeyboard();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_radioButton_listSource_clicked()
{
    m_itemView=ui->listWidget_listSource;
    refreshToUI(ui->groupBox_listSource);
}

void Widget::on_radioButton_listWidget_clicked()
{
    m_itemView=ui->listWidget;
    refreshToUI(ui->groupBox_listWidget);
}


void Widget::on_radioButton_treeWidget_clicked()
{
    m_itemView=ui->treeWidget;
    refreshToUI(ui->groupBox_treeWidget);
}


void Widget::on_radioButton_tableWidget_clicked()
{
    m_itemView=ui->tableWidget;
    refreshToUI(ui->groupBox_tableWidget);
}





void Widget::on_checkBox_acceptDrops_clicked(bool checked)
{
    m_itemView->setAcceptDrops(checked);
}


void Widget::on_checkBox_dragEnabled_clicked(bool checked)
{
    m_itemView->setDragEnabled(checked);
}


void Widget::on_comboBox_DropAction_currentIndexChanged(int index)
{
    m_itemView->setDragDropMode((QAbstractItemView::DragDropMode)index);
}


void Widget::on_comboBox_CopyAction_currentIndexChanged(int index)
{
    m_itemView->setDefaultDropAction(getDropActionType(index));
}

//过滤器，更灵活的写操作   键盘删除操作
bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()!=QEvent::KeyPress){
        return QWidget::eventFilter(watched,event);
    }
    QKeyEvent *keyEvent=static_cast<QKeyEvent*>(event);
    if(keyEvent->key()!=Qt::Key_Delete){
        return QWidget::eventFilter(watched,event);
    }
    if(watched==ui->listWidget_listSource){
        delete ui->listWidget_listSource->takeItem(ui->listWidget_listSource->currentRow());
    }
    else if(watched==ui->listWidget){
        delete ui->listWidget->takeItem(ui->listWidget->currentRow());
    }
    else if(watched==ui->treeWidget){
        QTreeWidgetItem *curItem=ui->treeWidget->currentItem();
        if(curItem->parent()!=nullptr){
            curItem->parent()->removeChild(curItem);
        }
        else{
            int index=ui->treeWidget->indexOfTopLevelItem(curItem);
            ui->treeWidget->takeTopLevelItem(index);
        }
        delete curItem;
    }
    else if(watched==ui->tableWidget){
        delete ui->tableWidget->takeItem(ui->tableWidget->currentRow(),ui->tableWidget->currentColumn());
    }
    return true;
}
