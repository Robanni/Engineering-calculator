#include "normal_calculator.h"

Normal_calculator::Normal_calculator(QWidget *parent) : QWidget(parent)
{
    QPushButton *b = new QPushButton("hello");

    QVBoxLayout *layout = new QVBoxLayout;

    layout->addWidget(b);

    setLayout(layout);

}
