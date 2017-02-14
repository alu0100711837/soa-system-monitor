#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QDir>

class MyThread : public QThread
{
    Q_OBJECT

    protected:
        void run();
};

#endif // MYTHREAD_H
