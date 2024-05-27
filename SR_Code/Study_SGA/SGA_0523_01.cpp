// 다음주부터 윈도우 프로그램 짜는방법으로...(어플리케이션만드는 것) 
// 6월중순 2D로 openGl (다이렉트 x 안하고)
#include "stdafx.h"


//class 클래스 선언
/*

class 클래스_이름
{
 public:	// 어디서든지 접근가능 : 변수, 함수 등 
 private:	// 클래스 내에서만 접근가능 : default
 protected: // 클래스 내에서, 자식 사용가능 
};

*/

class Car {
private: // default 선언
	int value;
	int x, y;

public:
	Car(); // 생산자 선언
	Car(const Car& other); // 복사생산자 (아래 main에 있음)
	~Car(); // 소멸자 & 파괴자 선언

	int num;
	void privateFunc1(int x, int y) {
		this->x = x;  // x라는 구분 설정이 어려울때 this는 Car라는 클래스 자기자신을 나타냄
		this->y = y;
	}

private:
	void privateFunc();

protected:
	int protecVar;
};

Car::Car() {
	// 생산자 구현
}
Car::~Car() {
	// 소멸자 구현
}
Car::Car(const Car& other) { //& 참조 : 읽기만 하겠다는 의미
	this->x = other.x;
	this->y = other.y;
	//this->privateFunc1 = other.
}


void Car::privateFunc() {
	int i = 100;	
}

int main() {

	// 인스턴스 생성방법 1 : 메모리를 생성한 것 // 종료되면 메모리는 자동으로 소멸
	Car car; 
	car.privateFunc1(5,4);

	// 인트턴스 생성방법 2 : 메모리 동적할당으로 생성
	Car* pCar = new Car();	 // 업캐스팅 (자식에서 부모로 캐스팅됨)
	pCar->privateFunc1(10,100);	 // 접근방법 ->

	delete pCar; // 메모리를 삭제하는 것 : delete하지 않으면 종료가되더라도 메모리를 사용영역이 남아있음


	Car car1(car); // 복사생산자 : 복사가 그대로 car의 내용을 복사한것이 아님. 
	//car1.privateFunc1(5, 4); // 똑같이 이렇게 복사할수 없기 때문에..25번을 이용
	// 복사생산자 방법 : 예를 들어 몬스터 여러가지를 만들때 or 총알 여러개 등 값 복사할때
	//pCar = &car; // 1. 얕은 복사(추천안함)

}


