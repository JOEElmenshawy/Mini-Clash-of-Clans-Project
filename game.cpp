#include <QApplication>
#include <iostream>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QFile>
#include<QTextStream>
#include<QGraphicsPixmapItem>

#include "game.h"
using namespace std;
Game::Game()
{
    view= new QGraphicsView;
    view->setWindowTitle("Game Project");
    scene=new QGraphicsScene;
    scene->setSceneRect(0,0,1080,750);

    view->setFixedSize(1080,750);
    view->setBackgroundBrush(QBrush(QImage(":/new/images/images/background.png")));
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QFile file(":/new/board/clandesign.txt");
    file.open(QIODevice::ReadOnly);
    int boarddata[10][12];
    QTextStream stream(&file);
    QString temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<12;j++){
            stream>> temp;
            boarddata[i][j] = temp.toInt();
            //cout<<boarddata[i][j]<<" ";

        }
    }
    QPixmap castlephoto (":/new/images/images/caslte.png");
    castlephoto=castlephoto.scaledToWidth(75);
    castlephoto=castlephoto.scaledToHeight(75);
    QPixmap fencephoto (":/new/images/images/fence.png");
    fencephoto=fencephoto.scaledToWidth(75);
    fencephoto=fencephoto.scaledToHeight(75);
    QPixmap defencephoto (":/new/images/images/cannon.png");
    defencephoto=defencephoto.scaledToWidth(75);
    defencephoto=defencephoto.scaledToHeight(75);
    QPixmap grassphoto (":/new/images/images/grass.png");
    grassphoto=grassphoto.scaledToWidth(75);
    grassphoto=grassphoto.scaledToHeight(75);

    for(int i=0;i<120;i++){
        fence[i] = new Fence;
        fence[i]->setPixmap(fencephoto);
    }
    castle = new Castle;
    castle->setPixmap(castlephoto);
    defense = new Defense;
    defense->setPixmap(defencephoto);
    QGraphicsPixmapItem emptylands[120];
    for(int i=0;i<120;i++){
        emptylands[i].setPixmap(grassphoto);
    }
    int emptyiterator =0;
    int fenceiterator=0;
    QGraphicsPixmapItem boardimages[10][12];
    for(int i=0;i<10;i++){
        for(int j=0;j<12;j++){
            if(boarddata[i][j] == 0)
            {
                emptylands[emptyiterator].setPos(75*i,75*j);
                scene->addItem(&emptylands[emptyiterator]);
                emptyiterator++;
            }else if(boarddata[i][j] == 1)
            {
                castle->setPos(75*i,75*j);
                scene->addItem(castle);
            }
            else if (boarddata[i][j] == 2)
            {
                defense->setPos(75*i,75*j);
                scene->addItem(defense);
            }
            else
            {
                fence[fenceiterator]->setPos(75*i,75*j);
                scene->addItem(fence[fenceiterator]);
                fenceiterator++;
            }
        }
    }
    view->setScene(scene);

}

void Game::showview()
{
    view->show();
}
