#pragma once

#include <QtWidgets/QWidget>
#include "ui_mywidget.h"
#include <qpushbutton.h>
#include <qdebug.h>
#include "mybutton.h"

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    Ui::MyWidgetClass ui;
};
