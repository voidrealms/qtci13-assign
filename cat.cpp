#include "cat.h"

Cat *Cat::createInstance()
{
    return new Cat();
}

Cat::Cat(QObject *parent) : QObject(parent)
{

}

Cat *Cat::instance()
{
    return Singleton<Cat>::instance(Cat::createInstance);
}
