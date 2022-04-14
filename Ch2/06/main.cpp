// 정사각형의 변 하나가 주어졌을 때, 그 면적과 둘레를 구하는 프로그램을 만드세요.
#include <iostream>
using namespace std;

int main() {
    cout << "정사각형 변의 길이를 입력하세요 : ";
    int side;
    cin >> side;

    int perimeter = side * 4;
    int area = side * side;

    cout << "입력한 정사각형의 둘레는 : " << perimeter << "입니다." << endl;
    cout << "입력한 정사각형의 넓이는 : " << area << "입니다." << endl;
    return 0;
}