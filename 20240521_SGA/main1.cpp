#include "stdafx.h"


/*
 네이밍 규칙과 제한사항

1. 식별자란 
 변수, 함수 ,클래스, 네임스페이스

 2. 네이밍 규칙
   1. 사용할수 있는 문자
     - 알파벳: 소문자, 대문자
	 -숫자 , 밑줄
   2. 첫글자 규칙
     - 알파벳, 밑줄로 시작해야 한다.
	 - 숫자를 사용할 수 없다.

   3. 대소문자 구분
	 - int Value, value는 서로 다른 변수로 인식됨
   4. 길이 제한
    -길이 제한은 없음
   5. 예약어 금지
    - c++ 에약어(키워드) 사용하면 안됨
	예) int, class,  return 등등

3. 네임 = 코드의 가독성, 유지보수
  1. 변수 와 함수
    - myValueAdd, calcullateSum    // camel case
	- my_value_add, calculate_sum  // snake case
	- Cmyclass, m_value, p_value   
  2. 클래스
   - 단어마다 대문자로 사용하는 경우가 많음
   ex) MyClass, EmptryData

  3.네임스페이스
  - 소문자를 작성을 많이 한다.
  - using namespace std;
  - namespace std{}
  4. 상수
  - 보통 대문자로 작성
  - #define PI 3,14, MAX_SIZE , DEFAULT_VALUSE

4. 네이밍 주의 사항
   -의미 있는 이름 사용 : 이름만 보고도 역활을 알 수 있도록 이름을 짓는다.
   - 혼동 피하기 : 변수 O(영어 대문자), 0, o, 1,l I
   - 축양어 자제 : 너무 짧은 축약어 사용은 의미 전달이 이렵기 때문에 자제해야 한다.
   
5. 네임스페이스 사용
   - 이름 충돌을 피하고, 코드를 조직화 할 수 있다.


*/
/* 
함수란?
- 특정 작업을 수행하는 코드 블럭이다.

1. 함수의 구조
  - return [값] ; 반환형, void : 반환값이 없을 때 정의
  - 함수 이름
  - 매개 변수 parameter, 0 ~ 제한없음.
  - 함수 몸체 : { } 함수 구현 해주면 됨
  
-함수 선언
 예)   int add(int a, int b);
     
 - 함수 구현
 int add(int a, int b)
  {
	   int c = a+b;
	       return c;
		}
-함수 사용
  int result = add(10,10);


  // 재귀 함수

  int factorial(int n)
  {
    if(n<= 1 ) return1;
	else 
	   return n*factorial(n-1);
  }




 
*/


void printMesssage()
{
	cout << "Hello ,  포인트 함수입니다. " << endl;
}


int main()
{
	int 안녕하세요 = 10;
	

	cout << 안녕하세요 << endl;


	// 포인트 함수 예시

	void (*funcPtr)() = &printMesssage;

	funcPtr();




	return 0;
}