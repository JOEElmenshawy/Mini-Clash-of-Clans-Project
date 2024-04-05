#include "castle.h"
#include "enemy.h"
#include <QGraphicsScene>
Castle::Castle(Fence ** f, int c) {
    fencePassEnemy=f;
    fenceCount=c;
 }

void Castle::createEnemy()
{
    Enemy* e= new Enemy(this,fencePassEnemy,fenceCount);
    scene()->addItem(e);
}
