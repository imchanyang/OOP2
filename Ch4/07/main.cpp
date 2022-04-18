// 도매점에서 물건을 구매할 때, 다음과 같이 수량에 따라서 추가적인 할인이 들어갑니다.
// 물건 하나의 가격과 구매 수량을 입력받고, 할인이 적용된 전체 가격을 출력하는 프로그램을 작성하세요.

// 1 - 9개 : 할인율 0%
// 10 - 49개 : 할일율 3%
// 50 - 99개 : 할인율 5%
// 100개 이상 : 할인율 10%

#include <iostream>
using namespace std;

int main() {
    cout << "물건 하나의 가격과 구매 수량을 공백을 두고 입력하세요 : ";
    int price, count;
    cin >> price >> count;

    double rate;

    if(1 <= count and count <= 9) {
        rate = 0.00;
    }
    else if(10 <= count and count <= 49) {
        rate = 0.03;
    }
    else if(50 <= count and count <= 99) {
        rate = 0.05;
    }
    else {
        rate = 0.10;
    }
    double totalPrice = price*count*(1-rate);
    cout << "할인이 적용된 전체 가격은 : " << totalPrice << endl;

    return 0;
}
