#ifndef TMYLABEL_H
#define TMYLABEL_H

#include <QLabel>
#include <QObject>

class TMyLabel : public QLabel
{
    Q_OBJECT
public:
    TMyLabel(QWidget *parent=nullptr);//将自定义类加入到树中
signals:
    void doubleClicked();

    // QWidget interface
protected:
    virtual void mouseDoubleClickEvent(QMouseEvent *event) override;

    // QObject interface
public:
    virtual bool event(QEvent *event) override;
};





#endif // TMYLABEL_H
