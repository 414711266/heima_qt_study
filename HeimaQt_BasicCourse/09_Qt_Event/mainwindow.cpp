#include "mainwindow.h"
#include "qdebug.h"
#include "QMouseEvent"
mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
{
    // this->setMouseTracking(true);  ������갴��Ҳ�ܲ��������ƶ���Ĭ��ΪFalse
    ui.setupUi(this);
}

mainWindow::~mainWindow()
{}

void mainWindow::enterEvent(QEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("�������¼�����");
}

void mainWindow::leaveEvent(QEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("����뿪�¼�����");
}

void mainWindow::mousePressEvent(QMouseEvent* ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        qDebug().noquote() << QString::fromLocal8Bit("��갴���¼�������x = %1 ,y = %2").arg(ev->x()).arg(ev->y());
    }
    
}

void mainWindow::mouseReleaseEvent(QMouseEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("����ͷ��¼�����");
}

void mainWindow::mouseMoveEvent(QMouseEvent* ev)
{
    //����״̬ ��Ҫ��buttons  ��������� �����ж� (buttons()�൱�ڼ�����������������)
    if (ev->buttons() & Qt::LeftButton)
    {
        qDebug().noquote() << QString::fromLocal8Bit("����ƶ��¼�����");
    }
    
}
