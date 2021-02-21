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

    firstLabel.setAlignment(Qt::AlignRight); 

    secondLabel.setAlignment(Qt::AlignRight);

    //Добавление в Layout  виджетов
    ptopLayout->addWidget(&firstLabel,0, 0, 1, 4);
    ptopLayout->addWidget(&secondLabel,1, 0, 1, 4);
//кнопки
    ptopLayout->addWidget(createButton("CE"),2,4);
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
  // получение кнопки
    QString symbol = ((QPushButton *)sender())->text();
//изменение текста
    if(symbol!="=")firstLabel.setText(firstLabel.text() + symbol);
    secondLabel.setText(secondLabel.text() + symbol);


    if(symbol=="/") secondLabel.clear() ;
    if(symbol=="*") secondLabel.clear();
    if(symbol=="-") secondLabel.clear();
    if(symbol=="+") secondLabel.clear() ;
    if(symbol=="=") secondLabel.clear();
    if(symbol=="CE"){secondLabel.clear();firstLabel.clear();}


};
