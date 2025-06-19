#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    zt = new Teacher(this);
    st = new Student(this);

    //������ʦ��ѧ��
    connect(zt, &Teacher::hungry, st, &Student::treat);

    //������ʦ���˵��ź�
    emit zt->hungry();

    ui.setupUi(this);
}

MyWidget::~MyWidget()
{}
