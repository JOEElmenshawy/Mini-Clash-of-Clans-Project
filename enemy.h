#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include "castle.h"
#include "fence.h"
#include<QTimer>
class Enemy:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy();
private:
    Castle * castleEnemy;
    Fence ** fenceEnemy;
    int fencecount;
public slots:
    void move();
};

#endif // ENEMY_H
