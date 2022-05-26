#include "employee.h"

Employee :: Employee (string nm, double sa)
:Person (nm), salary (sa){
}

Employee :: ~Employee(){
}

void Employee :: print () const{
    Person :: print();
    cout << "급여: " << salary << endl;
}