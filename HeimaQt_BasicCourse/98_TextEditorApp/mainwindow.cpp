#include "mainwindow.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
mainwindow::mainwindow(QWidget *parent)
    : QMainWindow(parent)
{
    setUpUI();
}

mainwindow::~mainwindow()
{}

void mainwindow::setUpUI()
{
    this->resize(800, 600);

    QWidget* centerWidget = new QWidget(this);
    this->setCentralWidget(centerWidget);

    // ����ˮƽ����
    QVBoxLayout* mainVLayout = new QVBoxLayout(centerWidget); //������
    mainVLayout->setContentsMargins(0, 0, 0, 0); //�ؼ���߿���
    mainVLayout->setSpacing(0); //�ؼ����

    // ribbon ��
    QWidget* ribbonWidget = new QWidget(centerWidget);
    ribbonWidget->setStyleSheet("background-color:#f0f0f0;");
    ribbonWidget->setFixedHeight(90);
    mainVLayout->addWidget(ribbonWidget);

    //�ײ���ֱ����
    QHBoxLayout* bottomHLayout = new QHBoxLayout();
    bottomHLayout->setContentsMargins(0, 0, 0, 0);
    bottomHLayout->setSpacing(0);
    mainVLayout->addLayout(bottomHLayout, 1);

    // ���༭��
    QWidget* editorWidget = new QWidget(centerWidget);
    editorWidget->setStyleSheet("background-color:#ffffff;");
    bottomHLayout->addWidget(editorWidget, 4);

    // �Ҳ�����
    QWidget* sidebarWidget = new QWidget(centerWidget);
    sidebarWidget->setStyleSheet("background-color:#f5f5f5;");
    sidebarWidget->setMinimumWidth(180);    
    bottomHLayout->addWidget(sidebarWidget, 1);   
}
