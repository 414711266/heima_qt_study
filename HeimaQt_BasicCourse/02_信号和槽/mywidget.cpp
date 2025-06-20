#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    zt = new Teacher(this);
    st = new Student(this);

    // 连接老师和学生
    //connect(zt, &Teacher::hungry, st, &Student::treat);
    //触发老师饿了的信号
    //emit zt->hungry();


    //void(Teacher:: * teacherSignal)(QString) = &Teacher::hungry;
    //void(Student:: * studentSlot)(QString) = &Student::treat;
    //// 有参的 信号与槽连接
    //connect(zt, teacherSignal, st, studentSlot);
    //emit zt->hungry(QString::fromLocal8Bit("宫保鸡丁"));

    QPushButton* btn = new QPushButton(QString::fromLocal8Bit("下课"), this);
    void(Teacher:: * noTeacherSignal)(void) = &Teacher::hungry;
    void(Student:: * noStudentSlot)(void) = &Student::treat;
    connect(btn, &QPushButton::clicked, zt, noTeacherSignal);
    connect(zt, noTeacherSignal, st, noStudentSlot);

    // 断开信号和槽
    // disconnect(zt, noTeacherSignal, st, noStudentSlot);
 
    // 一个信号连接多个槽函数，同理，多个信号也能连接一个槽函数
    connect(btn, &QPushButton::clicked, this, &QWidget::close);
    // 信号与槽参数类型必须一一对应，个数不必对应，信号参数量 ≥ 槽函数即可


    // lambda表达式
    //mutable 改变值传递的内部变量、返回值 []()->type {};
    QPushButton* btn2 = new QPushButton("aaaaa", this);
    btn2->move(200, 0);
    connect(btn2, &QPushButton::clicked, [=]() {
        btn2->setText("bbbbb");
        });



    ui.setupUi(this);
}

MyWidget::~MyWidget()
{}
