#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}


void MainWindow::on_btn_switch1_clicked()
{
    elapsed = 0;
    ui->progressBar_1->setValue(100);
    current_player1 = false;
    // progress of player2 will decrease
}
void MainWindow::on_btn_switch2_clicked()
{
    elapsed = 0;
    ui->progressBar_2->setValue(100);
    current_player1 = true;
    //progress of player1 will decrease
}


void MainWindow::on_btn_120s_clicked()
{
    gameTime = 120000; // 120 000 ms
    ui->progressBar_1->setValue(100);
    ui->progressBar_2->setValue(100);
    setGameInfoText("Ready to play");
}
void MainWindow::on_btn_5min_clicked()
{
    gameTime = 300000; // 300 s = 300 000 ms
    ui->progressBar_1->setValue(100);
    ui->progressBar_2->setValue(100);
    setGameInfoText("Ready to play");
}


void MainWindow::on_btn_start_clicked()
{
    setGameInfoText("Game ongoing");
    elapsed = 0;

    // start(välein) timeout signaali tulee, jolloin slot ajetaan
    pQTimer = new QTimer(this);
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(updateProgressBar()));
    pQTimer->start(1000);
}
void MainWindow::on_btn_stop_clicked()
{
    pQTimer->stop();
    setGameInfoText("New game by selecting time and pressing start");
}


void MainWindow::setGameInfoText(QString s)
{
    ui->label_game->setText(s);
}


void MainWindow::updateProgressBar()
{
    elapsed += 1000; // +1 sec to elapsed count
    if (elapsed >= gameTime){
        pQTimer->stop();
        if(current_player1 == false) setGameInfoText("Player 1 WON!!!");
        else setGameInfoText("Player 2 WON!!!");
    }
    progress = ( (float)gameTime - (float)elapsed ) / (float)(gameTime) * (float)100;

    if(current_player1 == true) ui->progressBar_1->setValue(progress);
    else ui->progressBar_2->setValue(progress);
}
