#include <iostream>
using namespace std;

int main() {
    cout << "패턴의 종류와 크기를 입력하세요 : ";
    int type, size;
    cin >> type >> size;

    if(type == 1) {
        for(int i = 0 ; i < size; i++) {
            for(int j = 0; j < i; j++){
                cout << " ";
            }
            for(int k = 0; k < ((2*size-1)-2*i); k++){
                cout << "*";
            }
            for(int r = 0; r < i; r++){
                cout << " ";
            }
            cout << endl;
        }
    }
    else {
        for(int i = 0 ; i < size; i++) {
            for(int j = 1; j < size-i; j++){
                cout << " ";
            }
            for(int k = 0; k <= 2*i; k++){
                cout << "*";
            }
            for(int r = 1; r < size-i; r++){
                cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}