#pragma once
#include <qobject.h>

class Teacher : public QObject
{
	Q_OBJECT
public:
	explicit Teacher(QObject* parent = 0);

signals:
	//�Զ����ź� ��������Ϊvoid���ź�ֻ��Ҫ��������Ҫʵ�֣��źſ�������
	void hungry();
	void hungry(QString foodName);

public slots:

};

