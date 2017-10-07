#ifndef MOVEPICTURE
#define MOVEPICTURE

#include <QProcess>
#include <QThread>
#include <qtimer.h>

class movepic : public QThread
{
    Q_OBJECT
public:
    movepic() {}
    virtual ~movepic() {}
    void run();
    void stop();
private:
    QTimer *timers;
private slots:
    void move_process();
};
#endif // MOVEPICTURE

