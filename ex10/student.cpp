
#include "student.h"

student::student()
{

}

Qstring student::getFirstName() const
{
    return firstName;
}

void student::setFirstName(const Qstring &value)
{
    firstName = value;
}

Qstring student::getLastName() const
{
    return lastName;
}

void student::setLastName(const Qstring &value)
{
    lastName = value;
}

Qstring student::getFirstname() const
{
    return firstname;
}

void student::setFirstname(const Qstring &value)
{
    firstname = value;
}

Qstring student::getLastname() const
{
    return lastname;
}

void student::setLastname(const Qstring &value)
{
    lastname = value;
}
