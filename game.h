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
    bool eventFilter(QObject *obj, QEvent *event) override;
    void showview();
    void generateBullet();

public slots:
    void mousePressEvent(QMouseEvent *event) override;
private:
    QGraphicsView * view;
    QGraphicsScene * scene;
    Castle* castle;
    Fence** fence;
    Defense* defense;
    int NumberOfFences;

};

#endif // GAME_H
