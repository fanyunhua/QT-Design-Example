#ifndef PARSERMODEL_H
#define PARSERMODEL_H

#include "imodel.h"
class ParserModel:public IModel
{
private:
    ParserModel();
public:
    void InitHandler();
    static ParserModel &Instance();
};
#endif // PARSERMODEL_H
