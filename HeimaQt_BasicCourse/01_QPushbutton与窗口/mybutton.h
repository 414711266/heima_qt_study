#ifndef __MYBUTTON_H__
#define __MYBUTTON_H__

#include <qwidget.h>
#include <QPushButton>
#include <qdebug.h>
class MyButton : public QPushButton
{
	Q_OBJECT

public:
	// explicit ��ֹ�������ʽ����ת��
	explicit MyButton(QWidget* parent = 0);
	~MyButton();
signals:

public slots:

};






#endif // !1
