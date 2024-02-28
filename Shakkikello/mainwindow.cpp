#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectTimer1=new QTimer(this);
    objectTimer2=new QTimer(this);
    connect (ui ->switchPlayers2,SIGNAL(released()), this,SLOT (switchPlayers()));
    connect (ui ->switchPlayers,SIGNAL(released()), this,SLOT (switchPlayers()));
  // connect (ui ->time5min,SIGNAL(released()), this,SLOT (progressionBar()));
    //  connect (ui ->time120,SIGNAL(released()), this,SLOT (progressionBar()));
    connect (ui ->Startgame,SIGNAL(released()), this,SLOT (startAndReset()));
    connect (ui ->Reset,SIGNAL(released()), this,SLOT (startAndReset()));


    ui->Reset->setCheckable(true);
    ui->Startgame->setCheckable(true);
    ui->time120->setCheckable(true);
    ui->time5min->setCheckable(true);

    ui->progressBar->setMaximum(100);
    ui->progressBar_2->setMaximum(100);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer1;
    delete objectTimer2;
    objectTimer1 = nullptr;
    objectTimer2 = nullptr;
}

void MainWindow::switchPlayers()
{

    if(ui->switchPlayers->isChecked())
    {

        objectTimer1->stop();
        objectTimer2->start(1000);
        ui->switchPlayers->setCheckable(false);
        ui->switchPlayers2->setCheckable(true);

        disconnect(objectTimer1, SIGNAL (timeout()), this, SLOT (progressionBar()));
        connect(objectTimer2, SIGNAL (timeout()), this, SLOT (progressionBar2()));
    }

    else if (ui->switchPlayers2->isChecked())
    {
        objectTimer2->stop();
        objectTimer1->start(1000);

        ui->switchPlayers2->setCheckable(false);
        ui->switchPlayers->setCheckable(true);

        disconnect(objectTimer2, SIGNAL (timeout()), this, SLOT (progressionBar2()));
        connect(objectTimer1, SIGNAL (timeout()), this, SLOT (progressionBar()));
    }
}




void MainWindow::startAndReset()
{

    if (ui->Startgame->isChecked() && ui->time120->isChecked() ){
        ui->progressBar->setMaximum(120);
        ui->progressBar_2->setMaximum(120);
        gameTimer=120;
        objectTimer1->start(1000);
        ui->switchPlayers->setCheckable(true);
connect(objectTimer1, SIGNAL (timeout()), this, SLOT (progressionBar()));
        ui->Startgame->setChecked(false);
        ui->Reset->setChecked(false);
        ui->time5min->setChecked(false);
        ui->time120->setChecked(false);
        ui->label->setText("Game ongoing");
    }
    else if (ui->Startgame->isChecked() && ui->time5min->isChecked() )
    {
        ui->progressBar->setMaximum(300);
        ui->progressBar_2->setMaximum(300);
gameTimer=300;
        objectTimer1->start(1000);
        ui->switchPlayers->setCheckable(true);
        ui->Startgame->setChecked(false);
        ui->Reset->setChecked(false);
        ui->time5min->setChecked(false);
        ui->time120->setChecked(false);
        connect(objectTimer1, SIGNAL (timeout()), this, SLOT (progressionBar()));
        ui->label->setText("Game ongoing");

    }
    else if (ui->Reset->isChecked() )
    {
        objectTimer1->stop();
        objectTimer2->stop();
        ui->progressBar->reset();
        ui->progressBar_2->reset();
        disconnect(objectTimer1, SIGNAL (timeout()), this, SLOT (progressionBar()));
        disconnect(objectTimer2, SIGNAL (timeout()), this, SLOT (progressionBar2()));
        player1Time = 0;
        player2Time = 0;
        gameTime = 0;
        ui->Startgame->setChecked(false);
        ui->time5min->setChecked(false);
        ui->time120->setChecked(false);
        ui->Reset->setChecked(false);
 ui->label->setText("New game via selecting playtime and pressing start game!");}
    }

void MainWindow::progressionBar()
{
    player1Time++;
    ui->progressBar->setValue(player1Time);
    if(player1Time >= gameTimer)
    {
        ui->label->setText("Player 2 WON");
    }

}



void MainWindow::progressionBar2()
{
    player2Time++;
    ui->progressBar_2->setValue(player2Time);
    if(player1Time >= gameTimer){
        ui->label->setText("Player 1 WON");
    }

}
