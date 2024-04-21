#include "castle.h"
#include "enemy.h"
#include"game.h"
#include <QGraphicsScene>
#include"game.h"
extern Game *g;
Castle::Castle(Fence ** f, int c) {
    health=20;
    fencePassEnemy=f;
    fenceCount=c;
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(createEnemy()));
    timer->start(3000);
}

void Castle::createEnemy()
{
    Enemy* e= new Enemy(this,fencePassEnemy,fenceCount);
    scene()->addItem(e);
}
void Castle::DecreaseHealth(){
    health--;
    Die();
}

void Castle::Die(){
    if(health<=0){

    }

}
