#ifndef PERSON_H
#define PERSON_H
#include <QString>

class Person
{
    private:
    QString name;
public:
    Person();
    QString getName() const;
    void setName(const QString &value);
};

#endif // PERSON_H
