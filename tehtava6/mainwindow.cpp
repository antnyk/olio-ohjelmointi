#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // aloitus arvo
    ui->lineEdit->setText(QString::number(myNumber));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnIncrease_clicked()
{
    myNumber++;
    ui->lineEdit->setText(QString::number(myNumber));
}


void MainWindow::on_pushReset_clicked()
{
    myNumber = 0;
    ui->lineEdit->setText(QString::number(myNumber));
}

//numero painikkeet
void MainWindow::on_btn0_clicked()
{

}


void MainWindow::on_btn1_clicked()
{

}


void MainWindow::on_btn2_clicked()
{

}


void MainWindow::on_btn3_clicked()
{

}


void MainWindow::on_btn4_clicked()
{

}


void MainWindow::on_btn5_clicked()
{

}


void MainWindow::on_btn6_clicked()
{

}


void MainWindow::on_btn7_clicked()
{

}


void MainWindow::on_btn8_clicked()
{

}


void MainWindow::on_btn9_clicked()
{

}


// Muut painikkeet


void MainWindow::on_btnClear_clicked()
{

}


void MainWindow::on_btnEnter_clicked()
{

}


void MainWindow::on_btnJako_clicked()
{

}



void MainWindow::on_btnKerto_clicked()
{

}


void MainWindow::on_btnPlussa_clicked()
{

}


void MainWindow::on_btnMiinus_clicked()
{

}

// Painikkeiden funktiot

void MainWindow::resetLineEdits()
{

}
