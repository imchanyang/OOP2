#ifndef PERSON_H
#define PERSON_H
#include "date.h"

class Person{
private:
    long identity;
    Date birthDate;
public:
    Person(long identity, Date birthDate);
    ~Person();
    void print() const;
};
#endif