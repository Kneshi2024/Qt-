#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cellIndex=new QLabel("单元格坐标:",this);
    cellIndex->setMinimumWidth(250);
    cellType=new QLabel("单元格类型:",this);
    cellType->setMinimumWidth(200);
    StuID=new QLabel("学生ID:",this);
    StuID->setMinimumWidth(200);

    ui->statusbar->addWidget(cellIndex);
    ui->statusbar->addWidget(cellType);
    ui->statusbar->addWidget(StuID);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //清空所有数据，包括表格本身
    ui->tableWidget->clear();
    //QStringList headerList={"姓名","性别","出生日期","民族","分数","是否党员"};
    //qDebug()<<headerList[0];
    QStringList headerList;
    headerList << "姓名" << "性别" << "出生日期" << "民族" << "分数"<<"是否党员";
    //ui->tableWidget->setHorizontalHeaderLabels(headerList);
    ui->tableWidget->setColumnCount(headerList.size());
    for(int i=0;i<ui->tableWidget->columnCount();++i){
        QTableWidgetItem*tableWidgetItem=new QTableWidgetItem(headerList[i]);
        QFont font=tableWidgetItem->font();
        font.setBold(true);
        font.setPointSize(10);
        tableWidgetItem->setFont(font);
        tableWidgetItem->setForeground(QBrush(Qt::red));
        ui->tableWidget->setHorizontalHeaderItem(i,tableWidgetItem);
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->tableWidget->setRowCount(ui->spinBox->value());
}


void MainWindow::on_pushButton_4_clicked()
{
    //清空表格内的数据
    ui->tableWidget->clearContents();
    QDate birth;
    birth.setDate(2000,2,2);
    for(int i=0;i<ui->tableWidget->rowCount();++i){
        //姓名
        QString stuName=QString("学生%1").arg(i+1);
        //性别
        QString stuSex=(i%2)? "男":"女";
        //出生日期
        birth=birth.addDays(20);
        //民族
        // Qstring stuNation="汉族";
        //分数
        int stuScore=QRandomGenerator::global()->bounded(60,100);
        //是否党员
        bool isParty=(i%2)? true:false;
        creatRowItem(i,stuName,stuSex,birth,"汉族",stuScore,isParty);

    }
}

void MainWindow::creatRowItem(int row,QString name, QString sex, QDate birth, QString nation, int score, bool isParty)
{
    uint stuID=20221000;
    //姓名
    QTableWidgetItem*item=new QTableWidgetItem(name,CT_NAME);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    stuID+=row;
    item->setData(Qt::UserRole,QVariant(stuID));
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
    ui->tableWidget->setItem(row,COL_NAME,item);
    //性别
    item=new QTableWidgetItem(sex,CT_SEX);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(row,COL_SEX,item);
    //出生日期
    item=new QTableWidgetItem(birth.toString("yyyy-MM-dd"),CT_BIRTH);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(row,COL_BIRTH,item);
    //民族
    item=new QTableWidgetItem(nation,CT_NATION);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(row,COL_NATION,item);
    //分数
    item=new QTableWidgetItem(QString::number(score),CT_SCORE);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    ui->tableWidget->setItem(row,COL_SCORE,item);
    //是否党员
    item=new QTableWidgetItem("党员",CT_PARTY);
    item->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);
    if(isParty==true){
        item->setCheckState(Qt::Checked);
    }
    else{
        item->setCheckState(Qt::Unchecked);
    }
    item->setBackground(QBrush(Qt::yellow));
    ui->tableWidget->setItem(row,COL_PARTY,item);
}


void MainWindow::on_pushButton_3_clicked()
{

    int currentRow=ui->tableWidget->currentRow();
    ui->tableWidget->insertRow(currentRow);
    creatRowItem(currentRow,"__","__",QDate::fromString("2000-01-01","yyyy-MM-dd"),"__",0,"党员");
}


void MainWindow::on_pushButton_5_clicked()
{
    int lastRow=ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(lastRow);
    creatRowItem(lastRow,"__","__",QDate::fromString("2000-01-01","yyyy-MM-dd"),"__",0,"党员");

}


void MainWindow::on_pushButton_8_clicked()
{
    int currentRow=ui->tableWidget->currentRow();
    ui->tableWidget->removeRow(currentRow);
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->tableWidget->resizeRowsToContents();
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->tableWidget->resizeColumnsToContents();
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->plainTextEdit->clear();
    QTableWidgetItem *item;
    for(int i=0;i<ui->tableWidget->rowCount();++i){
        QString str=QString::asprintf("第%d行\t",i+1);
        for(int j=0;j<ui->tableWidget->columnCount()-1;++j){
            item=ui->tableWidget->item(i,j);
            str=str+item->text()+"\t";
        }
        item=ui->tableWidget->item(i,COL_PARTY);
        if(item->checkState()==Qt::Checked){
            str=str+"\t党员";
        }
        else{
            str=str+"\t群众";
        }
        ui->plainTextEdit->appendPlainText(str);
    }
}


void MainWindow::on_checkBox_clicked(bool checked)
{
    if(checked){
        ui->tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::SelectedClicked);
    }
    else{
        ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}


void MainWindow::on_checkBox_2_clicked(bool checked)
{
    ui->tableWidget->setAlternatingRowColors(checked);
}


void MainWindow::on_checkBox_4_clicked(bool checked)
{
    ui->tableWidget->horizontalHeader()->setVisible(checked);
}


void MainWindow::on_checkBox_3_clicked(bool checked)
{
    ui->tableWidget->verticalHeader()->setVisible(checked);
}


void MainWindow::on_radioButton_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}


void MainWindow::on_radioButton_2_clicked()
{
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}

//设置状态栏
void MainWindow::on_tableWidget_currentCellChanged(int currentRow, int currentColumn, int previousRow, int previousColumn)
{
    Q_UNUSED(previousRow);
    Q_UNUSED(previousColumn);
    QTableWidgetItem *item=ui->tableWidget->item(currentRow,currentColumn);
    //QTableWidgetItem *item=ui->tableWidget->currentItem();
    if(item==nullptr){
        return;
    }
    cellIndex->setText(QString::asprintf("当前单元格坐标为: %d,%d",currentRow,currentColumn));
    cellType->setText(QString::asprintf("当前单元格类型为: %d",item->type()));
    item=ui->tableWidget->item(currentRow,COL_NAME);
    StuID->setText("学生ID为："+item->data(Qt::UserRole).toString());
}

