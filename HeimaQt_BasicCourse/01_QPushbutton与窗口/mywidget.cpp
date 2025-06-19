#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    QPushButton* btn = new QPushButton;
    btn->setParent(this);
    btn->setText(QString::fromLocal8Bit("成功"));
    //qDebug() << QString::fromLocal8Bit("成功").toUtf8().data();
    //qDebug().noquote() << QString::fromLocal8Bit("中文呢");
    qDebug("123");


    QPushButton* btn2 = new QPushButton(QString::fromLocal8Bit("第二按钮"), this);
    btn2->move(100, 100);
    btn2->resize(50, 50);

    this->setWindowTitle(QString::fromLocal8Bit("QT第一个窗口"));

    this->setFixedSize(600, 400);

    MyButton* myBtn = new MyButton;
    myBtn->setText(QString::fromLocal8Bit("我的按钮"));
    myBtn->move(200, 200);
    myBtn->setParent(this);

    // 信号发送者，发送的信号，信号接收者，处理的槽函数
    //connect(myBtn, &MyButton::clicked, this, &MyWidget::close);
    connect(myBtn, &QPushButton::clicked, this, &QWidget::close);


}

MyWidget::~MyWidget()
{
    qDebug().noquote() << QString::fromLocal8Bit("MyWidget的析构");


}
