#include "castle.h"
#include "enemy.h"
#include"game.h"
#include <QGraphicsScene>

extern Game *g;
Castle::Castle(Fence ** f, int c) {
    Castlehealth=20;
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
    Castlehealth--;
    CastleDie();
}

void Castle::CastleDie(){
    if(Castlehealth<=0){

        scene()->clear();
      //  g->gameOver();


    }

}
