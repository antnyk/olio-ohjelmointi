#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnIncrease_clicked();

    void on_pushReset_clicked();

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btnPlussa_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btnMiinus_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnKerto_clicked();

    void on_btn0_clicked();

    void on_btnClear_clicked();

    void on_btnEnter_clicked();

    void on_btnJako_clicked();

    void on_lineEditResult_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::MainWindow *ui;
    int myNumber = 0;
    QString number1,number2;
    int state;
    float result;
    short operand;

    void numberClickHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
