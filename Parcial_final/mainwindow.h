#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QGraphicsItem>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void randomizer();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void moverParab();

private:
    QTimer *t;
    QGraphicsPixmapItem *bolas;
    double x, y, vx, vy, T=0.001, a=-9.8, yo;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
