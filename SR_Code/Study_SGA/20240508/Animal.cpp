#include "Animal.h"


Animal::Animal()
{
	//cout << "Animal::Animal() 생산자 호출" << endl;
	ani_name = "";
	number = 0;
}

Animal::Animal(string name)
{
	ani_name = name;
	number = 0;
	Print();
}

Animal::Animal(int num)
{
	ani_name = "";
	number = num;

	Print(ani_name);
	Print(number);

}

Animal::Animal(string name, int num)
{
	ani_name = name;
	number = num;
	Print(ani_name);
	Print(number);
}





void Animal::Print()
{
	//cout << "Aniname: " << ani_name << "\t" << "number: " << number << "\n"; // 내부 편수 출력하는 상태 클래스
	Print(ani_name);
	Print(number);
}

void Animal::Print(string name)
{
	cout << "Animal: " << name << "\n";
}

void Animal::Print(int number)
{
	cout << "number: " << number << "\n";
}

void Animal::playSound()
{
	Print(sound);
	Print("부모 Animal을 통한 함수 출력");
	
}

Animal::~Animal()
{
	//cout << "Animal::~Animal() 소멸자 호출" << endl;
}