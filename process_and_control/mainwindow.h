#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include<opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "control.h"

namespace Ui {
class MainWindow;
}


/*class MyThread:public QThread
{
    Q_OBJECT
protected:
    void movepicture();
private:
    QTimer *timers;
private slots:
       void move_process();
};*/


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    cv::Mat frame;
    cv::VideoCapture capture;
    QImage image;
    QTimer *timer;
    //QTimer *timers;
    double rate;   //FPS
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent *even);
    //void closeEvent(QCloseEvent *eve);
    //void keyReleaseEvent(QKeyEvent *even);
    control *con;
signals:
    void back();
    void go();
    void left();
    void right();
    void finish();

private slots   :
    void nextFrame();
    void process();
    void pushbutton_open_clicked();
    //void move_process();
    /*void pushbutton_move_right();
    void pushbutton_move_left();
    void pushbutton_move_up();
    void pushbutton_move_down();*/
};

#endif // MAINWINDOW_H
