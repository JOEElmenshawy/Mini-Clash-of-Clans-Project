#include "lostwindow.h"
#include "ui_lostwindow.h"
#include <QPushButton>
#include <mainwindow.h>
extern Game *g;
LostWindow::LostWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LostWindow)
{
    ui->setupUi(this);
    delete g;
}

LostWindow::~LostWindow()
{
    delete ui;
    QPixmap p(":/new/images/images/MainMenue.jpg");
    ui->returnmenulabel->setPixmap(p);
    QPushButton *pushButton = new QPushButton("Return to main menu", ui->returnmenulabel);
    pushButton->setGeometry(QRect(100, 100, 100, 30));
    connect(pushButton, &QPushButton::clicked, this, &LostWindow::returnMainMenu);
}

void LostWindow::returnMainMenu()
{
    hide();
    MainWindow* m=new MainWindow;
    m->show();
    this->~LostWindow();
}
