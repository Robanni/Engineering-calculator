#include "mainwindow.h"
#include "normal_calculator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle(tr("Something Title"));

    createFormInterior();
}



void MainWindow::createFormInterior()
{
    normal_calculator = new Normal_calculator;
    setCentralWidget(normal_calculator);//у MainWindow есть встроенные паттерны виджетов, это центральный виджет
}
