#ifndef IMODEL_H
#define IMODEL_H

#include "baseobject.h"
#include "ihandler.h"
class IModel: public BaseObject
{
public:
    IModel(QObject *parent = 0);
    ~IModel();
    virtual void InitHandler() = 0;
    void handler(QString str);
protected:
    IHandler *_Handler;
};

#endif // IMODEL_H
