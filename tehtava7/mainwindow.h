#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>



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
    void timePass();

    void on_btnStart_clicked();

    void on_btnTimeTwoMin_clicked();

    void on_btnTimeFiveMin_clicked();

    void on_btnSwitchToPlayer1_clicked();

    void on_btnSwitchToPlayer2_clicked();

    void on_btnStop_clicked();

    void on_pushButton_clicked();

    void on_btnContinue_clicked();

    void on_btnRestart_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *objectTimer;
    int timeRemainingPlayer1=0;
    int timeRemainingPlayer2=0;

    const int TWO_MIN = 120000;
    const int FIVE_MIN = 300000;

    int state = 0;

    void gameWinner();
    void setGameInfoText(QString, short);
    void startSetup();
};
#endif // MAINWINDOW_H
