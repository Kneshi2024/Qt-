#ifndef TFORMDOC_H
#define TFORMDOC_H

#include <QWidget>

namespace Ui {
class TFormDoc;
}

class TFormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit TFormDoc(QWidget *parent = nullptr);
    ~TFormDoc();
    void loadCurrentFile(QString &text);
    QString currentFileNmae();
    bool isFileOpen();
    void saveToFile();
    void setFont();
    void textCut();
    void textCopy();
    void textPaste();

    QString m_fileName;
    bool m_isOpened=false;

private:
    Ui::TFormDoc *ui;
};

#endif // TFORMDOC_H
