#include "mainwindow.h"
#include "qmessagebox.h"
mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    QStringList list;
    list << QS8("����") << QS8("�Ա�") << QS8("����");
    ui.tableWidget->setColumnCount(list.size());
    ui.tableWidget->setHorizontalHeaderLabels(list);

    ui.tableWidget->setRowCount(5);

    ui.tableWidget->setItem(0, 0, new QTableWidgetItem(QS8("��ɪ")));

    //׼������
    QStringList nameList, sexList;
    nameList << QS8("��ɪ") << QS8("槼�") << QS8("���") << QS8("³��") << QS8("���ܻ�");
    sexList << QS8("��") << QS8("Ů") << QS8("��") << QS8("��") << QS8("��");

    for (int i = 0; i < 5; i++)
    {
        int col = 0;
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(nameList[i]));
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(sexList[i]));
        ui.tableWidget->setItem(i, col++, new QTableWidgetItem(QString::number(i+18)));
    }

    //�����ť���������ɾ��
    connect(ui.addBtn, &QPushButton::clicked, [=]() {
        //���ж���������,findItems�᷵��һ���б�
        bool isEmpty = ui.tableWidget->findItems(QS8("����"), Qt::MatchExactly).empty();
        if (isEmpty){
            ui.tableWidget->insertRow(0);
            ui.tableWidget->setItem(0, 0, new QTableWidgetItem(QS8("����")));
            ui.tableWidget->setItem(0, 1, new QTableWidgetItem(QS8("��")));
            ui.tableWidget->setItem(0, 2, new QTableWidgetItem(QString::number(20)));
        }
        else
        {
            QMessageBox::warning(this, QS8("����!"), QS8("�Ѿ��������ˣ�"));
        }
        });

    connect(ui.delBtn, &QPushButton::clicked, [=]() {
        QList<QTableWidgetItem*> list = ui.tableWidget->findItems(QS8("����"), Qt::MatchExactly);
        if (list.empty()) {
            QMessageBox::warning(this, QS8("����!"), QS8("δ�ҵ����ƣ�"));
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
