#ifndef IHANDLER_H
#define IHANDLER_H

#include "baseobject.h"
#include <QString>
class IHandler:public BaseObject
{
public:
    IHandler(QObject *parent = 0);
    virtual void process(QString data) = 0;

    void setHandlerID(QString handlerID);

    QString getHandlerID();

    void setNextHandler(IHandler *handler);

//    IHandler getNextHandler();


    IHandler *_Nexthandler;
private:
    QString handlerID;
};

#endif // IHANDLER_H
