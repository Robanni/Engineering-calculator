#include "normal_calculator.h"

Normal_calculator::Normal_calculator(QWidget *parent) : QWidget(parent)
{   
    QChar aButtons[4][4] = {
        {'7','8','9','/'},
        {'4','5','6','*'},
        {'1','2','3','-'},
        {'0','.','=','+'},
    };
    QGridLayout* ptopLayout = new QGridLayout;


    //Добавление в Layout  виджетов
    ptopLayout->addWidget(&label);
    for(int i =0; i < 4; i++){
        for(int j = 0; j < 4; ++j){
            ptopLayout->addWidget(createButton(aButtons[i][j]),i+2,j);
        }
    }


    setLayout(ptopLayout);
}


QPushButton* Normal_calculator::createButton(const QString &str){
    QPushButton* pcmd = new QPushButton(str);
    pcmd->setMinimumSize(40,40);
    connect(pcmd,SIGNAL(clicked()),SLOT(slotButtonClicked()));
    return pcmd;
}

void Normal_calculator::slotButtonClicked(){

};
