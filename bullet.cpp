#include "bullet.h"
#include<QPixmap>
#include<QTimer>
#include<qmath.h> //to use sin , cos ... etc
bullet::bullet(int x, int y):targetX(x),targetY(y) {
    QPixmap a(":/new/images/images/bullet.png");
    a.scaledToWidth(10);
    a.scaledToHeight(10);
    this->setPixmap(a);

    QTimer * timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}
void bullet::move()
{

    int STEP =15;
    int theta=rotation();//in degrees

    if(x()<0|| x()>1080||y()<0||y()>750)
    {

    }
    int STEP =10;
    double theta=rotation();//in degrees

    double dy= STEP*qSin(qDegreesToRadians(theta));
    double dx= STEP*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y()+dy);

}
