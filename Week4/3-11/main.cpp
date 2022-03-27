#include <iostream>
using namespace std;

int main() {
    double x = 23.56;
    int y = 30;

    cout << "캐스팅을 하지 않는 경우: " << x + y << endl;
    cout << "캐스팅을 하는 경우: " << static_cast<int>(x) + y ;
    return 0;
}
