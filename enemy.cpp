#include "enemy.h"

Enemy::Enemy(Castle * c, Fence ** f, int fs)
{
    castleEnemy=c;
    fenceEnemy= f;
    fencecount= fs;
    setPixmap(QPixmap(":/new/images/images/enemy.png").scaled(75, 75));
    setPos(100,100);
}
