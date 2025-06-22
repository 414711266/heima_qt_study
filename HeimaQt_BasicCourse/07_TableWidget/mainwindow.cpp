#include "mainwindow.h"
#include "qmessagebox.h"
mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    QStringList list;
    list << QS8("姓名") << QS8("性别") << QS8("年龄");
    ui.tableWidget->setColumnCount(list.size());
    ui.tableWidget->setHorizontalHeaderLabels(list);

    ui.tableWidget->setRowCount(5);

    ui.tableWidget->setItem(0, 0, new QTableWidgetItem(QS8("亚瑟")));

    //准备数据
    QStringList nameList, sexList;
    nameList << QS8("亚瑟") << QS8("妲己") << QS8("李白") << QS8("鲁班") << QS8("裴擒虎");
    sexList << QS8("男") << QS8("女") << QS8("男") << QS8("男") << QS8("男");

    for (int i = 0; i < 5; i++)
    {
        int col = 0;
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(nameList[i]));
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(sexList[i]));
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(i+18)));
    }

    //点击按钮进行添加与删除
    connect(ui.addBtn, &QPushButton::clicked, [=]() {
        //先判断有无赵云,findItems会返回一个列表
        bool isEmpty = ui.tableWidget->findItems(QS8("赵云"), Qt::MatchExactly).empty();
        if (isEmpty){
            ui.tableWidget->insertRow(0);
            ui.tableWidget->setItem(0, 0, new QTableWidgetItem(QS8("赵云")));
            ui.tableWidget->setItem(0, 1, new QTableWidgetItem(QS8("男")));
            ui.tableWidget->setItem(0, 2, new QTableWidgetItem(QString::number(20)));
        }
        else
        {
            QMessageBox::warning(this, QS8("警告!"), QS8("已经有赵云了！"));
        }
        });

    connect(ui.delBtn, &QPushButton::clicked, [=]() {
        QList<QTableWidgetItem*> list = ui.tableWidget->findItems(QS8("赵云"), Qt::MatchExactly);
        if (list.empty()) {
            QMessageBox::warning(this, QS8("警告!"), QS8("未找到赵云！"));
        }
        else
        {
            int row = list.first()->row();
            ui.tableWidget->removeRow(row);
        }
        });
}

mainWindow::~mainWindow()
{}
