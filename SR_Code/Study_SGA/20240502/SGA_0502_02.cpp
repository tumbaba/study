#include "stdafx.h"

// 기본 동물(부모) 클래스를 상속하여 동물들(자식) 표현
class Animal 
{
public:
	Animal() {}; //가상 생산자 선언
	~Animal() {}; //가상 소멸자 선언
	
	// 소리내는 가상 함수
	virtual void makeSound()
	{
		cout << "동물 소리" << endl;
	}
};

// 새 클래스, 동물을 상속
class Bird : public Animal 
{
public:
	// 소리내는 함수를 재정의
	void makeSound() override 
	{
		cout << "짹 짹~~" << endl;
	}
};
// 고양이 클래스, 동물을 상속
class Cat : public Animal
{
public:
	// 소리내는 함수를 재정의
	void makeSound() override
	{
		cout << "야 옹~~" << endl;
	}
};


int main() {

	// 아래는 int a; a= 30; 과 같은방법을 이어서 int a = 30; 표현함
	Animal* animal = new Animal(); //new Animal; 가능함 ( ()소멸자할 수 있음 )
	Bird* bird = new Bird();
	Cat* cat = new Cat();


	//────────────────────────────출력 for문 사용────────────────────────────────
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

	for (int i = 0; i<2; i++) // 메모리 해제
	{
		delete animals[i];
	}
	//──────────────────────────────────────────────────────────────────────────

	animal->makeSound(); // 동물소리 출력
	bird->makeSound();   // 새소리 출력
	cat->makeSound();	 // 고양이소리 출력
	

	// 메모리 해제 : 소멸은 위의 역순(new로 표시한 것)으로 하는것이 좋음
	delete cat;
	delete bird;
	delete animal;

	/* ───────────────상속사용시 이렇게 꼭 기본적으로 사용..─────────────
	 Bird* bird = new Bird();
	 bird->makeSound();
	 delete bird;
	 ─────────────────────────────────────────────────────────────────*/

	return 0;
}
