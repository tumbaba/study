#include "stdafx.h"
#include "SingleTon.h"
// oop 클래스의 활용방법의 일부(묶어놓은 것의 개념중 하나)
// 싱글톤 패턴(게임 내부에서나 주로 사용할 수 있는 활용)
// 한번만 생성되도록 New 형태로 static 방식으로.. 심화과정이라는데 무슨말인지 강사님말을 모르겠음


//추상 클래스 (자식이 필요함)
class Animal { // Class : 첫번째 대문자
public:
	virtual void makesound() = 0; // 순수 가상함수 : 자식에 사용하기위한 가상함수 (virtual을 쓴다)
};

class Dog :public Animal { // 부모와 자식의 상속관계
public:
	Dog() {
		nType = 0;
	}

	Dog(int _type) {
		nType = _type;
	}
	static int nType; // 몸종
	// 위 순수 가상함수가 0값이기 때문에 ★★★구현 안하더라도★★★ 무조건 넣어서 만들어줘야함
	string name;
	virtual void makesound() override { // override를 써서 지정하는게 굿
		if (nType == 1)
		{
			 cout << "멍!!!!!! 멍!!!!!!!!\n"; 
		}
		else
		{
			cout << "멍! 멍!\n";
		}
	// cout << "멍! 멍!\n";
	
	} 
	// 예를들어 개라도 다른 종류의 개들을 구분할때 또 가상함수앞에 virtual붙임 // 하지만 계속 만들기보다 좀더 개선되려면 Type을 만듬
	~Dog() {}


	// static 함수 예시
	static void Display()
	{
		
		cout << "static 함수가 Dog::Display(); 호출되었습니다.\n";
		// name = "강아지이름"; //  name에 초기화값이 없고 비어있어서 호출이 가능하지 않다. 
	}
};

class BlackDog : public Dog {
public:
	void makesound() override { cout << "멍!!!!!! 멍!!!!!!!!\n"; }
};

void Display() // 스태틱을 붙이면 메모리공간을 차지하는 것
{
	cout << "일반 함수가 Display(); 호출되었습니다.\n";
}

// 스태틱 변수 호출방법
int Dog::nType = 0; // 몸종 static을 클래스 안에서도 사용할수 있지만 변수 이름 호출위치가 다르기때문에 초기화해줘야함
					// 호출 방법은 class 이름을 붙여줘야한다.
static int Num = 0; 

//싱글톤 헤더파일 이용한것 이용한 클래스
class AnimalManger : public Singleton {
	Dog dog;
};


int main() {

	Dog::nType = 1;
	
	Dog::Display(); // 스태틱함수 호출

	Display();		// 일반 함수 호출

	Dog dog, blackdog(Dog::nType);
	//BlackDog blackdog;
	
	dog.makesound();
	blackdog.makesound();
	
	blackdog.Display();

	

	AnimalManger *pMng = (AnimalManger*)AnimalManger::getInstance();

	//pMng->dog.makesound();


	return 0;
}
