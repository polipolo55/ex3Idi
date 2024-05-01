#include "myQProgressBar.h"

myQProgressBar::myQProgressBar(QWidget *parent) : QProgressBar(parent)
{

}

void myQProgressBar::setValue(int value)
{
  QProgressBar::setValue(value);
}