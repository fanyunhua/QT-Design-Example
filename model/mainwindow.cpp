#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ihandlerthread.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _Timer = new QTimer;
    _Timer->setInterval(1000);
    _Timer->start();
    connect(_Timer,&QTimer::timeout,[]()
    {
        IHandlerThread::Instance().appendData("GPS");
        IHandlerThread::Instance().appendData("Other");
    });

    IHandlerThread::Instance().start();
//    IHandlerThread::Instance().appendData("GPS");
}

MainWindow::~MainWindow()
{
    delete ui;
}
