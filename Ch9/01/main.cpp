#include <iostream>
using namespace std;

int& max(int& a, int& b, int c) {
    int maxNumber = a;
    if(a < b ) {
        maxNumber =b;
    }

    if(maxNumber < c){
        maxNumber =c;
    }

    return maxNumber;
}
int main() {
    int a, b, c;
    a = 10;
    b = 20;
    c = 15;
    cout << max(a, b, c) << endl;
    return 0;
}