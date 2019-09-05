#ifndef IHANDLERTHREAD_H
#define IHANDLERTHREAD_H

#include <QThread>
#include <QMutex>
#include <QQueue>
class IHandlerThread : public QThread
{

private:
    IHandlerThread(){}
public:
    static IHandlerThread &Instance();

    void appendData(const QString &data);
protected:
    void run();
private:
    QQueue<QString> _dataQueue;
    QMutex _mutex;
};

#endif // IHANDLERTHREAD_H
