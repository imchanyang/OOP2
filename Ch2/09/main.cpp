// 소비세가 9%라고 가정하고, 판매 금액이 주어졌을 때, 다음과 같이 출력하는 프로그램을 만드세요.
// (코드를 작성할 때 소비세는 상소로 정의하며 프로그램을 여러 번 실행해야 함.)

#include <iostream>
using namespace std;

int main() {
    const int rate = 9;
    cout << "판매금액을 입력하세요 : ";
    double price;
    cin >> price;

    double useRate = price * rate / 100;
    double finalPrince = price + useRate;

    cout << "판매 금액: " << price << endl;
    cout << "소비세:" << useRate << endl;
    cout << "전체 금랙: " << finalPrince << endl;
    return 0;
}