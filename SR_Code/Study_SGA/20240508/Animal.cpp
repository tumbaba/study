#include "Animal.h"


Animal::Animal()
{
	//cout << "Animal::Animal() ������ ȣ��" << endl;
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
	//cout << "Aniname: " << ani_name << "\t" << "number: " << number << "\n"; // ���� ��� ����ϴ� ���� Ŭ����
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
	Print("�θ� Animal�� ���� �Լ� ���");
	
}

Animal::~Animal()
{
	//cout << "Animal::~Animal() �Ҹ��� ȣ��" << endl;
}