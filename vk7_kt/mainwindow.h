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

public slots:
    void updateProgressBar();

private slots:
    void on_btn_switch1_clicked();
    void on_btn_switch2_clicked();

    void on_btn_120s_clicked();
    void on_btn_5min_clicked();

    void on_btn_start_clicked();
    void on_btn_stop_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;

    bool current_player1 = true;

    int gameTime; // time selected with the button
    int elapsed = 0;
    float progress = 0;

    void setGameInfoText(QString);

signals:
    void timeout();
};
#endif // MAINWINDOW_H
