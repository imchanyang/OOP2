#include <iostream>
using namespace std;
int main () {
    int temperature;
    bool hot;
    bool cold;

    cout << "현재 온도를 입력하세요: ";
    cin >> temperature;

    hot = temperature >= 23;
    cold = temperature <= 15;

    if (hot || cold) {
        cout << "에어컨이 켜집니다." << endl;
        if (hot) {
            cout << "냉방 모드로 작동합니다." << endl;
        }
        else {
            cout << "난방 모드로 작동합니다." << endl;
        }
    }
    else {
        cout << "에어컨이 꺼집니다." << endl;
    }
    return 0;
}