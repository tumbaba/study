#pragma once
#include "stdafx.h"


// 오버로딩 overloading = 같은이름으로 파라미터가 다른 함수를 사용하는것
class Animal
{
private:
	string ani_name;				// 아래 클래스에 전달되기 위한 선언을 함
	int		 number;		 
	
	//개, 고양이, 새 등 각종 구분하지만 한가지로 하기 힘들기에 상속으로 만듬

	int type;
	//int legs;



public:
	Animal();						// 기본 생성자
						 
	Animal(string name);			// 추가 생성자
	Animal(int num);
	Animal(string name, int num);	// 두가지를 한번에 만들수도 있음 용도에 맞게사용..



private: // 자신(내부) 클래스안에서만 사용되는 함수
	void Print();

public: // 자신 + 자식 + 외부에서도 호출가능한 공용 함수
	void Print(string name);
	void Print(int number);
	
	string sound;
	int legs;
	
protected: // 자신 + 자식 클래스에게만 노출하여 사용가능(외부 사용 불가능)
	virtual void playSound(); 


public:
	~Animal();						// 소멸자
};

