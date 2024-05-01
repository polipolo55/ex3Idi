#include <QProgressBar>

class myQProgressBar : public QProgressBar
{
  Q_OBJECT
  public: 
    myQProgressBar(QWidget *parent);
  
  public slots:
    void setValue(int value);

  signals: 
    void valueChanged(int value);
};