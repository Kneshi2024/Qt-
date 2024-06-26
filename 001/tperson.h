#ifndef TPERSON_H
#define TPERSON_H

#include <QObject>

class Tperson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","shen")
    Q_CLASSINFO("company","GOOD")
    Q_CLASSINFO("version","2.0.0")

    //添加property
    Q_PROPERTY(int age READ getAge WRITE setAge NOTIFY changeAge FINAL)
    Q_PROPERTY(QString name MEMBER m_name)
    Q_PROPERTY(int score MEMBER m_score)

public:
    explicit Tperson(QString name, QObject *parent = nullptr);

    ~Tperson();

    //读取age函数
    int getAge();

    //设置年龄函数
    void setAge(int ageValue);

    //增加年龄函数
    void incAge();

private:
    //设置成员函数
    //QString sex;
    QString m_name;
    int m_age=15;
    int m_score=60;

signals:
    void changeAge(int ageValue);
};

#endif // TPERSON_H
