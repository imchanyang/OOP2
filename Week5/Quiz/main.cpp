#include <iostream>

using namespace std;

// 삼각형 넓이 구하기
float area(float a, float b) {

    return a*b/2;
}

// 사각형 넒이 구하기
double area(double a, double b) {

    return a*b;
}


int main() {
    int shape;

    do {
        cout << "삼각형과 사각형중 하나를 선택하세요(삼각형 :3, 사각형:4)  : ";
        cin >> shape;

    } while (shape != 3 && shape != 4);


    // 사각형일 경우
   if (shape == 4) {
       double width;
       double height;

       cout << "가로, 세로를 공백으로 구분해서 입력해주세요 : ";
       cin >> width >> height;

       cout << "사각형의 넓이는 " << area(width, height) << " 입니다."<< endl;
   }

   // 삼각형일 경우
   else{
       float width;
       float height;

       cout << "가로, 세로를 공백으로 구분해서 입력해주세요 : ";
       cin >> width >> height;

       cout << "삼각형의 넓이는 " << area(width, height) << " 입니다."<< endl;
   }


}