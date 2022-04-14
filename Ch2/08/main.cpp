// 사용자로부터 2개의 정수를 입력받은 뒤, 그 합을 출력하는 프로그램을 만드세요.
#include <iostream>
using namespace std;

int main() {
    cout << "2개의 정수를 공백으로 구분해서 입력하세요 : ";
    int a, b;
    cin >> a >> b;
    int sum = a + b;

    cout << "두 정수의 합은 : " << sum << "입니다.";
    return 0;
}