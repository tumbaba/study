#include "stdafx.h"
/*
────────── C++ 네이밍 규칙 & 제한사항 ──────────

1. 식별자
	변수, 함수, 클래스, 네임스페이스 등 이런항목의 구분 기준

2. ★★★★★ 네이밍 규칙 ★★★★★ (1~3 정도 중요)
	(1) 사용할 수 있는 문자
	- 알파벳 : 소문자(a-z), 대문자(A-Z)
	- 숫자 : 0 ~ 9
	- 밑줄 : _

	(2) 첫글자 규칙
	- 알파벳 or 밑줄 시작해야함
	- 숫자를 사용불가

	(3) 대소문자 구분
	- 예) 변수 선언시 : int Value, int value는 서로 다르게 인식

	(4) 길이제한
	- 길이 제한은 없음. (단 너무 길게하지말것)

	(5) 예약어 금지
	- C++ 예약어(키워드) 사용하면 안됨.
	예) int int, class class, return 등 C++사용하는 것을 이름으로 사용하지 말것.

3. 네임 - 코드의 가독성, 유지보수
	(1) 변수와 함수
	- myValue or my_value, calculateSum or calculate_sum 등 소대문자를 구분하여 의미하는바를 나타내면 좋다 (카멜케이스, 스네이크케이스)
	- cMyclass, m_ , p_ , f_ 등

	(2) 클래스
	- 단어마다 대문자로 사용하는 경우가 많음
	예) MyClass, EmptyData 단어중간에 대문자를 삽입하여 네임구분을 사용

	(3) 네임스페이스
	- 소문자 작성이 많음
	- using namespace std;   =  namespace std{}

	(4) 상수
	- 보통 대문자를 작성하는경우 많음
	- #define PI 3.14, MAX_SIZE, DEFAULT_VALUSE

4. 네이밍 주의사항
	- 의미있는 이름 사용 : 이름만 보고도 역할을 알 수 있는 전달력 이름으로 짓는다.
	- 혼동 피하기 : 변수 O(영어대문자) , 0, ㅇ(한글) 또는 l(영어 소문자), |, 1 등 변수타입에 혼동되도록 사용을 피할것
	- 축약어 자제 : 너무 짧은 축약어 사용은 의미 전달이 어렵기 때문에 자제

5. 네임스페이스 사용하는 이유
	- 이름 충돌을 피하고, 코드를 조직화 할 수 있다.

*/

/*

함수란 무엇인가?
	- 특정 작업을 수행하는 코드 블럭이다. (함수의 조각들이 모여 프로그래밍의 하나가되는 연결고리)

1. 함수의 구조
	- return Type ; 반환형 or void : 반환값이 없을때 정의 (리턴값을 넘길때  = > return;) 아래 참고
	- 함수 이름
	- 매개 변수 parameter, 0 ~ 제한없음.
	- 함수 몸체 : { } 함수 구현 해주면됨. 
	- 함수 선언
		예) int add(int a, int b);
	
	- 함수 구현
		int add(int a, int b)
		{
			int c = a + b;
			return c;
		}

	- 함수 사용(호출)
	int result = add(10, 10);

void main(){

	int nValue = 5;
	if(nValue >= 10){
		nValue=0;
	}
	else{
		return;     프로그램종료
	}
	cout << "nValue = " << nValue;

	return;
}

★★	★오버로딩 (각각 다른함수이고 구연을 따로 해줘야한다.)★★★
	int add(int a, int b);
	float add(ind a, int b);
	int add(int a, float b);
★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★

재귀함수
// n! = ((((n-1)-1)-1)-1)... 자기자식이 1이 될때까지 돌아간다..

int factorial(int n){
	if(n <= 1) 
		return 1;
	else
		return n * factorial(n - 1);
}
*/

// 포인트함수 예시
void printMessage() {
	cout << "Hello, 포인트함수 입니다. " << endl;
}
int main(){
	
	// 포인트 함수 선언
	void(*funcPtr)();

	// 포인트 함수를 받기위한 변수
	void(*funcPtr)() = &printMessage;

	funcPtr(); // 호출
	return 0;
}
