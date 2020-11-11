#include "person.h"

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &value)
{
    name = value;
}

Person::Person()
{

}
