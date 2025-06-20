#pragma once
#include <qobject.h>

class Teacher : public QObject
{
	Q_OBJECT
public:
	explicit Teacher(QObject* parent = 0);

signals:
	//自定义信号 返回类型为void，信号只需要声明不需要实现，信号可以重载
	void hungry();
	void hungry(QString foodName);

public slots:

};

