#include "movepicture.h"
#include <QDebug>

void movepic::run()
{
    /*timers = new QTimer(this);
    timers->setInterval(1000);
    connect(timers,SIGNAL(timeout()),this,SLOT(move_process()));
    timers->start();*/
    while(1)
    {
        qDebug()<<"god is good";
        QProcess proc;
        proc.start("python /home/zlm/picture/moveIcan_multi.py");
        sleep(10);
    }
}

/*void movepic::move_process()
{
    qDebug()<<"god is good";
    QProcess *proc= new QProcess();
    proc->start("python /home/tony/picture/moveIcan_multi.py");
}
*/
