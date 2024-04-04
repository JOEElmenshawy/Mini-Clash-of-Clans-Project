#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include "castle.h"
#include "fence.h"
#include "defense.h"
#include "enemy.h"
//#include <QObject>
class  Game
{

public:
    Game();

    void showview();
public slots:
private:
    QGraphicsView * view;
    QGraphicsScene * scene;
    Castle* castle;
    Fence** fence;
    Defense* defense;
    int NumberOfFences;

};

#endif // GAME_H
