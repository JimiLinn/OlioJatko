#ifndef STUDENT_H
#define STUDENT_H
#include <QString>
class student
{
public:
    student();
    QString getFirstName() const;
    void setFirstName(const QString &value);

    QString getLastName() const;
    void setLastName(const QString &value);

private:
    QString firstName;
    QString lastName;
};

#endif // STUDENT_H
