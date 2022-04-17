// 1,400달러의 텔레비전, 220달러의 DVD 플레이어, 35.20달러의 리모컨 3가지 제품을 판매하는 회사가 있습니다.
// 고객이 구입한 장비의 수를 입력으로 받는다고 할 때, 8.25%의 소비세가 추가된 전체 비용을 계산하는 프로그램을 만드세요

#include <iostream>

using namespace std;

int main() {
    cout << "고객이 구입한 텔리비전, DVD플레이어, 리모컨의 개수를 공백으로 구분해서 입력하세요 : ";
    int numOfTv, numOfDvd, numOfRemote;

    cin >> numOfTv >> numOfDvd >> numOfRemote;
    int priceOfTv = 1400;
    int priceOfDvd = 220;
    double priceOfRemote = 35.20;

    double price = (priceOfTv * numOfTv + priceOfDvd * numOfDvd + priceOfRemote * numOfRemote);
    double totalPrice = price + (price * 0.0825);

    cout << "전체 비용 : " << totalPrice << endl;

    return 0;
}