// 사용자로부터 달러 값을 입력받고, 달러 지폐로 이를 지불할 때 지폐의 개수가 최소가 되는 경우를
// 출력하는 프로그램을 만드세요. 0이 아닌 수의 지폐 수만 출력하면 됩니다.
// 참고로 달러는 100달러, 50달러, 20달러, 10달러, 1달러 지폐가 있습니다.

#include <iostream>
using namespace std;

int main() {
    cout << "달러를 입력하세요 : ";
    int total;
    cin >> total;

    int numOf100, numOf50, numOf20, numOf10, numOf1;

    numOf100 = total/100;
    numOf50 = (total-numOf100*100)/50;
    numOf20 = (total-numOf100*100-numOf50*50)/20;
    numOf10 = (total-numOf100*100-numOf50*50-numOf20*20)/10;
    numOf1 = total%10;

    if (numOf100 != 0) {
        cout << "100달러 개수 : " << numOf100 << endl;
    }
    if(numOf50 != 0) {
        cout << "50달러 개수 : " << numOf50 << endl;
    }
    if(numOf20 != 0) {
        cout << "20달러 개수 : " << numOf20 << endl;
    }
    if(numOf10 != 0) {
        cout << "10달러 개수 : " << numOf10 << endl;
    }
    if(numOf1 != 0) {
        cout << "1달러 개수 : " << numOf1 << endl;
    }

    return 0;
}