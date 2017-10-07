#ifndef CONTROL
#define CONTROL
#include <QThread>



/*extern    bool is_right = false;
extern    bool is_left = false;
extern    bool is_up = false;
extern     bool is_down = false;*/



class control : public QThread
{
    Q_OBJECT
public:
    control(){}
    virtual ~control() {}
    void run();
    void stop();
public slots:
    //void move_process();
    void pushbutton_move_right();
    void pushbutton_move_left();
    void pushbutton_move_go();
    void pushbutton_move_back();
    void pushbutton_move_close();
    void pushbutton_flashlight();
    void pushbutton_move_down();
    void pushbutton_move_up();
};

#endif // CONTROL

