#include "enemy.h"
#include <cmath>
#include <QGraphicsScene>
#include"game.h"
//extern Game *g;
Enemy::Enemy(Castle* c,Fence ** f, int co)
{
    isDead =false;
    castleEnemy=c;
    fenceEnemy=f;
    fencecount=co;
    continuemove =true;
    Enemyhealth = 3;
    shootdamage = true;
    setPixmap(QPixmap(":/new/images/images/enemy.png").scaled(75, 75));
    setPos(100,100);
    int random_number = rand() %(800);
    setPos(random_number,0);

    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
    timer->start(200);

}
void Enemy::DecreaseHealth(){
    if (!isDead) {
        Enemyhealth--;
        if(Enemyhealth <= 0){
            isDead = true;
            shootdamage = false;
            EnemyDie();
        }
    }

}

void Enemy::EnemyDie(){
    if(scene()) // Ensure the scene exists
        scene()->removeItem(this);
    delete this;
}
void Enemy::move()
{
    if(shootdamage){
        continuemove=true;
        QList<QGraphicsItem*> colliding_items = collidingItems();
        for (int i = 0, n = colliding_items.size(); i < n; ++i) {
            if (typeid(*(colliding_items[i])) == typeid(Fence)) {
                Fence *fence = dynamic_cast<Fence*>(colliding_items[i]);
                if (fence) {
                    // Call member functions specific to Fence
                    fence->DecreaseHealth();
                    continuemove = false;
                    return;
                }
            }
        }
        QList<QGraphicsItem*> colliding_items2 = collidingItems();
        for (int i = 0, n = colliding_items2.size(); i < n; ++i) {
            if (typeid(*(colliding_items2[i])) == typeid(Castle)) {
                Castle *C = dynamic_cast<Castle*>(colliding_items2[i]);
                if (C) {
                    // Call member functions specific to Fence
                    C->DecreaseHealth();
                    continuemove = false;
                    return;
                }
            }
        }
        if(continuemove){
            if(x()> castleEnemy->x())
            {
                setPos(x()-5,y());
            }
            if(x() < castleEnemy->x()){
                setPos(x()+5,y());
            }
            if(y() > castleEnemy->y()){
                setPos(x(),y()-5);
            }
            if(y() < castleEnemy->y()){
                setPos(x(),y()+5);
            }
        }

    }



}
