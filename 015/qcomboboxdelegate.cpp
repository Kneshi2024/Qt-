#include "qcomboboxdelegate.h"

QComboBoxDelegate::QComboBoxDelegate(QObject *parent)
    : QStyledItemDelegate{parent}
{}

void QComboBoxDelegate::setItem(QStringList itemList, bool editorable)
{
    m_itemList=itemList;
    m_isEditorable=editorable;
}
QWidget *QComboBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option);
    Q_UNUSED(index);
    QComboBox *comboBox=new QComboBox(parent);
    comboBox->setEditable(m_isEditorable);
    for(const auto &item:m_itemList){
        comboBox->addItem(item);
    }
    return comboBox;
}

void QComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *comboBox=dynamic_cast<QComboBox*>(editor);
    QString str=comboBox->model()->data(index,Qt::EditRole).toString();
    comboBox->setCurrentText(str);
}

void QComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QComboBox *comboBox=dynamic_cast<QComboBox*>(editor);
    QString str=comboBox->currentText();
    model->setData(index,str,Qt::EditRole);
}

void QComboBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(index);
    QComboBox *comboBox=dynamic_cast<QComboBox*>(editor);
    comboBox->setGeometry(option.rect);
}
