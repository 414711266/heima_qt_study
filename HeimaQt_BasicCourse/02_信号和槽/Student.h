#pragma once
#include <qobject.h>
#include <qdebug.h>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject* parent = 0);

    //自定义槽函数，返回值void，需要声明与实现，可重载
    void treat();

signals:

public slots:
    
};

