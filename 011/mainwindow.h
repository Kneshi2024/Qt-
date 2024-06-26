#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<QTreeWidgetItem>
#include<QLabel>
#include<QPixmap>
#include<QSpinBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum columnNumber{
    FIRST_COLUMN,
    SECOND_COLUMN,
    THIRD_COLUMN
};

enum itemType{
    PICTURE_ITEM=1001,
    TOP_ITEM,
    GROUP_ITEM
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_addFolder_triggered();

    void on_action_addFile_triggered();

    void on_action_deletePoint_triggered();

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_action_ergodicPoint_triggered();

    void on_action_porperWidth_triggered();

    void on_action_properHeight_triggered();

    void on_action_realSize_triggered();

    void on_action_narrow_triggered();

    void on_action_enlarge_triggered();

    void on_action_windowFloat_triggered(bool checked);

    void on_action_windowVisible_triggered(bool checked);

    void on_dockWidget_topLevelChanged(bool topLevel);

    void on_dockWidget_visibilityChanged(bool visible);

private:
    Ui::MainWindow *ui;
    //递归遍历
    void itemNameChange(QTreeWidgetItem *item);
    //显示图片
    void displayPicture(QTreeWidgetItem *item);

    QLabel *labelNoteText;//显示节点内容
    QLabel *labelFileName;//显示文件名称
    QSpinBox *spinRatio;//显示百分比

    QPixmap m_pic;//显示图片
    float m_ratio;//百分比数字



};
#endif // MAINWINDOW_H
