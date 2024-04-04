#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsRectItem>
#include <QObject>
#include "castle.h"
#include "fence.h"
class Enemy:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(Castle * c, Fence ** f, int fs);
private:
    Castle * castleEnemy;
    Fence ** fenceEnemy;
    int fencecount;
};

#endif // ENEMY_H
