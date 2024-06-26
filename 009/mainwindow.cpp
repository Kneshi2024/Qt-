#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //解决英文中文按钮互斥问题
    QActionGroup*actionGroup=new QActionGroup(this);
    actionGroup->addAction(ui->action_chinese);
    actionGroup->addAction(ui->action_english);
    actionGroup->setExclusive(true);//设置为独有的互斥的

    //创建一些无法通过可视化UI设计的组件
    QSpinBox*spinbox=new QSpinBox(this);
    //设置上下限
    spinbox->setMinimum(5);
    spinbox->setMaximum(50);
    //设置初始值
    spinbox->setValue(ui->textEdit->font().pointSize());
    //设置最小宽度
    spinbox->setMinimumWidth(50);
    //将该组件加入到ToolBar中去
    ui->toolBar->addWidget(spinbox);

    QComboBox*combox=new QComboBox(this);
    combox->setMinimumWidth(150);
    combox->setFont(ui->textEdit->font());
    //获取系统支持的字体，并返回一个字体列表
    QStringList fontFamilies=QFontDatabase::families();
    combox->addItems(fontFamilies);//直接加入字体列表
    // for(const QString &family:fontFamilies){
    //     combox->addItem(family);//一次加入一个字体
    // }
    ui->toolBar->addWidget(combox);

    ui->toolBar->addSeparator();//增加分割线
    ui->toolBar->addAction(ui->action_close);//再增加一个关闭动作

    //增加状态栏中组件
    labFile=new QLabel(this);
    labFile->setText("文件名:");
    ui->statusbar->addWidget(labFile);

    progress=new QProgressBar(this);
    //设置上下限
    progress->setMinimum(5);
    progress->setMaximum(50);
    //设置初始值
    progress->setValue(ui->textEdit->font().pointSize());
    progress->setFormat("%p");
    ui->statusbar->addWidget(progress);
    //设置永久标签
    info=new QLabel(this);
    info->setText("permanent");
    ui->statusbar->addPermanentWidget(info);

    //连接字体、大小按钮
    connect(spinbox,&QSpinBox::valueChanged,this,&MainWindow::on_spinBox_valueChanged);
    connect(combox,&QComboBox::currentTextChanged,this,&MainWindow::on_comboBox_currentText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_new_triggered()
{
    ui->textEdit->clear();
    ui->textEdit->document()->setModified(false);
    labFile->setText("文件名：新建的一个文件");
}


void MainWindow::on_action_open_triggered()
{
    labFile->setText("正在打开一个文件");
}


void MainWindow::on_action_save_triggered()
{
    ui->textEdit->document()->setModified(false);
    labFile->setText("正在保存文件");
}


void MainWindow::on_textEdit_copyAvailable(bool b)
{
    ui->action_copy->setEnabled(b);
    ui->action_cut->setEnabled(b);
    ui->action_paste->setEnabled(ui->textEdit->canPaste());
}


void MainWindow::on_textEdit_selectionChanged()
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    ui->action_bold->setChecked(fmt.font().bold());
    ui->action_italic->setChecked(fmt.font().italic());
    ui->action_underLine->setChecked(fmt.font().underline());
}


void MainWindow::on_action_bold_triggered(bool checked)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    if(checked){
        fmt.setFontWeight(QFont::Bold);
    }
    else{
        fmt.setFontWeight(QFont::Normal);
    }
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_action_italic_triggered(bool checked)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontItalic(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}


void MainWindow::on_action_underLine_triggered(bool checked)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontUnderline(checked);
    ui->textEdit->setCurrentCharFormat(fmt);
}

void MainWindow::on_spinBox_valueChanged(int fontSize)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFontPointSize(fontSize);
    ui->textEdit->setCurrentCharFormat(fmt);
    progress->setValue(fontSize);
}

void MainWindow::on_comboBox_currentText(const QFont &font)
{
    QTextCharFormat fmt=ui->textEdit->currentCharFormat();
    fmt.setFont(font);
    ui->textEdit->setCurrentCharFormat(fmt);
    info->setText("字体名称："+font.family());//font.family()它返回当前字体的家族名称（即字体名称）。
}

