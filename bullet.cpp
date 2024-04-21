#include "bullet.h"
#include<QPixmap>
#include<QTimer>
#include<qmath.h> //to use sin , cos ... etc
bullet::bullet(QGraphicsItem *parent) {

    this->setPixmap(QPixmap(":/new/images/images/bullet.png"));
    QTimer * timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
}
void bullet::move()
{
    int STEP =30;
    double theta=rotation();//in degrees
    double dy= STEP*qSin(qDegreesToRadians(theta));
    double dx= STEP*qCos(qDegreesToRadians(theta));
    setPos(x()+dx,y()+dy);

}
