#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    zt = new Teacher(this);
    st = new Student(this);

    // ������ʦ��ѧ��
    //connect(zt, &Teacher::hungry, st, &Student::treat);
    //������ʦ���˵��ź�
    //emit zt->hungry();


    //void(Teacher:: * teacherSignal)(QString) = &Teacher::hungry;
    //void(Student:: * studentSlot)(QString) = &Student::treat;
    //// �вε� �ź��������
    //connect(zt, teacherSignal, st, studentSlot);
    //emit zt->hungry(QString::fromLocal8Bit("��������"));

    QPushButton* btn = new QPushButton(QString::fromLocal8Bit("�¿�"), this);
    void(Teacher:: * noTeacherSignal)(void) = &Teacher::hungry;
    void(Student:: * noStudentSlot)(void) = &Student::treat;
    connect(btn, &QPushButton::clicked, zt, noTeacherSignal);
    connect(zt, noTeacherSignal, st, noStudentSlot);

    // �Ͽ��źźͲ�
    // disconnect(zt, noTeacherSignal, st, noStudentSlot);
 
    // һ���ź����Ӷ���ۺ�����ͬ������ź�Ҳ������һ���ۺ���
    connect(btn, &QPushButton::clicked, this, &QWidget::close);
    // �ź���۲������ͱ���һһ��Ӧ���������ض�Ӧ���źŲ����� �� �ۺ�������


    // lambda���ʽ
    //mutable �ı�ֵ���ݵ��ڲ�����������ֵ []()->type {};
    QPushButton* btn2 = new QPushButton("aaaaa", this);
    btn2->move(200, 0);
    connect(btn2, &QPushButton::clicked, [=]() {
        btn2->setText("bbbbb");
        });



    ui.setupUi(this);
}

MyWidget::~MyWidget()
{}
