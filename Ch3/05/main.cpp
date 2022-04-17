// int 자료형의 정수를 입력받아서, 첫 번째 부터 세번째 자릿수를 각각 출력하는 프로그램을 만드세요.
#include <iostream>

using namespace std;

int main() {
    cout << "int 자료형 정수를 입력하세요 : ";
    int num;
    cin >> num;

    int num1, num2, num3;
    num1 = num%10;
    num2 = ((num%100) - num1)/10;
    num3 = num/100;

    cout << "첫 번째 자릿 수 : " << num1 << endl;
    cout << "두 번째 자릿 수 : " << num2 << endl;
    cout << "세 번째 자릿 수 : " << num3 << endl;

    return 0;
}