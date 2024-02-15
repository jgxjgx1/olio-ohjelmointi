#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_count_clicked()
{
    QString txt = QString::number(n+1);
    ui->edit_field->setText(txt);
    n += 1;
}


void MainWindow::on_btn_reset_clicked()
{
    n = 0;
    ui->edit_field->setText("0");
}

