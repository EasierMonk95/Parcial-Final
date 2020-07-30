#include "bolasn.h"
#include "mainwindow.h"

extern MainWindow *main;

BolasN::BolasN()
{
    int aleatorioX = rand()% 790+5;
    int aleatorioY = rand()% 400+5;
    setPos(aleatorioX,aleatorioY);
   /* QTimer *temporizador = new QTimer();
    connect(temporizador,SIGNAL(timeout()),this,SLOT(randomizer()));
    temporizador->start(2000);*/
}

void MainWindow::randomizer(){
    BolasN *ball;
    vx= rand()% 100 +1;
    vy= rand()% 100 +1;
    x=bolas->pos().x();
    y=bolas->pos().y();
    yo=y;

}

