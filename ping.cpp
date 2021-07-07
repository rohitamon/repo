#include "ping.h"
#include <QString>
#include <QDebug>
//#include <QtConcurrent/QtConcurrent>


ping::ping(QObject *parent):QObject(parent), running(false)
{
    pinger = new QProcess(this);
    connect(pinger, SIGNAL(started()), this, SLOT(verifyStatus()));
    connect(pinger, SIGNAL(finished(int)), this, SLOT(readResult()));
}


void ping::start_command(QString ip)
{
    if(pinger){
        QString command = "ping";
        QStringList args;
        args << "-w" <<  "3" <<  ip;
        pinger->start(command, args);
        pinger->waitForStarted(7000);
        running = true;
        pinger->waitForFinished(5000);
        int exit_code= pinger->exitCode();
        emit code(exit_code);
        pinger->close();

    }
}

bool ping::is_running()
{
    return running;
}

bool ping::finished()
{

      return pinger->atEnd();
}

void ping::verifyStatus()
{
    if(pinger->isReadable()){
        qDebug() << "reading ...";
        connect(pinger, SIGNAL(readyRead()), this, SLOT(readResult()));
        if(pinger->canReadLine()){
            qDebug() << "LINE read on ...";
        }
    }else{
        qDebug() << "not able to read ...";
    }
}

QString ping::readResult()
{

    running = false;
    return pinger->readLine();
}
