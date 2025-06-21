#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
/************************************************************************/
/*  �˵���                                                              */
/************************************************************************/
    QMenuBar* bar = menuBar();

    // ͨ���˵�����Ӳ˵�
    QMenu * fileMenu = bar->addMenu(QS8("�ļ�"));
    QMenu * editMenu = bar->addMenu(QS8("�༭"));

    //��Ӳ˵���
    QAction* newAction = fileMenu->addAction(QS8("�½�"));
    fileMenu->addSeparator(); //��ӷָ���
    QAction* openAction = fileMenu->addAction(QS8("��"));

/************************************************************************/
/*  ������                                                               */
/************************************************************************/
    addToolBar(Qt::LeftToolBarArea, ui.mainToolBar);
    //ֻ�������Ҳ�ͣ��
    ui.mainToolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    //���ø���
    ui.mainToolBar->setFloatable(false);
    //�����ƶ�
    ui.mainToolBar->setMovable(false);
    //��Ӳ˵���
    ui.mainToolBar->addAction(newAction);
    ui.mainToolBar->addSeparator();
    ui.mainToolBar->addAction(openAction);

/************************************************************************/
/*  ״̬��  ֻ����һ��                                                   */
/************************************************************************/
    ui.statusBar->addWidget(new QLabel(QS8("��ʾ��Ϣ"), this));
    ui.statusBar->addPermanentWidget(new QLabel(QS8("�Ҳ���ʾ��Ϣ"), this));

/************************************************************************/
/*  í�Ӳ��� ��������                                                    */
/************************************************************************/
    QDockWidget* dock = new QDockWidget;
    // ���í�Ӳ������²࣬���û��QWidget *centralWidget;����í�Ӳ������������ϲᣬ��Ϊ����Χ�ƺ��Ĳ�����
    addDockWidget(Qt::BottomDockWidgetArea, dock);
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

    //����ͼ��
    newAction->setIcon(QIcon("../ui/open.png"));

}

MainWindow::~MainWindow()
{}
