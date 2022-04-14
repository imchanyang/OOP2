// 다음과 같은 삼각형을 * 기호로 출력하는 프로그램을 만드세요.
//*
//**
//***
#include <iostream>

using namespace std;

int main() {

    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}