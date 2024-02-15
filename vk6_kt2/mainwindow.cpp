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


void MainWindow::on_btn_clr_clicked()
{
    // reset LineEdits:
    ui->edit_num1->setText("");
    ui->edit_num2->setText("");
    ui->edit_result->setText("");

    num_state = 1;
    num1 = 0;
    num2 = 0;
    result = 0;
}

// -- num buttons
void MainWindow::on_btn_n1_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(1));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(1));
}

void MainWindow::on_btn_n2_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(2));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(2));
}

void MainWindow::on_btn_n3_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(3));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(3));
}

void MainWindow::on_btn_n4_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(4));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(4));
}

void MainWindow::on_btn_n5_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(5));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(5));
}

void MainWindow::on_btn_n6_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(6));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(6));
}

void MainWindow::on_btn_n7_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(7));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(7));
}

void MainWindow::on_btn_n8_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(8));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(8));
}

void MainWindow::on_btn_n9_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(9));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(9));
}

void MainWindow::on_btn_n0_clicked()
{
    if (num_state == 1) ui->edit_num1-> setText(QString::number(0));
    else if(num_state == 2) ui->edit_num2-> setText(QString::number(0));
}
// -- ----

// -- operation buttons
void MainWindow::on_btn_enter_clicked()
{
    if (num_state == 1) {
        num_state = 2; // if previous was 1, else go to the result state
        num1 = ui->edit_num1->text().toInt();
    }
    else {
        num_state = 3; // set result state
        num2 = ui->edit_num2->text().toInt();
    }
}


void MainWindow::on_btn_add_clicked()
{
    result = (float)num1 + (float)num2;
    ui->edit_result-> setText(QString::number(result));
}

void MainWindow::on_btn_sub_clicked()
{
    result = (float)num1 - (float)num2;
    ui->edit_result-> setText(QString::number(result));
}

void MainWindow::on_btn_mult_clicked()
{
    result = (float)num1 * (float)num2;
    ui->edit_result-> setText(QString::number(result));
}

void MainWindow::on_btn_div_clicked()
{
    result = (float)num1 / (float)num2;
    ui->edit_result-> setText(QString::number(result));
}
// -- ---
