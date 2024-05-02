#include "Sinus.h"
#include <cmath>
#include <QShortcut>
#include <iostream>

float A = 0.5f;

Sinus::Sinus(QWidget *parent) : QWidget(parent) 
{
  ui.setupUi(this);
  QShortcut *shortcut = new QShortcut(QKeySequence(Qt::ALT + Qt::Key_I), this);
  connect(shortcut, &QShortcut::activated, this, &Sinus::setBars);

}

void Sinus::setBars() {
  for (int x= 0; x <= 9; x++) {
    setProgressBarValue(x + 1, A * sin(x) * 100);
  }
}

void Sinus::setProgressBarValue(int index, int value) {
    QList<QProgressBar*> progressBars = { ui.PB1, ui.PB2, ui.PB3, ui.PB4, ui.PB5,
                                          ui.PB6, ui.PB7, ui.PB8, ui.PB9, ui.PB10 };
    if (index >= 1 && index <= progressBars.size()) {
        progressBars[index - 1]->setValue(value);
    }
}



void Sinus::setAmplitude() {
  A = (ui.Amplitude->value())/100.0f;
  std::cerr << A << std::endl;
  setBars();
}