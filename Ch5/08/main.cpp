#include <iostream>
using namespace std;

int main() {
    cout << "양의 정수를 입력하세요 : ";
    int num;
    cin >> num;

    int count = 1;
    while(count <= num) {
        if(num % count == 0) {
            cout << count << " ";
        }
        count++;
    }
    cout << endl;
    return 0;
}
