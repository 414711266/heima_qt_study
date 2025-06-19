#include "mybutton.h"

MyButton::MyButton(QWidget* parent) : QPushButton(parent)
{

}

MyButton::~MyButton()
{
	qDebug().noquote() << QString::fromLocal8Bit("MyButtonµÄÎö¹¹");
}
