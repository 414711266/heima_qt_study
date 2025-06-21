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
        // ģ̬�Ի���ֻ�ܶԶԻ������
        // ��ģ̬�Ի��򣺲������ܶԶԻ������

        //QDialog dlg(this);
        //dlg.resize(200, 200); // �ߴ粻���û�������ƫС�ᵯ������
        //dlg.exec();
        //qDebug() << QS8("�����Ի���").toUtf8().data();
        //qDebug().noquote() << QS8("�����Ի���");


        // QDialog dlg2(this); //������ջ�ϣ�һ������
        //QDialog* dlg2 = new QDialog(this); //���������ϣ���������
        //dlg2->resize(200, 200); // �ߴ粻���û�������ƫС�ᵯ������
        //dlg2->show(); //��ģ̬
        //dlg2->setAttribute(Qt::WA_DeleteOnClose); //�رոô���ʱ�ͷ��ڴ�

        //ʹ�ñ�׼�Ի���
        // QMessageBox::critical(this, QS8("����"), "critical");
        // QMessageBox::information(this, QS8("��Ϣ"), "info");
        // QMessageBox::warning(this, QS8("����"), QS8("warning"));
        auto btn = QMessageBox::question(this, QS8("����"), "question", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Cancel); //����������ť�����һ������ѡ��Ĭ�ϰ�ť
        if (btn == QMessageBox::Save) {
            qDebug().noquote() << QS8("������Ǳ���");
        }
        else{
            qDebug().noquote() << QS8("�������ȡ��");
        }      

        // ��ɫ�Ի���
        //QColor color = QColorDialog::getColor(QColor(0, 0, 0));
        //qDebug() << color.red() << color.green() << color.blue();

        // �ļ��Ի���getOpenFileName ����QString
        qDebug() << QFileDialog::getOpenFileName(this, QS8("���ļ�"),"C:\\Users\\asus\\Desktop", "(*.txt)");
    });
}

mainWindow::~mainWindow()
{}
