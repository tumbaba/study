#include <iostream>
#include <string>
#include "Circle.h"
#include "Rectangle.h"

#include <iomanip> // 소수점 많이나오는데 사용

using namespace std;

// 부동소수점
/*
float = 4바이트
double = 8바이트
long double = 8바이트, 12바이트 or 16바이트
*/


int main() 
{
	Rectangle rect(3, 5);     // class 이름 Rectangle // 생성과 함께 초기화

	/*
	rect.width = 3;
	rect.height = 5;
	*/

	cout << "사각형의 면적은 : " << rect.getArea() /* 리턴 A값 */ << endl;
	cout << "사각형의 둘레는 : " << rect.getdul() /* 리턴 B값 */ << endl;



	Circle donut(1);
	// donut.radius = 1;
	double area = donut.getArea(); // 함수의 리턴타입 = area
	cout << setprecision(17); // 엄청 길게 17자리까지 나온다..
	
	cout << "dounut 면적 = " << area << endl;

	Circle pizza(30);
	// pizza.radius = 30; // Circle 클래스 안 변수가 radius, 타입은 int
	area = pizza.getArea();
	cout << setprecision(17); // 엄청 길게나온다..

	cout << "pizza 면적 = " << area << endl;

	

	return 0;

}
