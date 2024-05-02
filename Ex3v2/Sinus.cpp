#include "Sinus.h"
#include <cmath>

Sinus::Sinus(QWidget *parent) : QWidget(parent) 
{
  ui.setupUi(this);

}

void Sinus::setBars() {
  for (int i = 1; i <= 10; i++) {
    setProgressBarValue(i, 50 + 50 * sin(i));
  }
}


void Sinus::setProgressBarValue(int index, int value) {
    switch(index) {
        case 1:
            ui.PB1->setValue(value);
            break;
        case 2:
            ui.PB2->setValue(value);
            break;
        case 3:
            ui.PB3->setValue(value);
            break;
        case 4:
            ui.PB4->setValue(value);
            break;
        case 5:
            ui.PB5->setValue(value);
            break;
        case 6:
            ui.PB6->setValue(value);
            break;
        case 7:
            ui.PB7->setValue(value);
            break; 
        case 8:
            ui.PB8->setValue(value);
            break;
        case 9:
            ui.PB9->setValue(value);
            break;
        case 10:
            ui.PB10->setValue(value);
            break;      
        default:
            break;
    }
}