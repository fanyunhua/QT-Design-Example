#ifndef DATAHANDLER_H
#define DATAHANDLER_H
#include "ihandler.h"
#include <QTimer>
class DataHandler:public IHandler
{
public:
    DataHandler();
    void process(QString data);
private:
    QTimer *_timer;
};


#endif // DATAHANDLER_H
