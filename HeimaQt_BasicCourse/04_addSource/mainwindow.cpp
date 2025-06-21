#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    ui.actionnew->setIcon(QIcon(":/ui/ui/open.png"));
    ui.actionopen->setIcon(QIcon(":/ui/ui/exit.png"));
}

mainWindow::~mainWindow()
{}
