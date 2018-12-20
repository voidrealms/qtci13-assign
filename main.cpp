#include <QCoreApplication>
#include <QDebug>
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat::instance()->age = 4;
    Cat::instance()->name = "Othello";
    Cat* cat = Cat::instance();

    qInfo() << cat->name << " is " << QString::number(cat->age);

    return a.exec();
}
