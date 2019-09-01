/***
 *
 *
 * @create by 2019.8.29
 * @auther fyh
 * 所有的类都应该继承于BaseObject 他继承了QObject 单线程模式下可以使用信号槽机制
 * 如果派生类加上 Q_OBJECT宏报错，执行qmake 并rebuild就可以了
 */
#ifndef BASEIHANDLER_H
#define BASEIHANDLER_H

#include <QObject>

class BaseObject : public QObject
{
    Q_OBJECT
public:
    explicit BaseObject(QObject *parent = 0):QObject(parent)
    {

    }

    BaseObject()
    {

    }

    ~BaseObject()
    {

    }

signals:

public slots:
};

#endif // BASEIHANDLER_H
