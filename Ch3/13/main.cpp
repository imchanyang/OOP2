// 아르바이트로 일주일에 기본 40시간을 일한다고 가정합니다. 그리고 40시간을 넘게 일을 하는 경우, 넘는 시급은
// 60% 추가로 지급됩니다. 일주일의 기본 급여와 추가로 일한 시간을 입력했을 때, 전체 급여를 구하는 프로그램을 작성하세요.

#include <iostream>

using namespace std;

int main() {
    cout << "일주일의 기본 급여와 추가로 일한 시간을 공백으로 구분해서 입력하세요 : ";
    int salary, addHour;
    cin >> salary >> addHour;

    double salaryPerHour = salary / 40.0;
    double totalSalary = salary + salaryPerHour*1.6*addHour;
    cout << "전체 급여는 : " << totalSalary << endl;
    return 0;
}