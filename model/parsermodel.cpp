#include "parsermodel.h"
#include "datahandler.h"
#include "otherhandler.h"
ParserModel::ParserModel()
{
    InitHandler();
}

void ParserModel::InitHandler()
{
    DataHandler *gps = new DataHandler;
    gps->setHandlerID("GPS");
    _Handler = gps;

    OtherHandler *other = new OtherHandler;
    other->setHandlerID("Other");
    _Handler->setNextHandler(other);

    other->_Nexthandler = 0;
}
