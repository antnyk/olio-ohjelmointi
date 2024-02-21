#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // aloitus arvo
    ui->lineEdit->setText(QString::number(myNumber));

    //Osa 2
    state = 1;
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
    numberClickHandler();
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
}


// Clear ja Enter painikkeet


void MainWindow::on_btnClear_clicked()
{
    if (state==1){
        number1="";
        ui->lineEditNum1->setText(number1);
    }
    else if (state==2){
        number2="";
        ui->lineEditNum2->setText(number2);
    }
}


void MainWindow::on_btnEnter_clicked()
{
    state++;
    if (state>2){
        state=1;
    }
}


// Laskenta painikkeet


void MainWindow::on_btnPlussa_clicked()
{
    operand = 0;
    addSubMulDivClickHandler();
}

void MainWindow::on_btnMiinus_clicked()
{
    operand = 1;
    addSubMulDivClickHandler();
}

void MainWindow::on_btnKerto_clicked()
{
    operand = 2;
    addSubMulDivClickHandler();
}

void MainWindow::on_btnJako_clicked()
{
    operand = 3;
    addSubMulDivClickHandler();
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
    qDebug() << "Button numero" << name.back();



    if (state==1){
        ui->lineEditNum1->setText(number1.append(name.back()));
    }
    if (state==2){
        ui->lineEditNum2->setText(number2.append(name.back()));
    }

}


void MainWindow::clearAndEnterClickHandler()
{
    state = 1;
    number1="";
    number2="";
    result=0;

    ui->lineEditNum1->setText(number1);
    ui->lineEditNum2->setText(number2);
    ui->lineEditResult->setText(QString::number(result));
}


void MainWindow::addSubMulDivClickHandler()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    qDebug()<<"number1 = "<<n1<<" number2 = "<<n2;
    switch(operand){
    case 0:
        result = n1 + n2;
        break;
    case 1:
        result = n1 - n2;
        break;
    case 2:
        result = n1 * n2;
        break;
    case 3:
        result = n1 / n2;
        break;
    }
    ui->lineEditResult->setText(QString::number(result));

}

void MainWindow::on_btnClearAll_clicked()
{
    clearAndEnterClickHandler();
}

// OMIA TESTAILUJA, TOIVOTTAVASTI EI RIKO KOODIA
/*
void MainWindow::on_lineEditNum1_textEdited(const QString &arg1)
{
    state=1;
}


void MainWindow::on_lineEditNum2_textEdited(const QString &arg1)
{
    state=2;
}


void MainWindow::on_lineEditNum2_selectionChanged()
{
    state=2;
}
*/
