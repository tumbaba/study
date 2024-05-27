#include "stdafx.h"

// �⺻ ����(�θ�) Ŭ������ ����Ͽ� ������(�ڽ�) ǥ��
class Animal 
{
public:
	Animal() {}; //���� ������ ����
	~Animal() {}; //���� �Ҹ��� ����
	
	// �Ҹ����� ���� �Լ�
	virtual void makeSound()
	{
		cout << "���� �Ҹ�" << endl;
	}
};

// �� Ŭ����, ������ ���
class Bird : public Animal 
{
public:
	// �Ҹ����� �Լ��� ������
	void makeSound() override 
	{
		cout << "± ±~~" << endl;
	}
};
// ����� Ŭ����, ������ ���
class Cat : public Animal
{
public:
	// �Ҹ����� �Լ��� ������
	void makeSound() override
	{
		cout << "�� ��~~" << endl;
	}
};


int main() {

	// �Ʒ��� int a; a= 30; �� ��������� �̾ int a = 30; ǥ����
	Animal* animal = new Animal(); //new Animal; ������ ( ()�Ҹ����� �� ���� )
	Bird* bird = new Bird();
	Cat* cat = new Cat();


	//����������������������������������������������������������� for�� ��릡��������������������������������������������������������������
	Animal* animals[3];
	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
			animals[i] = new Animal();
		else if (i == 1)
			animals[i] = new Bird();
		else
			animals[i] = new Cat();
	}
	animals[0]->makeSound();
	animals[1]->makeSound();
	animals[2]->makeSound();

	for (int i = 0; i<2; i++) // �޸� ����
	{
		delete animals[i];
	}
	//����������������������������������������������������������������������������������������������������������������������������������������������������

	animal->makeSound(); // �����Ҹ� ���
	bird->makeSound();   // ���Ҹ� ���
	cat->makeSound();	 // ����̼Ҹ� ���
	

	// �޸� ���� : �Ҹ��� ���� ����(new�� ǥ���� ��)���� �ϴ°��� ����
	delete cat;
	delete bird;
	delete animal;

	/* ��������������������������������ӻ��� �̷��� �� �⺻������ ���..��������������������������
	 Bird* bird = new Bird();
	 bird->makeSound();
	 delete bird;
	 ����������������������������������������������������������������������������������������������������������������������������������*/

	return 0;
}