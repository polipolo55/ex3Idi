#include "Sinus.h"
#include <cmath>
#include <QShortcut>
#include <iostream>


Sinus::Sinus(QWidget *parent) : QWidget(parent) 
{
  ui.setupUi(this);
  QShortcut *shortcut = new QShortcut(QKeySequence(Qt::ALT + Qt::Key_I), this);
  connect(shortcut, &QShortcut::activated, this, &Sinus::start);
  QShortcut *shortcut2 = new QShortcut(QKeySequence(Qt::ALT + Qt::Key_T), this);
  connect(shortcut2, &QShortcut::activated, this, &Sinus::startTimer);
  QShortcut *shortcut3 = new QShortcut(QKeySequence(Qt::ALT + Qt::Key_S), this);
  connect(shortcut3, &QShortcut::activated, this, &Sinus::close);

  timer = new QTimer(this);
  timer->setInterval(100);  

    connect(timer, &QTimer::timeout, this, [&]() {
      i++;
      setBars();
    });

}
void Sinus::setBars() {
  if (!started) return;
  for (int x= 0; x <= 9; x++) {
    setProgressBarValue(x + 1, A * sin(x + B + i) * 100);
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
  setBars();
}


void Sinus::setFase() {
  B = (ui.Fase->value());
  setBars();
}


void Sinus::start() {
  if (!started) {
    started = true;
    setBars();
  }
}

void Sinus::startTimer() {
  if (started and !timerStarted) {
    timer->start();
    timerStarted = true;
  }
  else if (timerStarted and started) {
    timer->stop();
    timerStarted = false;
  }
}

