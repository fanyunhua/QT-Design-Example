#ifndef OTHERHANDLER_H
#define OTHERHANDLER_H

#include "ihandler.h"
class OtherHandler:public IHandler
{
public:
    OtherHandler();
    void process(QString data);
};

#endif // OTHERHANDLER_H
