#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsPixmapItem>
#include<QObject>
#include<QGraphicsItem>
class bullet:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public slots:
    void move();
public:
    bullet(QGraphicsItem * parent=0 );
};

#endif // BULLET_H
