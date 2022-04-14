// 세 자릿수의 정수가 주어졌을 때, 해당 숫자를 역순으로 하는 정수를 구성하고 출력하는 프로그램을 만드세요

#include <iostream>
using namespace std;

int main() {
    cout << "세 자릿수 정수를 입력하세요 : ";
    int num;
    cin >> num;
    int num1 = num/100;
    int num2 = (num - (num1*100))/10;
    int num3 = (num - (num1*100) - (num2*10));

    cout << "역순 : " << num3 << num2 << num1 << endl;
    return 0;
}