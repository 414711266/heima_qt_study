#pragma once

#include <QtWidgets/QMainWindow>

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = nullptr);
    ~mainwindow();

protected:
    // ����������ui
    void setUpUI();

private:

};
