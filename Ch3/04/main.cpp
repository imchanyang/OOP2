// int 자료형의 정수를 입력받아서, 두 번째 자릿수를 추출한 뒤 출력하는 프로그램을 만드세요
#include <iostream>
using namespace std;

int main() {
    cout << "정수를 입력하세요 : ";
    int num1;
    cin >> num1;
    num1 = num1 % 100;
    num1 = num1/10;

    cout << "입력한 정수의 두 번째 자릿수 : " << num1;

    return 0;
}