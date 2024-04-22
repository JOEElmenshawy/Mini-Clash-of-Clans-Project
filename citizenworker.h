#ifndef CITIZENWORKER_H
#define CITIZENWORKER_H
#include <QGraphicsRectItem>
#include <QObject>
#include<QGraphicsScene>
#include<QTimer>
#include"enemy.h"
#include <QPixmap>
#include<QGraphicsItem>
#include<QGraphicsPixmapItem>

class CitizenWorker:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    CitizenWorker();

private:



public slots:
    void move();

};

#endif
