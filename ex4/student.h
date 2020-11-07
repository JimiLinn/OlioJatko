#ifndef STUDENT_H
#define STUDENT_H

#include <QString>



class student
{
private:
    QString firstName;
    QString lastName;
public:
    student();
    QString getFirstName() const;
    void setFirstName(const QString &value);
    QString getLastName() const;
    void setLastName(const QString &value);
};

#endif // STUDENT_H
