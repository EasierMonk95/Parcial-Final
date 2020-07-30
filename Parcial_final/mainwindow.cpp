#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    t= new QTimer;
    ui->setupUi(this);
   // connect(t,SIGNAL(timeout()),this,SLOT(moverParab()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::moverParab(){
    int rel=1;
    double yd;
    //3 cosas: 1. Deben tenerse las ecuaciones en tiempo discreto del sistema
    // Debe asignarse una relación m:p, 1:1
    // Recordar que el eje y en qt está invertido (invertir el eje y)
    vy+=(a*T);
    x+=(vx*T);
    y+=vy*T-(a/2)*(T*T);
    yd=2*yo-y;
    //ui->Bola->setGeometry(int(x*rel),int(yd*rel),ui->Bola->width(),ui->Bola->height());
}


void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_pushButton_2_clicked()
{

}
