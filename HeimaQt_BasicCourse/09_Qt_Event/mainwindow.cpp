#include "mainwindow.h"
#include "qdebug.h"
#include "QMouseEvent"
#include "QTimerEvent"

mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
{
    // this->setMouseTracking(true);  ������갴��Ҳ�ܲ��������ƶ���Ĭ��ΪFalse

    id1 = startTimer(1000); //һ���ִ���һ��
    id2 = startTimer(2000); //һ���ִ���һ��

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

void mainWindow::timerEvent(QTimerEvent *e)
{
    if (e->timerId() == id1)
    {
        static int num = 0;
        ui.label->setText(QString::number(num++));
    }
    if (e->timerId() == id2)
    {
        static int num2 = 0;
        ui.label_2->setText(QString::number(num2++));
    }


}
