#include "stdafx.h"


//const 사용시 : 앞에 소문자 k (class와 구별하기위함)

// ──────────────────────────────────────────006 사칙연산 축약하기( +, -, * /)──────────────────────────────────────────

int main() {

	/*
	int two = 2;
	int eight = 8;
	int sum1 = 2;
	int sum2 = 2;

	sum1 = sum1 + two;
	sum2 += eight;  // 축약

	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;

	sum1 = 2;
	sum2 = 8;
	sum1 *= two;
	sum2 /= eight;

	cout << "sum1 = " << sum1 << endl;
	cout << "sum2 = " << sum2 << endl;
	*/

// ──────────────────────────────────────────009 순환문 배우기(for)──────────────────────────────────────────

	int sum1 = 0;
	int sum2 = 0;

	int one = 1;
	int two = 2;
	
	for (int i = 0; i < 5; i++)    // 0, 1, 2, 3, 4 총 5번 반복의 실행
	{
		sum1 += one;			   // 첫 숫자 0+1  부터 5번 똑같이 반복 = 5
		sum2 += two;			   // 첫 숫자 0+2  부터 5번 똑같이 반복 = 10
	}
	cout << "009 순환문 배우기 합산 결과 : " << sum1 << ", " << sum2 << endl;
	
// ──────────────────────────────────────────011 함수 배우기 (function)─────────────────────────────────────────


	// 사용 빈도가 높은 것들은 함수를 만들어 분리하도록..

	void Minus(const int x, const int y);
	int Plus(const int x, const int y);


	Minus(10, 5);

	cout << "x + y = " << Plus(2, 6) << endl;




	return 0;
}
void Minus(const int x, const int y) 
{
	cout << "x - y = " << x - y << endl;
}
int Plus(const int x, const int y) // 함수의 이름(Plus)앞에 자료형(int)을 지정하면 해당 자료형에 맞는 값이 반환되는데 반환값 return을 뒤에 적어야 한다. 없으면 오류발생
{
	return x + y; 
}