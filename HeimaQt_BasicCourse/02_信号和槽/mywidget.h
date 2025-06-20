#pragma once

#include <QtWidgets/QWidget>
#include "ui_mywidget.h"
#include "Teacher.h"
#include "Student.h"
#include <qpushbutton.h>

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

    Teacher* zt;
    Student* st;


private:
    Ui::MyWidgetClass ui;
};
