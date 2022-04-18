// 차량의 종류(일반 승용차는 'c', 버스는 'b', 트럭은 't')와 주차장에서 차량이 있던 시간을 입력받은 뒤,
// 다음과 같은 주차 요금에 따라서 요금을 계산하는 프로그램을 작성하세요
// 일반 승용차 : 시간당 2달러, 버스 : 시간당 3달러, 트럭 : 시단당 4달러

#include <iostream>

using namespace std;

int main() {
    cout << "차량의 종류(일반 승용차는 'c', 버스는 'b', 트럭은 't')와 차량이 있던 시간을 공백으로 입력하세요 : ";
    char car;
    int hour;
    cin >> car >> hour;

    if(car == 'c') {
        cout << "주차 요금은 " << 2 * hour << "달러 입니다." << endl;
    }
    else if(car == 'b') {
        cout << "주차 요금은 " << 3 * hour << "달러 입니다." << endl;
    }
    else if(car == 't') {
        cout << "주차 요금은 " << 4 * hour << "달러 입니다." << endl;
    }

    return 0;
}

