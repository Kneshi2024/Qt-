#include "tspinboxdelegate.h"

TSpinBoxDelegate::TSpinBoxDelegate(QObject *parent):QStyledItemDelegate(parent)//构造基类
{

}
//创建编辑器
QWidget *TSpinBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QSpinBox *editor=new QSpinBox(parent);
    editor->setFrame(false);
    editor->setMinimum(0);
    editor->setMaximum(500000);
    return editor;
}

//设置编辑器中的数据
void TSpinBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QSpinBox *spinBox=dynamic_cast<QSpinBox*>(editor);
    int value=index.data(Qt::EditRole).toInt();
    //int value=index.model()->data(index,Qt::EditRole).toInt();
    spinBox->setValue(value);
}

//设置模型数据
void TSpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QSpinBox *spinBox=dynamic_cast<QSpinBox*>(editor);
    int value=spinBox->value();
    model->setData(index,value,Qt::EditRole);
}

//设置编辑器组件大小
void TSpinBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    QSpinBox *spinBox=dynamic_cast<QSpinBox*>(editor);
    spinBox->setGeometry(option.rect);
}
