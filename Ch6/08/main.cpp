#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void rand_() {
    srand(time(NULL));
    cout << rand()%5*2 + 2 << endl;
}

int main() {
    rand_();
    return 0;
}
