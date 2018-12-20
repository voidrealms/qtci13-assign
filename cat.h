#ifndef CAT_H
#define CAT_H

#include <QObject>
#include "singleton.h"

class Cat : public QObject
{
    Q_OBJECT
    static Cat* createInstance();
public:
    explicit Cat(QObject *parent = nullptr);
    static Cat* instance();
    QString name;
    int age;

signals:

public slots:
};

#endif // CAT_H
