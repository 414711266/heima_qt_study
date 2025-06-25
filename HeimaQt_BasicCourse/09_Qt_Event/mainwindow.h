#pragma once

#include <QtWidgets/QWidget>
#include "ui_mainwindow.h"

class mainWindow : public QWidget
{
    Q_OBJECT

public:
    mainWindow(QWidget *parent = nullptr);
    ~mainWindow();

    // ����¼�
    void enterEvent(QEvent*) override;
    void leaveEvent(QEvent*) override;
    void mousePressEvent(QMouseEvent* ev) override;
    void mouseReleaseEvent(QMouseEvent*) override;
    void mouseMoveEvent(QMouseEvent* ev) override;

    // ��ʱ���¼�
    void timerEvent(QTimerEvent *e) override;
private:
    Ui::mainWindowClass ui;

    int id1;
    int id2;
};
