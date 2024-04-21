#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
#include<QGraphicsScene>
class bullet:public QObject, public QGraphicsPixmapItem
{

    Q_OBJECT
public slots:
    void move();
public:
    bullet(int x, int y,int param,int param2);
private:
    int targetX;
    int targetY;
    double slope ;
    int sign;

};

#endif // BULLET_H
