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
<<<<<<< HEAD
=======
#include<QMouseEvent>
>>>>>>> acd01b488a77a36eda25106b100e566166c754ed
class  Game: public QGraphicsView
{

public:
    Game();
<<<<<<< HEAD
    //using  QMouseEvent::mousePressEvent();
     void mousePressEvent(QMouseEvent* event) override ;
=======
    bool eventFilter(QObject *obj, QEvent *event) override;
>>>>>>> acd01b488a77a36eda25106b100e566166c754ed
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
