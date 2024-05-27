#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>    // cstdlib, ctime 헤더파일은 c++의 랜덤값 난수를 생성하기위한 (rand = 0 ~ 32767 까지) 함수
#include <ctime>
#include "Array"

using namespace std;


void lowNum(int X[]);	//────────────────── 오름차순 함수 선언
void highNum(int X[]);	//────────────────── 내림차순 함수 선언

int main() 
{
	/*
	cout << rand() %100 << endl; // 하지만 항상 반복적으로 출력하여도 rand 값이 동일하게 반복출력한다.
	*/
	srand((unsigned int)time(NULL)); // 그래서 srand를 통해서 사용
	
	/*
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	cout << rand() % 100 << endl;
	*/
	
	
	//─────────────────────────랜덤값배열──────────────────────────
	int arrRan[10] = {};		//─────────────────── 배열안에 아무것도 없는 10개 구역 생성
		
	cout << "현재 배열안 랜덤으로 보이는 숫자는 = ";
	for (int i = 0; i < 10; i++) //─────────────────── 배열 안에 0부터 9까지 인덱스값 로직
	{
		arrRan[i] = rand() % 100; //────────────────── 0부터 랜덤값을 100 영역 제한으로 설정
		cout << arrRan[i] % 100 << " ";	//────────────────── 출력된 값 확인
		
	}
	cout << endl;
		
	//─────────────────────────오름차순──────────────────────────
	cout << "그 값을 오름차순으로 정리한 숫자는 = ";
	lowNum(arrRan);		 //────────────────── 오름차순 함수 호출
	for (int i = 0; i < 10; i++)
	{
		cout << arrRan[i] << " ";
	}
	cout << endl;
	//─────────────────────────내림차순──────────────────────────

	cout << "그 값을 내림차순으로 정리한 숫자는 = ";
	highNum(arrRan);	//────────────────── 내림차순 함수 호출
	for (int i = 0; i < 10; i++)
	{
		cout << arrRan[i] << " ";
	}
	cout << endl;
}

