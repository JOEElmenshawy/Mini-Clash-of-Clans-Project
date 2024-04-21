#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QBrush>
#include<QFile>
#include<QTextStream>
#include<QGraphicsPixmapItem>
#include<QGraphicsRectItem>
#include "castle.h"
#include "enemy.h"
#include "defense.h"
#include "fence.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   level =new Game;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    level->showview();
}


