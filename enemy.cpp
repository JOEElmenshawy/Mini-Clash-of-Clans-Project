#include "enemy.h"
#include <cmath>
#include <QGraphicsScene>
Enemy::Enemy(Castle* c,Fence ** f, int co)
{
    castleEnemy=c;
    fenceEnemy=f;
    fencecount=co;
    setPixmap(QPixmap(":/new/images/images/enemy.png").scaled(75, 75));
    setPos(100,100);
    int random_number = rand() %(800);
    setPos(random_number,0);
    double minDistance=sqrt(pow(fenceEnemy[0]->x()-x(),2)+pow(fenceEnemy[0]->y()-y(),2));
    for (int i=1;i<fencecount;i++)
    {
        if(sqrt(pow(fenceEnemy[i]->x()-x(),2)+pow(fenceEnemy[i]->y()-y(),2))<minDistance)
        {
            minDistance=sqrt(pow(fenceEnemy[i]->x()-x(),2)+pow(fenceEnemy[i]->y()-y(),2));
            currentTarget=fenceEnemy[i];
        }
    }
  //  scene()->removeItem(castleEnemy); erorrrrrrrrrrrrrrrrrrrrrrrrrrrrr
    //int k=currentTarget->x(); errorrrrrrrrrrrrrrrrrrrrrrrrrrrrrr
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()),this,SLOT (move()));
   timer->start(200);

}
void Enemy::move()
{
    // if (x()>currentTarget->x())
    // {

    //     setPos(x()-20,y());
    // }
    // if (y()>currentTarget->y())
    // {

    //     setPos(x(),y()-20);
    // }
    // if (x()<currentTarget->x())
    // {

    //     setPos(x()+20,y());
    // }
    // if (y()<currentTarget->y())
    // {

    //     setPos(x(),y()+20);
    // }



}
