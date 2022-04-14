// 다음과 같은 알파벳 H로, 큰 알파벳 H를 출력하는 프로그램을 만드세요.
//H     H
//H     H
//HHHHHHH
//H     H
//H     H

#include <iostream>
using namespace std;

void printTwoH() {
    cout << "H      H" << endl;
}

void printSevenH() {
    cout <<"HHHHHHHH" << endl;
}

int main() {

    printTwoH();
    printTwoH();
    printSevenH();
    printTwoH();
    printTwoH();

    return 0;
}
