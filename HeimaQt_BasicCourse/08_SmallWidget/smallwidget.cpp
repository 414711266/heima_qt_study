#include "smallwidget.h"

SmallWidget::SmallWidget(QWidget* parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    // 计数器带着水平条
    void(QSpinBox:: * spinboxSign)(int) = &QSpinBox::valueChanged;
    connect(ui.spinBox, spinboxSign, ui.horizontalSlider, &QSlider::setValue);

    //水平条带着计数器
    connect(ui.horizontalSlider, &QSlider::valueChanged, ui.spinBox, &QSpinBox::setValue);

}

SmallWidget::~SmallWidget()
{}
