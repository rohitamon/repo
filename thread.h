#ifndef THREAD_H
#define THREAD_H
#include <QThread>

class Thread : public QThread
{
    Q_OBJECT
public:
    explicit Thread(QObject *parent=nullptr);
    void run();

signals:
    void joystick(bool);
    void button_val(int,bool);
    void axis_val(int,int);
    void direction(QString);
};

#endif // THREAD_H
