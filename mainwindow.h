#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Normal_calculator;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

public:
    Normal_calculator *normal_calculator;
private:
    void createFormInterior();
};
#endif // MAINWINDOW_H
