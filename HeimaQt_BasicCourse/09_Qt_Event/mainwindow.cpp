#include "mainwindow.h"
#include "qdebug.h"
#include "QMouseEvent"
#include "QTimerEvent"

mainWindow::mainWindow(QWidget *parent)
    : QWidget(parent)
{
    // this->setMouseTracking(true);  无需鼠标按下也能捕获到鼠标的移动，默认为False

    id1 = startTimer(1000); //一秒种触发一次
    id2 = startTimer(2000); //一秒种触发一次

    ui.setupUi(this);
}

mainWindow::~mainWindow()
{}

void mainWindow::enterEvent(QEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("鼠标进入事件触发");
}

void mainWindow::leaveEvent(QEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("鼠标离开事件触发");
}

void mainWindow::mousePressEvent(QMouseEvent* ev)
{
    if (ev->button() == Qt::LeftButton)
    {
        qDebug().noquote() << QString::fromLocal8Bit("鼠标按下事件触发，x = %1 ,y = %2").arg(ev->x()).arg(ev->y());
    }
    
}

void mainWindow::mouseReleaseEvent(QMouseEvent*)
{
    qDebug().noquote() << QString::fromLocal8Bit("鼠标释放事件触发");
}

void mainWindow::mouseMoveEvent(QMouseEvent* ev)
{
    //持续状态 需要用buttons  用与操作符 进行判断 (buttons()相当于集合了左右中三个键)
    if (ev->buttons() & Qt::LeftButton)
    {
        qDebug().noquote() << QString::fromLocal8Bit("鼠标移动事件触发");
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
