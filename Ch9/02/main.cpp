#include <iostream>
using namespace std;

class Fraction {
private:
    int numer;
    int denom;

public:
    Fraction(int num, int den);
    Fraction();
    Fraction(const Fraction& fract);
    ~Fraction();

    int getNumer() const;
    int getDenom() const;
    void print() const;

    void setNumer(int n);
    void setDenom(int den);

private:
    void normalize();
    int gcd(int n, int m);
};

Fraction& large(Fraction&, Fraction&);

Fraction& mul(Fraction&, Fraction&);


int main() {

    Fraction fract1(1, 2);
    Fraction fract2(1, 3);
    Fraction fract3(1,4);

    Fraction largeFract = large(fract1, fract2);
    largeFract = large(largeFract, fract3);

    largeFract.print();

    largeFract = mul(fract1, fract2);
    largeFract.print();



    return 0;
}

Fraction::Fraction(int num, int den = 1)
:    numer(num), denom(den)
{
    normalize();
}

Fraction::Fraction()
: numer(0), denom(1)
{

}

Fraction::Fraction(const Fraction& fract)
: numer(fract.numer), denom(fract.denom)
{

}

Fraction::~Fraction() {

}

int Fraction::getNumer() const {
    return numer;
}

int Fraction::getDenom() const {
    return denom;
}

void Fraction::print() const {
    cout << numer << "/" << denom << endl;
}

void Fraction::setNumer(int num) {
    numer = num;
    normalize();
}

void Fraction::setDenom(int den) {
    denom = den;
    normalize();
}

void Fraction::normalize() {
    if(denom == 0) {
        cout << "잘못된 분모 값입니다. 프로그램을 중단합니다." << endl;
        assert(false);
    }

    if(denom < 0) {
        denom = -denom;
        numer = -numer;
    }

    int divisor = gcd(abs(numer), abs(denom));
    numer = numer / divisor;
    denom = denom / divisor;
}

int Fraction::gcd(int n, int m) {

    int gcd = 1;
    for(int k = 1; k <= n && k <= m; k++) {
        if(n % k == 0 && m % k == 0) {
            gcd = k;
        }
    }

    return gcd;
}

Fraction& large(Fraction& a, Fraction& b) {
    if(a.getNumer() * b.getDenom() > b.getNumer() * a.getDenom()) {
        return a;
    }
    return b;
}

Fraction& mul(Fraction& a, Fraction& b) {
    Fraction fract;
    fract.setNumer(a.getNumer() * b.getNumer());
    fract.setDenom(a.getDenom() * b.getDenom());

    return fract;
}
