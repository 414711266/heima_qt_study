#ifndef __MYBUTTON_H__
#define __MYBUTTON_H__

#include <qwidget.h>
#include <QPushButton>
#include <qdebug.h>
class MyButton : public QPushButton
{
	Q_OBJECT

public:
	// explicit 防止构造的隐式类型转换
	explicit MyButton(QWidget* parent = 0);
	~MyButton();
signals:

public slots:

};






#endif // !1
