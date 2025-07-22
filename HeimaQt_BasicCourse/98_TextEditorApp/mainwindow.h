#pragma once

#include <QtWidgets/QMainWindow>

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

protected:
    // 设置主界面ui
    void setUpUI();

private:

};
