#include "enemy.h"

Enemy::Enemy()
{

    setPixmap(QPixmap(":/new/images/images/enemy.png").scaled(75, 75));
    setPos(100,100);
    int random_number = rand() %(800);
    setPos(random_number,0);

    // *******  Moving the enemies downwards automatically every 50 milli second ********
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(50);
}
void Enemy::move()
{

    setPos(x()+5,y()+5);
    if(y()+75>750|| x()+75>1080)

    {
        delete this;

    }


}
