// 사용자로부터 패턴의 종류(1~4)와 크기(1~9)를 입력받고 다음과 같은
// 패턴을 출력하는 프로그램을 만드세요.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "패턴의 종류와 크기를 입력하세요 : ";
    int type, size;
    cin >> type >> size;

    if(type == 1) {
        for(int i = 1 ; i <= size; i++) {
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if(type == 2) {
        for(int i = 1 ; i <= size; i++) {
            for(int j = 0; j <= (size-i); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if(type == 3) {
        for(int i = 1 ; i <= size; i++) {
            for(int k = 1; k < i; k++) {
                cout <<" ";
            }
            for(int j = 0; j <= (size-i); j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else {
        for(int i = 1 ; i <= size; i++) {
            for(int k = 0; k < (size-i); k++) {
                cout <<" ";
            }
            for(int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}