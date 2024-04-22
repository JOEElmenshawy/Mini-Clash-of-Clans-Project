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
    Enemy(Castle*,Fence **, int);
    void EnemyDie();
    void DecreaseHealth();
private:
    QGraphicsPixmapItem * currentTarget;
    Castle * castleEnemy;
    Fence ** fenceEnemy;
    int fencecount;
    bool continuemove;
    int Enemyhealth;
    bool shootdamage ;
    bool isDead;

public slots:
    void move();

};

#endif // ENEMY_H
