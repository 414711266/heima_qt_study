#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <qlabel.h>
#include <QDockWidget>

#define QS8(s) QString::fromLocal8Bit(s)

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindowClass ui;
};
