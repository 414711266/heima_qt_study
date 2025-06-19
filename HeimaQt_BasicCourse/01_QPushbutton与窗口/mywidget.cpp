#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    QPushButton* btn = new QPushButton;
    btn->setParent(this);
    btn->setText(QString::fromLocal8Bit("�ɹ�"));
    //qDebug() << QString::fromLocal8Bit("�ɹ�").toUtf8().data();
    //qDebug().noquote() << QString::fromLocal8Bit("������");
    qDebug("123");


    QPushButton* btn2 = new QPushButton(QString::fromLocal8Bit("�ڶ���ť"), this);
    btn2->move(100, 100);
    btn2->resize(50, 50);

    this->setWindowTitle(QString::fromLocal8Bit("QT��һ������"));

    this->setFixedSize(600, 400);

    MyButton* myBtn = new MyButton;
    myBtn->setText(QString::fromLocal8Bit("�ҵİ�ť"));
    myBtn->move(200, 200);
    myBtn->setParent(this);

    // �źŷ����ߣ����͵��źţ��źŽ����ߣ�����Ĳۺ���
    //connect(myBtn, &MyButton::clicked, this, &MyWidget::close);
    connect(myBtn, &QPushButton::clicked, this, &QWidget::close);


}

MyWidget::~MyWidget()
{
    qDebug().noquote() << QString::fromLocal8Bit("MyWidget������");


}
