#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "qpainter.h"
#include "qtimer.h"
#include "qlabel.h"
#include "qimage.h"
#include "qpixmap.h"
#include "qevent.h"
#include <QProcess>
#include <QDir>
#include <QDebug>
#include <QPainter>
#include <QIcon>
#include <QKeyEvent>


using namespace cv;
using namespace std;

//-----------------------------------【全局变量声明部分】--------------------------------------
//		描述：全局变量的声明
//-----------------------------------------------------------------------------------------------
int g_nThresholdValue = 25;
int g_nThresholdType = 0;
char str[25];

//-----------------------------------【全局函数声明部分】--------------------------------------
//		描述：全局函数的声明
//-----------------------------------------------------------------------------------------------
//static void ShowHelpText();//输出帮助文字

void drawDetectLines(cv::Mat & frame, const vector<Vec4i>& lines, cv::Scalar & color)
{
    // 将检测到的直线在图上画出来
    vector<Vec4i>::const_iterator it = lines.begin();
    while (it != lines.end())
    {
        Point pt1((*it)[0], (*it)[1]);
        Point pt2((*it)[2], (*it)[3]);
        line(frame, pt1, pt2, color, 2); //  线条宽度设置为2
        ++it;
    }
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setScaledContents(true);
    setFocus();

    con =new control();

    /*QIcon ico_play(":/image/play.jpg");
    QIcon ico_up(":/image/up.jpg");
    QIcon ico_down(":/image/down.jpg");
    QIcon ico_left(":/image/left.jpg");
    QIcon ico_right(":/image/right.jpg");*/

    ui->pushButton_down->setFlat(true);
    ui->pushButton_left->setFlat(true);
    ui->pushButton_open->setFlat(true);
    ui->pushButton_right->setFlat(true);
    ui->pushButton_up->setFlat(true);

    //control *con = new control();

    /*ui->pushButton_open->setIcon(ico_play);
    //ui->pushButton_open->setIconSize(QSize(81,31));
    ui->pushButton_up->setIcon(ico_up);
    //ui->pushButton_up->setIconSize(QSize(81,31));
    ui->pushButton_down->setIcon(ico_down);
   // ui->pushButton_down->setIconSize(QSize(81,31));
    ui->pushButton_left->setIcon(ico_left);
    //ui->pushButton_left->setIconSize(QSize(81,31));
    ui->pushButton_right->setIcon(ico_right);
    //ui->pushButton_right->setIconSize(QSize(81,31));*/


    connect(ui->pushButton_open,SIGNAL(clicked(bool)),this,SLOT(pushbutton_open_clicked()));
    //connect(ui->pushButton_move,SIGNAL(clicked(bool)),this,SLOT(pushbutton_move_process()));
    connect(ui->pushButton_right,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_right()));
    connect(ui->pushButton_left,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_left()));
    connect(ui->pushButton_down,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_back()));
    connect(ui->pushButton_up,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_go()));
    connect(ui->pushButton_light,SIGNAL(clicked(bool)),con,SLOT(pushbutton_flashlight()));


    connect(this,SIGNAL(up()),con,SLOT(pushbutton_move_up()));
    connect(this,SIGNAL(down()),con,SLOT(pushbutton_move_down()));
    connect(this,SIGNAL(left()),con,SLOT(pushbutton_move_left()));
    connect(this,SIGNAL(right()),con,SLOT(pushbutton_move_right()));
    connect(this,SIGNAL(finish()),con,SLOT(pushbutton_move_close()));

    connect(ui->pushButton_float,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_up()));
    connect(ui->pushButton_sink,SIGNAL(clicked(bool)),con,SLOT(pushbutton_move_down()));



}

MainWindow::~MainWindow()
{
    delete ui;
}


QImage Mat2QImage(cv::Mat cvImg)
{
    QImage qImg;
    if(cvImg.channels()==3)
    {
        cv::cvtColor(cvImg,cvImg,CV_BGR2RGB);
        qImg =QImage((const unsigned char*)(cvImg.data),
                     cvImg.cols, cvImg.rows,
                     cvImg.cols*cvImg.channels(),
                     QImage::Format_RGB888);
    }
    else if(cvImg.channels()==1)
    {
       qImg =QImage((const unsigned char*)(cvImg.data),
               cvImg.cols,cvImg.rows,
               cvImg.cols*cvImg.channels(),
               QImage::Format_RGB888);
    }
    else
    {
        qImg =QImage((const unsigned char*)(cvImg.data),
                     cvImg.cols,cvImg.rows,
                     cvImg.cols*cvImg.channels(),
                     QImage::Format_RGB888);
    }
    return qImg;
}

void MainWindow::process()
{
    //char str[25];
    vector<int>compression_params;
    compression_params.push_back(IMWRITE_PNG_COMPRESSION);
    compression_params.push_back(9);
    cv::Mat dstImage;
    cvtColor(frame, dstImage, CV_BGR2GRAY);
    cv::Mat contours;
    Canny(dstImage, contours, 125, 350);
    threshold(contours, contours, 128, 255, THRESH_BINARY);
    //imwrite("Canny图" + (String)str + ".png", contours, compression_params);
    vector<Vec4i> lines;
    // 检测直线，最小投票为90，线条不短于50，间隙不小于10
    HoughLinesP(contours, lines, 1, CV_PI / 180, 80, 50, 10);



    //筛选可疑的图片，并进行存储
    int numbers = lines.size();
    cv::Scalar color = (0,255,0);
    if (numbers > 0)
    {
        //drawDetectLines(frame, lines, cv::Scalar(0, 255, 0));
           drawDetectLines(frame, lines, color);
        imwrite("可疑图" + (String)str + ".png", frame, compression_params);
    }

}

void MainWindow::nextFrame()
{
    capture >> frame;
    if(!frame.empty())
    {
        image =Mat2QImage(frame);
        ui->label->setPixmap(QPixmap::fromImage(image));
    }
}


void MainWindow::pushbutton_open_clicked()
{
    if(capture.isOpened())
        capture.release();
    //capture.open("http://192.168.1.117:8080/?action=stream?dummy=param.mjpg");
    capture.open(0);
    if (capture.isOpened())
    {
        rate =capture.get(CV_CAP_PROP_FPS);
        capture >> frame;
        if(!frame.empty())
        {
            image =Mat2QImage(frame);
            ui->label->setPixmap(QPixmap::fromImage(image));
            timer = new QTimer(this);
            timer->setInterval(10/rate);    //set timer match with FPS
            connect(timer,SIGNAL(timeout()),this,SLOT(nextFrame()));
            connect(timer,SIGNAL(timeout()),this,SLOT(process()));
           // connect(timer,SIGNAL(timeout()),this,SLOT(pushbutton_move_process()));
            timer->start();

            /*timers = new QTimer(this);
            timers->setInterval(8000);
            connect(timers,SIGNAL(timeout()),this,SLOT(move_process()));
            timers->start();*/
        }
    }
}


/*void MainWindow::move_process()
{
    QProcess *proc= new QProcess();
    proc->execute("python /home/tony/picture/moveIcan_multi.py");
}*/

/*void MainWindow::pushbutton_move_right()
{
    QProcess *p_right =new QProcess();
    p_right->execute("python /home/tony/picture/right.py");
}


void MainWindow::pushbutton_move_left()
{
    QProcess *p_left =new QProcess();
    p_left->execute("python /home/tony/picture/left.py");
}

void MainWindow::pushbutton_move_down()
{
    QProcess *p_down =new QProcess();
    p_down->execute("python /home/tony/picture/down.py");
}

void MainWindow::pushbutton_move_up()
{
    QProcess *p_up =new QProcess();
    p_up->execute("python /home/tony/picture/up.py");
}
*/

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_A)
    {
        //pushbutton_move_left();
        //is_left = true;
        emit left();
    }
    if(event->key()==Qt::Key_W)
    {
        //pushbutton_move_up();
        //is_up = true;
        emit  go();
    }
    if(event->key()==Qt::Key_D)
    {
        //pushbutton_move_right();
        //con->start();
        //is_right = true;
        emit right();
    }
    if(event->key()==Qt::Key_S)
    {
        //pushbutton_move_down();
        //con->start();
        // is_down = true;
         emit back();
    }
    /*if(event->key()==Qt::Key_T)
    {
        emit finish();
     }*/
}

void MainWindow::mousePressEvent(QMouseEvent *even)
{
    emit finish();
}

/*void MainWindow::closeEvent(QCloseEvent *eve)
{

}*/
/*void MainWindow::keyReleaseEvent(QKeyEvent *even)
{
    if(even->key()==Qt::Key_A)
    {
        is_left = false;
    }
    if(even->key()==Qt::Key_W)
    {
        is_up = false;
    }
    if(even->key()==Qt::Key_D)
    {
        is_right = false;
    }
    if(even->key()==Qt::Key_S)
    {
         is_down = false;
    }
}*/
/*
void MyThread::move_process()
{
    QProcess *proc= new QProcess();
    proc->execute("python /home/tony/picture/moveIcan_multi.py");
}
void MyThread::movepicture()
{
    timers = new QTimer(this);
    timers->setInterval(100);    //set timer match with FPS

    connect(timers,SIGNAL(timeout()),this,SLOT(move_process()));

    timers->start();
}
*/
