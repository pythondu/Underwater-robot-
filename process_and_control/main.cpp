#include "mainwindow.h"
#include "movepicture.h"
#include "control.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    //control b;
    movepic m ;
    m.start();

    control n;
    n.start();

    if(n.isFinished())
    {
        qDebug()<<"finished";
    }

    if(n.isRunning())
    {
        qDebug()<<"runing";
    }
   // c.start();
   // b.start();

   // c.wait();
    //b.wait();


    return a.exec();
}
