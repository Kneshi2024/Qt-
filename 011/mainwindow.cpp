#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->clear();
    //添加头部
    QTreeWidgetItem*header=new QTreeWidgetItem();
    header->setText(FIRST_COLUMN,"目录和文件");
    header->setText(SECOND_COLUMN,"节点和类型");
    header->setText(THIRD_COLUMN,"最后的修改日期");

    //居中显示两个标签
    header->setTextAlignment(FIRST_COLUMN,Qt::AlignHCenter|Qt::AlignVCenter);
    header->setTextAlignment(SECOND_COLUMN,Qt::AlignHCenter|Qt::AlignVCenter);
    //header->setTextAlignment(THIRD_COLUMN,Qt::AlignHCenter|Qt::AlignVCenter);

    ui->treeWidget->setHeaderItem(header);

    //添加根节点
    QTreeWidgetItem*topItem=new QTreeWidgetItem(TOP_ITEM);
    topItem->setText(FIRST_COLUMN,"根目录");
    topItem->setText(SECOND_COLUMN,"TOP_ITEM");
    //topItem->setCheckState(FIRST_COLUMN,Qt::Checked);
    topItem->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsUserTristate);
    ui->treeWidget->addTopLevelItem(topItem);
    ui->treeWidget->setCurrentItem(topItem);

    //设置status bar
    labelNoteText=new QLabel("节点标题",this);
    //设置标签栏最小宽度
    labelNoteText->setMinimumWidth(200);
    //将标签加入到状态栏中
    ui->statusbar->addWidget(labelNoteText);

    spinRatio=new QSpinBox(this);
    //设置spinbox的范围
    spinRatio->setRange(0,200);
    //设置当前值
    spinRatio->setValue(50);
    //设置后缀
    spinRatio->setSuffix("%");
    //将其设为只读，不允许修改
    spinRatio->setReadOnly(true);
    //将spinbox自带的上下箭头取消
    spinRatio->setButtonSymbols(QAbstractSpinBox::NoButtons);
    //将spin box加入到状态栏中
    ui->statusbar->addPermanentWidget(spinRatio);

    labelFileName=new QLabel("文件名称",this);
    ui->statusbar->addPermanentWidget(labelFileName);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_addFolder_triggered()
{
    //获取系统文件路径
    QString dir=QFileDialog::getExistingDirectory();
    //qDebug()<<dir;
    if(dir.isEmpty()){
        return;
    }
    //获取父节点
    QTreeWidgetItem *parentItem=ui->treeWidget->currentItem();
    if(parentItem==nullptr){
        return;
    }
    if(parentItem->type()!=PICTURE_ITEM){
        int length=dir.length();
        int n=dir.lastIndexOf("/");
        QString name=dir.right(length-1-n);

        QTreeWidgetItem*item=new QTreeWidgetItem(GROUP_ITEM);
        item->setText(FIRST_COLUMN,name);
        item->setText(SECOND_COLUMN,"GROUP_ITEM");
        //item->setCheckState(FIRST_COLUMN,Qt::Checked);
        item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsUserTristate);
        item->setData(FIRST_COLUMN,Qt::UserRole,QVariant(dir));
        qDebug() << "Item data:" << item->data(FIRST_COLUMN, Qt::UserRole);
        parentItem->addChild(item);
        ui->treeWidget->setCurrentItem(item);
    }

}


void MainWindow::on_action_addFile_triggered()
{
    //打开一个对话框，以供用户选择多个文件
    QStringList files=QFileDialog::getOpenFileNames(this,"选择文件","","Images(*.jpg *.png)");
    if(files.isEmpty()){
        return;
    }
    QTreeWidgetItem *parentItem,*item;
    item=ui->treeWidget->currentItem();
    if(item==nullptr){
        parentItem=ui->treeWidget->topLevelItem(0);
    }
    else if(item->type()==PICTURE_ITEM){
        parentItem=item->parent();
    }
    else{
        parentItem=item;
    }
    for(int i=0;i<files.size();++i){
        //每次获得一个文件
        QString filename=files[i];
        //qDebug()<<filename;
        //获得文件的详细信息
        QFileInfo fileInfo(filename);
        //获取文件名称
        QString textName=fileInfo.fileName();
        //获取文件最后修改时间
        QDateTime dateTime=fileInfo.lastModified();
        //创建一个item指针
        QTreeWidgetItem *Item=new QTreeWidgetItem(PICTURE_ITEM);
        if(Item==nullptr){
            return;
        }
        Item->setText(FIRST_COLUMN,textName);
        Item->setText(SECOND_COLUMN,"PICTURE_ITEM");
        Item->setText(THIRD_COLUMN,dateTime.toString("yyyy-MM-dd"));
        //item->setCheckState(FIRST_COLUMN,Qt::Checked);
        Item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsUserTristate);
        Item->setData(SECOND_COLUMN,Qt::UserRole,QVariant(filename));
        qDebug() << "Item data2:" << Item->data(SECOND_COLUMN, Qt::UserRole);
        parentItem->addChild(Item);
        ui->treeWidget->setCurrentItem(Item);
    }
    parentItem->setExpanded(true);
}


void MainWindow::on_action_deletePoint_triggered()
{
    QTreeWidgetItem *item=ui->treeWidget->currentItem();
    if(item==nullptr){
        return;
    }
    QTreeWidgetItem *parentItem=item->parent();
    parentItem->removeChild(item);
}


void MainWindow::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    if(current==nullptr||current==previous){
        return;
    }
    switch(current->type()){
    case TOP_ITEM:
        ui->action_addFolder->setEnabled(true);
        ui->action_addFile->setEnabled(true);
        ui->action_deletePoint->setEnabled(false);
        break;
    case PICTURE_ITEM:
        qDebug()<<"current->type="<<current->type();
        if(current==nullptr){
            qDebug()<<"current==nullptr";
        }
        ui->action_addFolder->setEnabled(false);
        ui->action_addFile->setEnabled(true);
        ui->action_deletePoint->setEnabled(true);
        qDebug()<<"执行图片显示";
        qDebug() << "current data2:" << current->data(SECOND_COLUMN, Qt::UserRole);
        //qDebug()<<"current data2:"<<current->text(FIRST_COLUMN);
        displayPicture(current);
        break;
    case GROUP_ITEM:
        ui->action_addFolder->setEnabled(true);
        ui->action_addFile->setEnabled(true);
        ui->action_deletePoint->setEnabled(true);
        break;
    }
}

void MainWindow::itemNameChange(QTreeWidgetItem *item)
{
    QString str="*"+ item->text(FIRST_COLUMN);
    item->setText(FIRST_COLUMN,str);
    if(item->childCount()>0){
        for(int i=0;i<item->childCount();++i){
            itemNameChange(item->child(i));
        }
    }
}

void MainWindow::displayPicture(QTreeWidgetItem *item)
{
    if(item==nullptr){
        qDebug()<<"item为空指针";
    }
    qDebug() << "Item data2:" << item->data(SECOND_COLUMN, Qt::UserRole);
    //qDebug() << "Item data:" << item->data(FIRST_COLUMN, Qt::UserRole);
    QString fileName=item->data(SECOND_COLUMN,Qt::UserRole).toString();
    qDebug()<<"文件路径："<<fileName;
    labelFileName->setText(fileName);//文件路径名称
    labelNoteText->setText(item->text(FIRST_COLUMN));//节点的文件名
    qDebug()<<"文件节点名称："<<item->text(FIRST_COLUMN);
    m_pic.load(fileName);
    if(m_pic.isNull()){
        qDebug()<<"错误的文件路径";
    }
    ui->action_porperWidth->trigger();
    qDebug()<<"打印图片";
    ui->action_properHeight->setEnabled(true);
    ui->action_porperWidth->setEnabled(true);
    ui->action_enlarge->setEnabled(true);
    ui->action_narrow->setEnabled(true);
    ui->action_realSize->setEnabled(true);

}

//遍历
void MainWindow::on_action_ergodicPoint_triggered()
{
    for(int i=0;i<ui->treeWidget->topLevelItemCount();++i){
        itemNameChange(ui->treeWidget->topLevelItem(i));
    }
}


void MainWindow::on_action_porperWidth_triggered()
{
    int w=ui->scrollArea->width()-30;
    int realWidth=m_pic.width();
    m_ratio=float(w)/realWidth;
    spinRatio->setValue(m_ratio*100);
    QPixmap pixMap=m_pic.scaledToWidth(w);
    ui->label_picture->setPixmap(pixMap);
}


void MainWindow::on_action_properHeight_triggered()
{
    int h=ui->scrollArea->height()-30;
    int realHeight=m_pic.height();
    m_ratio=float(h)/realHeight;
    spinRatio->setValue(m_ratio*100);
    QPixmap pixMap=m_pic.scaledToHeight(h);
    ui->label_picture->setPixmap(pixMap);
}

//以m_ratio为基准调整图片的大小（m_pic的大小是不会变的）
void MainWindow::on_action_realSize_triggered()
{
    qDebug()<<"1:"<<m_pic.width();
    ui->label_picture->setPixmap(m_pic);
    m_ratio=1;
    spinRatio->setValue(100);
}


void MainWindow::on_action_narrow_triggered()
{
    qDebug()<<"2:"<<m_pic.width();
    m_ratio*=0.8;
    int w=m_ratio*m_pic.width();
    int h=m_ratio*m_pic.height();
    spinRatio->setValue(100*m_ratio);
    if(m_ratio>=0){
        ui->label_picture->setPixmap(m_pic.scaled(w,h));
    }
}


void MainWindow::on_action_enlarge_triggered()
{
    qDebug()<<"3:"<<m_pic.width();
    m_ratio*=1.2;
    int w=m_ratio*m_pic.width();
    int h=m_ratio*m_pic.height();
    spinRatio->setValue(100*m_ratio);
    if(m_ratio<=2){
        ui->label_picture->setPixmap(m_pic.scaled(w,h));
    }
}


void MainWindow::on_action_windowFloat_triggered(bool checked)
{
    ui->dockWidget->setFloating(checked);
}


void MainWindow::on_action_windowVisible_triggered(bool checked)
{
    ui->dockWidget->setVisible(checked);
}


void MainWindow::on_dockWidget_topLevelChanged(bool topLevel)
{
    ui->action_windowFloat->setChecked(topLevel);
}


void MainWindow::on_dockWidget_visibilityChanged(bool visible)
{
    ui->action_windowVisible->setChecked(visible);
}

