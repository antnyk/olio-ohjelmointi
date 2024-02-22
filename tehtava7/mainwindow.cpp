#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    startSetup();
    ui->label->setText("SELECT PLAYTIME AND PRESS START GAME");
}

MainWindow::~MainWindow()
{
    delete ui;
    delete objectTimer;
    objectTimer=nullptr;
}


void MainWindow::on_btnStart_clicked()
{
    objectTimer=new QTimer();
    connect(objectTimer, SIGNAL(timeout()),this,SLOT(timePass()));
    objectTimer->start(1000);
    ui->label->setText("GAME ONGOING");
    ui->btnStart->setEnabled(false);
    ui->btnStop->setEnabled(true);
    //time buttons need to be disabled
    ui->btnTimeFiveMin->setEnabled(false);
    ui->btnTimeTwoMin->setEnabled(false);
    ui->btnRestart->setEnabled(true);
}

void MainWindow::timePass(){
    switch (state){
    case 0:
        timeRemainingPlayer1 -= 1000;
        qDebug()<<"Aikaa kulunut pelaaja1 "<<timeRemainingPlayer1/1000<<" sekunttia.";
        ui->progbarPlayer1->setValue(timeRemainingPlayer1);
        if (timeRemainingPlayer1 <= 0) gameWinner();
        break;
    case 1:
        timeRemainingPlayer2 -= 1000;
        qDebug()<<"Aikaa kulunut pelaaja2 "<<timeRemainingPlayer2/1000<<" sekunttia.";
        ui->progbarPlayer2->setValue(timeRemainingPlayer2);
        if (timeRemainingPlayer2 <= 0) gameWinner();
        break;
    }
}

void MainWindow::on_btnTimeTwoMin_clicked()
{
    ui->btnStart->setEnabled(true);
    ui->label->setText("READY TO PLAY");
    qDebug()<<"Time mode 2 minutes";
    timeRemainingPlayer1 = TWO_MIN;
    timeRemainingPlayer2 = TWO_MIN;
    ui->progbarPlayer1->setMaximum(TWO_MIN);
    ui->progbarPlayer2->setMaximum(TWO_MIN);
    ui->progbarPlayer1->setValue(TWO_MIN);
    ui->progbarPlayer2->setValue(TWO_MIN);
}


void MainWindow::on_btnTimeFiveMin_clicked()
{
    ui->btnStart->setEnabled(true);
    ui->label->setText("READY TO PLAY");
    qDebug()<<"Time mode 5 minutes";
    timeRemainingPlayer1 = FIVE_MIN;
    timeRemainingPlayer2 = FIVE_MIN;
    ui->progbarPlayer1->setMaximum(FIVE_MIN);
    ui->progbarPlayer2->setMaximum(FIVE_MIN);
    ui->progbarPlayer1->setValue(FIVE_MIN);
    ui->progbarPlayer2->setValue(FIVE_MIN);
}


void MainWindow::on_btnSwitchToPlayer1_clicked()
{
    state = 0;
}


void MainWindow::on_btnSwitchToPlayer2_clicked()
{
    state = 1;
}


void MainWindow::on_btnStop_clicked()
{
    objectTimer->stop();
    qDebug()<<"Game stopped";
    ui->label->setText("GAME STOPPED");
    ui->btnContinue->setEnabled(true);
}

void MainWindow::gameWinner()
{
    objectTimer->stop();
    startSetup();
    qDebug()<<"Winner declared";
    switch(state){
    case 0:
        ui->label->setText("PLAYER 2 WON");
        break;
    case 1:
        ui->label->setText("PLAYER 1 WON");
        break;
    }
    delete objectTimer;
}

void MainWindow::setGameInfoText(QString, short)
{

}

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_btnContinue_clicked()
{
    objectTimer->start();
    qDebug()<<"Game continues";
    ui->btnContinue->setEnabled(false);
}


void MainWindow::on_btnRestart_clicked()
{

}

void MainWindow::startSetup(){
    ui->btnStart->setEnabled(false);
    ui->btnContinue->setEnabled(false);
    ui->btnStop->setEnabled(false);
    ui->btnRestart->setEnabled(false);
    ui->btnTimeFiveMin->setEnabled(true);
    ui->btnTimeTwoMin->setEnabled(true);
    ui->progbarPlayer1->setValue(0);
    ui->progbarPlayer2->setValue(0);
}
