#include "ta.h"
// Constructor
TA :: TA (string nm, double gp, double sal)
: Person (nm){
    gpa = gp;
    salary = sal;
}

void TA :: printGPA (){
    cout << "GPA: " << gpa << endl;
}

void TA :: printSalary (){
    cout << "Salary: ";
    cout << fixed << setprecision (2) << salary << endl;
}

void TA :: print (){
    Person :: print();
    printGPA ();
    printSalary();
}
