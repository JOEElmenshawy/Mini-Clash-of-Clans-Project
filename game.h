#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include "castle.h"
#include "fence.h"
#include "defense.h"
#include "enemy.h"
class  Game
{
public:
    Game();
    void showview();

private:
    QGraphicsView * view;
    QGraphicsScene * scene;
    Castle* castle;
    Fence* fence[120];
    Defense* defense;

};

#endif // GAME_H
