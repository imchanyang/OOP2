// 4개의 점수(int)를 입력받고, 이를 기반으로 평균 점수(douvle)를 찾ㅂ아 줄력하는 프로그램을 만드세요.
#include <iostream>

using namespace std;

int main() {

    cout << "점수 4개를 공백으로 구분해서 입력하세요 : ";
    int score1, score2, score3, score4;
    cin >> score1 >> score2 >> score3 >> score4;

    double avgScore = (score1 + score2 + score3 + score4) / 4.0;
    cout << "평균 점수 : " << avgScore << endl;
    return 0;
}