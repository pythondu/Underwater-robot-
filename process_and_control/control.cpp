#include "control.h"
#include "mainwindow.h"
#include <QDebug>
#include <QProcess>



void control::run()
{
    /*QProcess *move = new QProcess();
    if(is_right)
       move->execute("python /home/tony/picture/right_all.py");
    if(is_left)
        move->execute("python /home/tony/picture/left_all.py");
    if(is_up)
        move->execute("python /home/tony/picture/up_all.py");
    if(is_down)
        move->execute("python /home/tony/picture/down_all.py");
    //exec();*/
}

void control::stop()
{
   control::quit();
}

void control::pushbutton_move_right()
{
    QProcess *p_right =new QProcess();
    qDebug()<<"right";
    p_right->start("python /home/zlm/picture/turn-right.py");
    //is_right = true;
}


void control::pushbutton_move_left()
{
    QProcess *p_left =new QProcess();
    qDebug()<<"left";
    p_left->start("python /home/zlm/picture/turn-left.py");
    //is_left = true;
}

void control::pushbutton_move_back()
{
    QProcess *p_back =new QProcess();
    qDebug()<<"back";
    p_back->start("python /home/zlm/picture/back.py");
    //is_down = true;
}

void control::pushbutton_move_go()
{
    QProcess *p_go =new QProcess();
    qDebug()<<"go";
    p_go->start("python /home/zlm/picture/go.py");
   // is_up = true;
}

void control::pushbutton_move_down()
{
    QProcess *p_down = new QProcess();
    qDebug()<<"down";
    p_down->start("python /home/zlm/picture/down.py");
}

void control::pushbutton_move_up()
{
    QProcess *p_up= new QProcess();
    qDebug()<<"up";
    p_up->start("python /home/zlm/picture/up.py");
}

void control::pushbutton_flashlight()
{
    QProcess *p_light= new QProcess();
    qDebug()<<"lightening";
    p_light->start("python /home/zlm/picture/light.py");
}

void control::pushbutton_move_close()
{
    QProcess *p_end = new QProcess();
    //QProcess *p_clean = new QProcess();
     qDebug()<<"quit";
     p_end->start("python3 /home/zlm/picture/pid_copy.py");
     //p_clean->start("python /home/tony/picture/cleanup_all.py");
     //qDebug()<<"ok";
    stop();
}


