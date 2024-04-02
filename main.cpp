#include "mainwindow.h"

#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QFile>
#include<QTextStream>
#include<QGraphicsPixmapItem>>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QGraphicsView view;

    view.setWindowTitle("Game Project");
    QGraphicsScene scene;
    scene.setSceneRect(0,0,1000,1200);

    view.setFixedSize(1200,1000);
    view.setBackgroundBrush(QBrush(Qt::black));

    //
    QFile file("qrc:/new/board/clan design.txt");
    file.open(QIODevice::ReadOnly);
    int boarddata[10][12];
    QTextStream stream(&file);
    QString temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<12;j++){
            stream>> temp;
            boarddata[i][j] = temp.toInt();
        }
    }
    QGraphicsPixmapItem boardimages[10][12];
    for(int i=0;i<10;i++){
        for(int j=0;j<12;j++){
            if(boarddata[i][j] == 0){

            }else{

            }
        }
    }
    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect(0,0,1000,1200);
    scene.addItem(rect);
    view.setScene(&scene);



    w.show();
    return a.exec();
}
