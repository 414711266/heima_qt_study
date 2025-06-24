#pragma once

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"

class mainWindow : public QWidget
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

    // Êó±êÊÂ¼þ
    void enterEvent(QEvent*) override;
    void leaveEvent(QEvent*) override;
    void mousePressEvent(QMouseEvent* ev) override;
    void mouseReleaseEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent* ev) override;

private:
    Ui::mainWindowClass ui;
};
