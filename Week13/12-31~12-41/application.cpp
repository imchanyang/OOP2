#include "student.h"
#include "professor.h"
#include "ta.h"

int main ( ){
    Person per ("John");
    Student std ("Linda", 3.9);
    Professor prf("George", 89000);
    TA ta ("Lucien", 3.8, 23000);

    cout << "Person 정보" << endl;
    per.print();
    cout << endl << endl;

    cout << "Student 정보" << endl;
    std.print ();
    cout << endl << endl;

    cout << "Professor 정보" << endl;
    prf.print();
    cout << endl << endl;

    cout << "TA 정보" << endl;
    ta.print();
    cout << endl << endl;
    return 0;
}