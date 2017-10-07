#include "move_picture.h"

void movepic::run()
{
    timers = new QTimer(this);
    timers->setInterval(8000);
    connect(timers,SIGNAL(timeout()),this,SLOT(move_process()));
    timers->start();
}

void movepic::move_process()
{
    QProcess *proc= new QProcess();
    proc->execute("python /home/tony/picture/moveIcan_multi.py");
}
