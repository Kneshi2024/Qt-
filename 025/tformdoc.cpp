#include "tformdoc.h"
#include "ui_tformdoc.h"
#include<QFile>
#include<QFileInfo>
#include<QFontDialog>

TFormDoc::TFormDoc(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TFormDoc)
{
    ui->setupUi(this);
    this->setWindowTitle("New Doc [*]");
    this->setAttribute(Qt::WA_DeleteOnClose);
    //当文本框中的内容改变的时候,就将主窗口的modify设为启用状态
    connect(ui->plainTextEdit,&QPlainTextEdit::modificationChanged,this,&TFormDoc::setWindowModified);
}

TFormDoc::~TFormDoc()
{
    delete ui;
}

void TFormDoc::loadCurrentFile(QString &text)
{
    QFile aFile(text);
    if(aFile.open(QIODevice::ReadOnly|QIODevice::Text)){
        ui->plainTextEdit->clear();
        QTextStream aStream(&aFile);
        QString str=aStream.readAll();
        ui->plainTextEdit->setPlainText(str);
        aFile.close();
        QFileInfo fileInfo(aFile);
        QString str1=fileInfo.fileName();
        setWindowTitle(str1+"[*]");

        m_fileName=str1;
        m_isOpened=true;
    }
}

QString TFormDoc::currentFileNmae()
{
    return m_fileName;
}

bool TFormDoc::isFileOpen()
{
    return m_isOpened;
}

void TFormDoc::saveToFile()
{
    //把保存过得关掉该功能，假设已经保存
    setWindowModified(false);
}

void TFormDoc::setFont()
{
    QFont font=ui->plainTextEdit->font();
    bool ok;
    font=QFontDialog::getFont(&ok,font,this,"请选择字体");
    if(ok){
        ui->plainTextEdit->setFont(font);
    }
}

void TFormDoc::textCut()
{
    ui->plainTextEdit->cut();
}

void TFormDoc::textCopy()
{
    ui->plainTextEdit->copy();
}

void TFormDoc::textPaste()
{
    ui->plainTextEdit->paste();
}
