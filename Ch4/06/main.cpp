// 대학교에서 학생의 총 수업료를 계산하고 출력하는 프로그램을 만드세요. 학생들은 최대 12학점에 대해
// 학점 당 10달러의 수수료를 지불합니다. 12학점을 넘는 분랼은 수수료가 없습니다.
// 등록비는 학생당 10달러라고 가정합니다.

#include <iostream>

using namespace std;

int main() {

    cout << "이번 학기 수강하는 총 학점을 입력하세요 : ";
    int credit;
    cin >> credit;

    if(credit <= 12) {
        cout << "이번 학기 총 수업료는 " << 10 + (credit*10) << "달러 입니다." << endl;
    }
    else {
        cout << "이번 학기 총 수업료는 " << 10 + (12*10) << "달러 입니다." << endl;
    }
    return 0;
}