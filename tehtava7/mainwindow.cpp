#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    startSetup();
    setGameInfoText("Select playtime andd press start game!", 10);
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
    setGameInfoText("Game ongoing", 10);
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
        if (timeRemainingPlayer1 <= 0){
                gameWinner();
                setGameInfoText("PLAYER 2 WON!", 14);
            }
        break;
    case 1:
        timeRemainingPlayer2 -= 1000;
        qDebug()<<"Aikaa kulunut pelaaja2 "<<timeRemainingPlayer2/1000<<" sekunttia.";
        ui->progbarPlayer2->setValue(timeRemainingPlayer2);
        if (timeRemainingPlayer2 <= 0){
            gameWinner();
            setGameInfoText("PLAYER 1 WON!", 14);
        }
        break;
    }
}

void MainWindow::on_btnTimeTwoMin_clicked()
{
    ui->btnStart->setEnabled(true);
    ui->label->setText("READY TO PLAY");
    setGameInfoText("Ready to play", 10);
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
    setGameInfoText("Ready to play", 10);
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
    state = 1;
}


void MainWindow::on_btnSwitchToPlayer2_clicked()
{
    state = 0;
}


void MainWindow::on_btnStop_clicked()
{
    objectTimer->stop();
    qDebug()<<"Game stopped";
    setGameInfoText("Game stopped", 10);
    ui->btnContinue->setEnabled(true);
}


void MainWindow::gameWinner()
{
    objectTimer->stop();
    startSetup();
    qDebug()<<"Winner declared";
    delete objectTimer;
}


void MainWindow::setGameInfoText(QString lause, short fontSize)
{

    ui->label->setText(lause);
    //fontin koon muokkaus
    QFont font;
    font.setPointSize(fontSize);
    ui->label->setFont(font);
}

void MainWindow::on_pushButton_clicked()
{

}


void MainWindow::on_btnContinue_clicked()
{
    objectTimer->start();
    qDebug()<<"Game continues";
    setGameInfoText("Game ongoing", 10);
    ui->btnContinue->setEnabled(false);
}


void MainWindow::on_btnRestart_clicked()
{
    setGameInfoText("Restarted", 10);
    delete objectTimer;
    startSetup();
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
