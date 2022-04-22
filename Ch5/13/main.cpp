#include <iostream>

using namespace std;

int main() {
    cout << "양의 정수를 입력하세요 : ";
    int num;
    cin >> num;

    int sum = 0;
    for(int i = num; i > 0; i = i/10) {
        sum += i%10;
    }
    cout << sum << endl;
    return 0;
}