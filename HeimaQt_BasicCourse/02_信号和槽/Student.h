#pragma once
#include <qobject.h>
#include <qdebug.h>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject* parent = 0);

    //�Զ���ۺ���������ֵvoid����Ҫ������ʵ�֣�������
    void treat();

signals:

public slots:
    
};

