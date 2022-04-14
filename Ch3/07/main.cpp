// 시간을 입력으로 받았을 때, 이를 주, 일, 시간으로 변환하는 프로그램을 만드세요
#include <iostream>
using namespace std;

int main() {
    cout << "시간을 입력해주세요 : ";
    int time;
    cin >> time;
    int day, week;
    week = 24 * 7;
    day = 24;
    cout << time/week << "주 " << (time%week)/day << "일 " << (time%day) << "시간 " << endl;

    return 0;
}