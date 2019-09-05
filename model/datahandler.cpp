#include "datahandler.h"
#include <QDebug>


//线程中定时器不好使，因为被while 1 阻塞了，接收不到信号，要想在线程中使用信号槽需要在run函数里面加this.exec()
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
