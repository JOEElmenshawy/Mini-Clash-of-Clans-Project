#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>

class  Game
{
public:
    Game();
private:
    QGraphicsView view;
    QGraphicsScene scene;
};

#endif // GAME_H
