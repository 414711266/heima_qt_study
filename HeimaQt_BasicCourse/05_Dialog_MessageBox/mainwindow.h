#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"

#define QS8(s) QString::fromLocal8Bit(s)

class mainWindow : public QMainWindow
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private:
    Ui::mainWindowClass ui;
};
