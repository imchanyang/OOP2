#include <iostream>
using namespace std;

int main() {

    cout << "양의 정수 2개를 입력하세요 : ";
    int num1, num2;
    cin >> num1 >> num2;

    if(num1 % 2 == 0) {
        int count = num1 + 2;
        while(count < num2) {
            cout << count << " ";
            count += 2;
        }
        cout << endl;

        count = num1 + 1;
        while(count < num2) {
            cout << count << " ";
            count += 2;
        }
        cout << endl;
    }
    else {
        int count = num1 + 1;
        while(count < num2) {
            cout << count << " ";
            count += 2;
        }
        cout << endl;

        count = num1 + 2;
        while(count < num2) {
            cout << count << " ";
            count += 2;
        }
        cout << endl;
    }
    return 0;
}