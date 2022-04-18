// 사용자로부터 점의 좌표 x와 y를 입력받고, 직교 좌표계에서 점이 몇 사분면에 위치하는지를 출력하는 프로그램을 만드세요.
// 예를 들어서 x와 y가 모두 양수라면 점은 1-사분면에 위치하며, 모두 음수라명 점은 3-사분면에 위치합니다.

#include <iostream>
using namespace std;

int main() {
    cout << "x좌표와 y좌표를 입력하세요 : ";
    int x, y;
    cin >> x >> y;

    int s;
    if(x > 0 and y > 0) {
        s = 1;
    }
    else if(x < 0 and y > 0) {
        s = 2;
    }
    else if(x < 0 and y < 0) {
        s = 3;
    }
    else if(x > 0 and y < 0){
        s = 4;
    }
    else {
        s = 0;
    }

    cout << "입력한 점은 " << s <<"-사분면에 위치합니다." << endl;
    return 0;
}