#include "student.h"

int main() {
    Person person (111111111);
    cout << "Person 객체의 정보: " << endl;
    person.print();
    cout << endl;

    Student student (222222222, 3.9);
    cout << "Student 객체의 정보: " << endl;
    student.print ();
    cout << endl;
    return 0;
}