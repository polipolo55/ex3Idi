#include "ui_Sinus.h"
#include <QTimer>


class Sinus : public QWidget 
{
    Q_OBJECT

    public:
      Sinus(QWidget *parent = 0);

    public slots:
      void setBars();
      void setProgressBarValue(int index, int value);
      void setAmplitude();
      void setFase();
      void start();
      void startTimer();


    private:
      Ui::Sinus ui;
      QTimer *timer;
      
      float A = 0.5f;
      float B = 0.0f;
      int i = 0;
      bool started = false;
      bool timerStarted = false;
};
