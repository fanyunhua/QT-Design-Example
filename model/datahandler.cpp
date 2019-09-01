#include "datahandler.h"
#include <QDebug>

DataHandler::DataHandler()
{
    _timer = new QTimer;

//    _timer->start(1000);
//    connect(_timer,&QTimer::timeout,[=]()
//    {
//        qDebug()<<"sd";
//    });
}

void DataHandler::process(QString data)
{
    qDebug()<<"gps";
}
