#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    Employee(string name, int age, int serviceYear, double salary);
    ~Employee();

    string getName() const;
    int getAge() const;
    int getServiceYear() const;
    double getSalary() const;
};

int main() {

    Employee e("chanyang", 26, 2020, 1231.123);
    cout << e.getName() << endl;
    cout << e.getAge() << endl;
    cout << e.getServiceYear() << endl;
    cout << e.getSalary() << endl;

    return 0;
}

Employee::Employee(string name, int age, int serviceYear, double salary)
: name(name), age(age), serviceYear(serviceYear), salary(salary)
{

}

Employee::~Employee() {}

string Employee::getName() const {
    return name;
}

int Employee::getAge() const {
    return age;
}

int Employee::getServiceYear() const {
    return serviceYear;
}

double Employee::getSalary() const {
    return salary;
}
