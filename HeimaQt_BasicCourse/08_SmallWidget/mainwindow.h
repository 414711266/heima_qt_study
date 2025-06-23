#pragma once

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"

class mainWindow : public QWidget
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

private:
    Ui::mainWindowClass ui;
};
