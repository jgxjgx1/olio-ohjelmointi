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
    void on_btn_clr_clicked();

    void on_btn_n1_clicked();
    void on_btn_n2_clicked();
    void on_btn_n3_clicked();
    void on_btn_n4_clicked();
    void on_btn_n5_clicked();
    void on_btn_n6_clicked();
    void on_btn_n7_clicked();
    void on_btn_n8_clicked();
    void on_btn_n9_clicked();
    void on_btn_n0_clicked();

    void on_btn_enter_clicked();

    void on_btn_add_clicked();
    void on_btn_sub_clicked();
    void on_btn_mult_clicked();
    void on_btn_div_clicked();

private:
    Ui::MainWindow *ui;
    short num_state = 1;

    int num1 = 0;
    int num2 = 0;
    float result = 0;
};
#endif // MAINWINDOW_H
