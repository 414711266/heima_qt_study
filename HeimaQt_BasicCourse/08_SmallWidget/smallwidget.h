#pragma once
#include <qwidget.h>
#include "ui_smallwidget.h"

class SmallWidget :  public QWidget
{
    Q_OBJECT

public:
    SmallWidget(QWidget* parent = nullptr);
    ~SmallWidget();

private:
    Ui::Form ui;
};
