#ifndef CASTLE_H
#define CASTLE_H
#include <QGraphicsRectItem>
#include <QObject>
#include "fence.h"
class Castle: public QObject , public QGraphicsPixmapItem
{ Q_OBJECT
public:
    Castle();

public slots:
void createEnemy();
};

#endif
