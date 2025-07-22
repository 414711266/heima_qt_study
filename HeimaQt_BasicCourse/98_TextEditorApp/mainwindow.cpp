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

    // 整体水平布局
    QVBoxLayout* mainVLayout = new QVBoxLayout(centerWidget); //左中右
    mainVLayout->setContentsMargins(0, 0, 0, 0); //控件与边框间距
    mainVLayout->setSpacing(0); //控件间距

    // ribbon 栏
    QWidget* ribbonWidget = new QWidget(centerWidget);
    ribbonWidget->setStyleSheet("background-color:#f0f0f0;");
    ribbonWidget->setFixedHeight(90);
    mainVLayout->addWidget(ribbonWidget);

    //底部垂直布局
    QHBoxLayout* bottomHLayout = new QHBoxLayout();
    bottomHLayout->setContentsMargins(0, 0, 0, 0);
    bottomHLayout->setSpacing(0);
    mainVLayout->addLayout(bottomHLayout, 1);

    // 左侧编辑区
    QWidget* editorWidget = new QWidget(centerWidget);
    editorWidget->setStyleSheet("background-color:#ffffff;");
    bottomHLayout->addWidget(editorWidget, 4);

    // 右侧侧边栏
    QWidget* sidebarWidget = new QWidget(centerWidget);
    sidebarWidget->setStyleSheet("background-color:#f5f5f5;");
    sidebarWidget->setMinimumWidth(180);    
    bottomHLayout->addWidget(sidebarWidget, 1);   
}
