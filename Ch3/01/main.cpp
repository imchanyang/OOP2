// short 자료형과 unsigned int 자료형의 최대값과 최소값을 찾는 프로그램을 만드세요

#include <iostream>
#include <limits> // 자료형 최대값, 최소값
using namespace std;

int main() {
    short short1 = numeric_limits<short>::max();
    short short2 = numeric_limits<short>::min();

    unsigned int unSigned1 = numeric_limits<unsigned int>::max();
    unsigned int unSigned2 = numeric_limits<unsigned int>::min();

    cout << "short 자료형의 최대값 : " << short1 << endl;
    cout << "short 자료형의 최소값 : " << short2 << endl;

    cout << "unsigned int 자료형의 최대값 : " << unSigned1 << endl;
    cout << "unsigned int 자료형의 최소값 : " << unSigned2 << endl;
    return 0;
}