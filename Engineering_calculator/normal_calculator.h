#ifndef NORMAL_CALCULATOR_H
#define NORMAL_CALCULATOR_H

#include <QWidget>
#include <QPushButton>
#include <QBoxLayout>
#include <QLabel>

class Normal_calculator : public QWidget
{
    Q_OBJECT
public:
    explicit Normal_calculator(QWidget *parent = nullptr);

public:
    QList <QPushButton *> buttons;
    QPushButton* createButton(const QString& str);

public:
    QLabel firstLabel;
    QLabel secondLabel;

public slots:
    void slotButtonClicked();

};

#endif // NORMAL_CALCULATOR_H
