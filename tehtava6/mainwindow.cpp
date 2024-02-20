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
    numberClickHandler();
}


void MainWindow::on_btn2_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn3_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn4_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn5_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn6_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn7_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn8_clicked()
{
    numberClickHandler();
}


void MainWindow::on_btn9_clicked()
{
    numberClickHandler();
    resetLineEdits();
}


// Clear ja Enter painikkeet


void MainWindow::on_btnClear_clicked()
{

}


void MainWindow::on_btnEnter_clicked()
{

}


// Laskenta painikkeet


void MainWindow::on_btnJako_clicked()
{
    operand = 0;
}


void MainWindow::on_btnKerto_clicked()
{
    operand = 1;
}


void MainWindow::on_btnPlussa_clicked()
{
    operand = 2;
}


void MainWindow::on_btnMiinus_clicked()
{
    operand = 3;
}

// Painikkeiden funktiot

void MainWindow::resetLineEdits()
{
    ui->lineEditNum1->setText(NULL);
    ui->lineEditNum2->setText(NULL);
    ui->lineEditResult->setText(NULL);
    qDebug()<<"Lines resetted";
}


void MainWindow::numberClickHandler()
{
    // Esitehtävä koodi
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name:" << name;
}


void MainWindow::clearAndEnterClickHandler()
{

}


void MainWindow::addSubMulDivClickHandler()
{

}
