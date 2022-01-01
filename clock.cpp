#include "clock.h"
#include <QtCore>
#include <ctime>

Clock::Clock(QObject *parent)
    : QThread{parent}
{

}

void Clock::run()
{
    while(true)
    {
        QMutex mutex;
        mutex.lock();
        if(this->stop) return;
        time_t now = time(0);
        tm *ltm = localtime(&now);
        mutex.unlock();
        emit getTime(ltm->tm_hour, ltm->tm_min);
        this->sleep(1);
    }
}
