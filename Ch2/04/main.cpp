// 시간, 분, 초 단위로 시간을 입력받아서 초 단위로 환산해 출력하는 프로그램을 만드세요.

#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    cout << "시간, 분, 초 단위로 입력하세요(공백으로 구분) : ";
    cin >> hours >> minutes >> seconds;

    int hoursToSeconds = hours * 60 * 60;
    int minutesToSeconds = minutes * 60;
    int sum = hoursToSeconds + minutesToSeconds + seconds;

    cout << "환산한 값은 " << sum << "초 입니다." << endl;
    return 0;
}