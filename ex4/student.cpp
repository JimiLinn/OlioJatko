#include "student.h"

QString student::getFirstName() const
{
    return firstName;
}

void student::setFirstName(const QString &value)
{
    firstName = value;
}

QString student::getLastName() const
{
    return lastName;
}

void student::setLastName(const QString &value)
{
    lastName = value;
}

student::student()
{

}
