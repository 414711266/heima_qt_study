#include "Student.h"

Student::Student(QObject* parent) : QObject(parent)
{
}

void Student::treat()
{
	qDebug().noquote() << QString::fromLocal8Bit("����ʦ�Է�");
	qDebug() << QString::fromLocal8Bit("������ʦ�Է�").toUtf8().data();
}

void Student::treat(QString foodName)
{
	QString str = QString::fromLocal8Bit("����ʦ�Է�����ʦҪ��") + foodName;
	qDebug() << str.toUtf8().data();
}
