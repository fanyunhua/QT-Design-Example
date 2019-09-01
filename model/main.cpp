#include "mainwindow.h"
#include <QApplication>
#include "parsermodel.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    GPSHandler *handler =  new GPSHandler;
//    handler->process("dsddd");
//    MainWindow w;
//    w.show();


    ParserModel model;

    model.handler("GPS");
    model.handler("Other");

    //    MainWindow w;
    //    w.show();
    return a.exec();
}
