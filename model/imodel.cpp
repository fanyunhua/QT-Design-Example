#include "imodel.h"

IModel::IModel(QObject *parent):BaseObject(parent)
{
    _Handler = 0;
}

IModel::~IModel()
{

}

void IModel::handler(QString str)
{
    IHandler * handler = _Handler;
    while (handler!=0) {
        if(handler->getHandlerID()==str)
        {
            handler->process(str);
        }
        handler = handler->_Nexthandler;
    }
}
