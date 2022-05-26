#ifndef INC_11_2_11_6_PERSON_H
#define INC_11_2_11_6_PERSON_H

#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;

class Person {
private:
    long identity;
public:
    Person();
    Person(long identity);
    ~Person();
    Person(const Person& person);
    void print() const;
};
#endif //INC_11_2_11_6_PERSON_H
