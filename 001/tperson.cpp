#include "tperson.h"
#include<QDebug>

Tperson::Tperson(QString name,QObject *parent)
    : QObject{parent},m_name(name)
{}

Tperson::~Tperson()
{
    qDebug()<<"析构函数";
}

int Tperson::getAge()
{
    return m_age;
}

void Tperson::setAge(int ageValue)
{
    if(m_age!=ageValue){
        m_age=ageValue;
        emit changeAge(m_age);
    }
}

void Tperson::incAge()
{
    ++m_age;
    emit changeAge(m_age);
}
