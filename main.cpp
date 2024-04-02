#include "mainwindow.h"

#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QGraphicsView view;
    view.setFixedSize(1200,1000);
    view.setWindowTitle("Game Project");
    QGraphicsScene scene;
    view.setScene(&scene);

    view.setBackgroundBrush(QBrush(Qt::black));

    w.show();
    return a.exec();
}
