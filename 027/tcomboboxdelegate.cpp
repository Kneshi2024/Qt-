#include "tcomboboxdelegate.h"
#include<QComboBox>

TComboBoxDelegate::TComboBoxDelegate(QObject *parent) {}

void TComboBoxDelegate::setItems(QStringList items, bool editable)
{
    m_itemList=items;
    m_isEditable=editable;
}
//创建编辑组件
QWidget *TComboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *comboBox=new QComboBox(parent);
    comboBox->setEditable(m_isEditable);
    for(auto &item:m_itemList){
        comboBox->addItem(item);
    }
    return comboBox;
}

//设置编辑组件的数据
void TComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QString str=index.model()->data(index,Qt::EditRole).toString();
    QComboBox *comboBox=static_cast<QComboBox*>(editor);
    comboBox->setCurrentText(str);
}

//将数据设置到模型中去
void TComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *comboBox=static_cast<QComboBox*>(editor);
    QString str=comboBox->currentText();
    model->setData(index,str,Qt::EditRole);
}

//更新编辑组件的大小
void TComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    editor->setGeometry(option.rect);
}
