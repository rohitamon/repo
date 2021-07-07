#ifndef PING_H
#define PING_H

#include <QObject>
#include <QProcess>


class ping: public QObject
{
    Q_OBJECT

public:
    explicit ping(QObject *parent = 0);
    //~ping();

    void start_command(QString ip);
    bool is_running();
    bool finished();
signals:
    void code(int no);

public slots:
    void verifyStatus();
    QString readResult();

private:
    QProcess *pinger;
    bool running;


};

#endif // PING_H
