#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    zt = new Teacher(this);
    st = new Student(this);

    //连接老师和学生
    connect(zt, &Teacher::hungry, st, &Student::treat);

    //触发老师饿了的信号
    emit zt->hungry();

    ui.setupUi(this);
}

MyWidget::~MyWidget()
{}
