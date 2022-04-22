#include <iostream>
using namespace std;

class One{
private:
    int x;
    int y;

public:
    One();
    void setX(int );
    void setY(int );

    int getX() const;
    int getY() const;

};

int main() {

    One one;
    one.setX(1);
    one.setY(2);

    cout << one.getX() << " " << one.getY() << endl;

    return 0;
}

One::One() {}

void One::setX(int x) {
    this->x = x;
}

void One::setY(int y) {
    this->y = y;
}

int One::getX() const {
    return x;
}

int One::getY() const {
    return y;
}