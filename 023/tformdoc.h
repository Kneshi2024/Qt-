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

private slots:
    void on_action_open_triggered();

    void on_action_font_triggered();
signals:
    void titleChanged(QString text);

private:
    Ui::TFormDoc *ui;
};

#endif // TFORMDOC_H
