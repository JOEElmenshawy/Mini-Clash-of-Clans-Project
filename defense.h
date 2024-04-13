#ifndef DEFENSE_H
#define DEFENSE_H
#include <QGraphicsRectItem>
#include <QObject>
class Defense:public QObject , public QGraphicsPixmapItem
{
public:
    Defense();

private:
    int health;
};

#endif // DEFENSE_H
