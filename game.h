#ifndef GAME_H
#define GAME_H
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QMouseEvent>
#include "castle.h"
#include "fence.h"
#include "defense.h"
#include"bullet.h"
#include "enemy.h"
#include <QObject>

#include<QMouseEvent>

class  Game: public QGraphicsView
{

public:
    Game();
    void level1();

    //using  QMouseEvent::mousePressEvent();
    void mousePressEvent(QMouseEvent* event) override ;

    bool eventFilter(QObject *obj, QEvent *event) override;
    void gameOver();
    void showview();
    void generateBullet();

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
