#include <iostream>
using namespace std;

double turn(int a) {
    return a * 180.0 / 100.0 + 32;
}

int main() {
    cout << turn(0) << endl;
    cout << turn(37) << endl;
    cout << turn(40) << endl;
    cout << turn(100) << endl;

    return 0;
}