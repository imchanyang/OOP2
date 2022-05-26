#include "Student.h"
int main ( ){
    Person* ptr;

    ptr = new Person ("Lucie");
    cout << "Person 정보" << endl;
    ptr -> print();
    cout << endl;
    delete ptr;

    ptr = new Student ("John", 3.9);
    cout << "Student 정보" << endl;
    ptr -> print();
    cout << endl;
    delete ptr;
    return 0;
}