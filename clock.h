#ifndef CLOCK_H
#define CLOCK_H

#include <QThread>

class Clock : public QThread
{
    Q_OBJECT
public:
    explicit Clock(QObject *parent = nullptr);
    void run();
    bool stop = false;
signals:
    void getTime(int, int, int, int, int);
};

#endif // CLOCK_H
