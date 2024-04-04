#include "castle.h"
#include "enemy.h"
#include <QGraphicsScene>
Castle::Castle() {}

void Castle::createEnemy()
{
    Enemy* e= new Enemy;
    scene()->addItem(e);
}
