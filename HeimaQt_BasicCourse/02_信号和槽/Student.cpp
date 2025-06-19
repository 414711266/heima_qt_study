#include "Student.h"

Student::Student(QObject* parent) : QObject(parent)
{
}

void Student::treat()
{
	qDebug().noquote() << QString::fromLocal8Bit("请老师吃饭");
	qDebug() << QString::fromLocal8Bit("再请老师吃饭").toUtf8().data();
}
