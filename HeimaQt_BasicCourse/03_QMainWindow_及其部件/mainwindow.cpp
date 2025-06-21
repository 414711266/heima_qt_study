#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
/************************************************************************/
/*  菜单栏                                                              */
/************************************************************************/
    QMenuBar* bar = menuBar();

    // 通过菜单栏添加菜单
    QMenu * fileMenu = bar->addMenu(QS8("文件"));
    QMenu * editMenu = bar->addMenu(QS8("编辑"));

    //添加菜单项
    QAction* newAction = fileMenu->addAction(QS8("新建"));
    fileMenu->addSeparator(); //添加分割线
    QAction* openAction = fileMenu->addAction(QS8("打开"));

/************************************************************************/
/*  工具栏                                                               */
/************************************************************************/
    addToolBar(Qt::LeftToolBarArea, ui.mainToolBar);
    //只允许左右侧停靠
    ui.mainToolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
    //设置浮动
    ui.mainToolBar->setFloatable(false);
    //设置移动
    ui.mainToolBar->setMovable(false);
    //添加菜单项
    ui.mainToolBar->addAction(newAction);
    ui.mainToolBar->addSeparator();
    ui.mainToolBar->addAction(openAction);

/************************************************************************/
/*  状态栏  只能有一个                                                   */
/************************************************************************/
    ui.statusBar->addWidget(new QLabel(QS8("提示信息"), this));
    ui.statusBar->addPermanentWidget(new QLabel(QS8("右侧提示信息"), this));

/************************************************************************/
/*  铆接部件 浮动窗口                                                    */
/************************************************************************/
    QDockWidget* dock = new QDockWidget;
    // 添加铆接部件到下侧，如果没有QWidget *centralWidget;，则铆接部件看起来在上册，因为其是围绕核心部件来
    addDockWidget(Qt::BottomDockWidgetArea, dock);
    dock->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

    //设置图标
    newAction->setIcon(QIcon("../ui/open.png"));

}

MainWindow::~MainWindow()
{}
