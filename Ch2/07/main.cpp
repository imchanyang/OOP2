// 사용자로부터 성과 이름을 입력받은 뒤, 다음과 같이 서양식 이름 표현으로 성과 이름을 출력하는 프로그램을 만드세요.
// 서양식 이름 표현 이름, 성 ex) 찬양, 임

#include <iostream>
using namespace std;

int main() {
    cout << "성과 이름을 공백으로 구분해서 입력하세요 : ";
    string lastName; // 성
    string firstName; // 이름

    cin >> lastName >> firstName;
    cout << "서양식 표현 : " << firstName << ", " << lastName << endl;
    return 0;
}