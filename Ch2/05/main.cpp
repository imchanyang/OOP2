// 사용자로부터 4개의 숫자를 입력받고, 그 합을 출력하는 프로그램을 만드세요.
#include <iostream>
using namespace std;

int main() {

    cout << "4개의 숫자(정수)를 공백으로 구분해서 입력하세요 : ";
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sum = a + b + c + d;
    cout << "숫자의 합은 : " << sum << "입니다." << endl;
    return 0;
}