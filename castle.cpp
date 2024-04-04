#include "castle.h"
#include "enemy.h"
#include <QGraphicsScene>
Castle::Castle() {}

void Castle::createEnemy(Castle *c, Fence **f, int fs)
{
    Enemy* e= new Enemy(c,f, fs);
    scene()->addItem(e);
}
