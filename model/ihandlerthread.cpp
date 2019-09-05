#include "ihandlerthread.h"
#include "parsermodel.h"
#include <QDebug>

IHandlerThread &IHandlerThread::Instance()
{

    static IHandlerThread *_handlerThread ;
    if(_handlerThread==NULL)
    {
        _handlerThread = new IHandlerThread;
    }
    return *_handlerThread;
}

void IHandlerThread::appendData(const QString &data)
{
    _mutex.lock();
    _dataQueue.enqueue(data);
    _mutex.unlock();
}

void IHandlerThread::run()
{
    while (1) {
        if(_dataQueue.size()>0){
            _mutex.lock();
            QString data = _dataQueue.dequeue();
            _mutex.unlock();
            ParserModel::Instance().handler(data);
        }
        qDebug()<<"1";
        msleep(100);
    }
}
