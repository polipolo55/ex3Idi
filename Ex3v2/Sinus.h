#include "ui_Sinus.h"


class Sinus : public QWidget 
{
    Q_OBJECT

    public:
      Sinus(QWidget *parent = 0);

    public slots:
      void setBars();
      void setProgressBarValue(int index, int value);
      void setAmplitude();


    private:
      Ui::Sinus ui;
};