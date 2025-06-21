#include "mainwindow.h"
#include <qdebug.h>
#include <qdialog.h>
#include <qmessagebox.h>
#include <qcolordialog.h>
#include <qfiledialog.h>
mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.actionExit, &QAction::triggered, [=]() {
        this->close();
        });

    connect(ui.actionNew, &QAction::triggered, [=]() {
        // 模态对话框：只能对对话框操作
        // 非模态对话框：不仅仅能对对话框操作

        //QDialog dlg(this);
        //dlg.resize(200, 200); // 尺寸不设置或者设置偏小会弹出警告
        //dlg.exec();
        //qDebug() << QS8("弹出对话框").toUtf8().data();
        //qDebug().noquote() << QS8("弹出对话框");


        // QDialog dlg2(this); //创建到栈上，一闪而过
        //QDialog* dlg2 = new QDialog(this); //创建到堆上，持续保存
        //dlg2->resize(200, 200); // 尺寸不设置或者设置偏小会弹出警告
        //dlg2->show(); //非模态
        //dlg2->setAttribute(Qt::WA_DeleteOnClose); //关闭该窗口时释放内存

        //使用标准对话框
        // QMessageBox::critical(this, QS8("错误"), "critical");
        // QMessageBox::information(this, QS8("信息"), "info");
        // QMessageBox::warning(this, QS8("警告"), QS8("warning"));
        auto btn = QMessageBox::question(this, QS8("问题"), "question", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel); //会有两个按钮，最后一个参数选择默认按钮
        if (btn == QMessageBox::Save) {
            qDebug().noquote() << QS8("点击的是保存");
        }
        else{
            qDebug().noquote() << QS8("点击的是取消");
        }      

        // 颜色对话框
        //QColor color = QColorDialog::getColor(QColor(0, 0, 0));
        //qDebug() << color.red() << color.green() << color.blue();

        // 文件对话框，getOpenFileName 返回QString
        qDebug() << QFileDialog::getOpenFileName(this, QS8("打开文件"),"C:\\Users\\asus\\Desktop", "(*.txt)");
    });
}

mainWindow::~mainWindow()
{}
