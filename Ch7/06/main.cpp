#include <iostream>
using namespace std;
#include <math.h>

class Triangle {
private:
    int firstSide;
    int secondSide;
    int thirdSide;

public:
    Triangle(int firstSide, int secondSide, int thirdSide);

    int* getSides() const;
    int getPerimeter() const;
    int getArea() const;

private:
    void check() const;

};

int main() {

    Triangle a(3, 4, 5);
    cout << a.getArea() << endl;

    return 0;
}

Triangle::Triangle(int firstSide, int secondSide, int thirdSide)
: firstSide(firstSide), secondSide(secondSide), thirdSide(thirdSide) {
    check();
}


void Triangle::check() const{
    if(firstSide >= secondSide+thirdSide || secondSide >= firstSide+thirdSide || thirdSide >= firstSide+secondSide) {
        cout << "잘못된 삼각형입니다" << endl;
        assert(false);
    }
}

int* Triangle::getSides() const {
    int a[3];
    a[0] = firstSide;
    a[1] = secondSide;
    a[2] = thirdSide;
    return a;
}

int Triangle::getPerimeter() const {
    return getSides()[0] + getSides()[1] + getSides()[2];
}

int Triangle::getArea() const {
    return sqrt(getSides()[getPerimeter()]) * (getPerimeter()-getSides()[0]) * (getPerimeter()-getSides()[1]) * (getPerimeter()-getSides()[2]);
}

