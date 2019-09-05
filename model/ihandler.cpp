#include "ihandler.h"

IHandler::IHandler(QObject *parent):BaseObject(parent)
{

}

void IHandler::setHandlerID(const QString handlerID)
{
    this->handlerID = handlerID;
}

QString IHandler::getHandlerID()
{
    return this->handlerID;
}

void IHandler::setNextHandler(IHandler *handler)
{
    this->_Nexthandler = handler;

}
