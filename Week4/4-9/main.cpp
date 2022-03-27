#include <iostream>
using namespace std;
int main () {
    int year;
    bool divBy400, divBy4, divBy100;
    bool leapYear;

    cout << "연도를 입력하세요: ";
    cin >> year;

    divBy400 = ((year % 400) == 0);
    divBy4 = ((year % 4) == 0);
    divBy100 = ((year % 100) == 0);
    leapYear = (divBy400) || (divBy4 && !(divBy100));
    if (leapYear) {
        cout << year << "년은 윤년입니다." << endl;
    }
    else {
        cout << year << "년은 윤년이 아닙니다." << endl;
    }

    return 0;
}