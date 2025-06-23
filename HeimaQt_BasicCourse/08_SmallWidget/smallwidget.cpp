#include "smallwidget.h"

SmallWidget::SmallWidget(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    // ����������ˮƽ��
    void(QSpinBox:: * spinboxSign)(int) = &QSpinBox::valueChanged;
    connect(ui.spinBox, spinboxSign, ui.horizontalSlider, &QSlider::setValue);

    //ˮƽ�����ż�����
    connect(ui.horizontalSlider, &QSlider::valueChanged, ui.spinBox, &QSpinBox::setValue);

}

SmallWidget::~SmallWidget()
{}
