#ifndef BOLASN_H
#define BOLASN_H

#include <QGraphicsItem>
#include <QTimer>
#include <QObject>

class BolasN: public QGraphicsItem, public QObject{
    Q_OBJECT
public:
    BolasN();
    QTimer *timer;
    QGraphicsItem *ball;

public slots:
    void randomizer();
};

#endif // BOLASN_H
