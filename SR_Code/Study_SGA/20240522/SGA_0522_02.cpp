//객체지향언어 (OOP) 개념

// 유지보수가 되도록 많은함수와 많은 역할을 넣치 말자.(특징 역할만 담당하도록 구성)
/*
클래스	
1. 하나의 클래스 하나의 역할만 가져야 된다. 
2. 상속에 대해서 부모클래스와 자식과의 관계 설정을 유지해야함.
- 코드 중복을 줄여줌
- 확장성을 높여줌

클래스간의 형변환
1. 업캐스팅 // 자식클래스 -> 부모클래스로 변환 (일반적)

2. 다운캐스팅 // 부모클래스 -> 자식클래스 변환 (구체화)
*/
//예)
#include <iostream>
class Animal {
public:
	virtual void Speak() { // virtual : 오버라이딩, ★★★가상함수 ( 사용안하면 부모값 출력 "동물소리" 나옴, 사용하면 이것도 멍멍으로 출력됨)
		std::cout << "동물 소리\n";
	}
	virtual void Speak1() = 0; // 자식에게 무조건 이함수를 구현하라는 뜻 : ★★★순수 가상함수 
	// 순수 가상함수로만 만들어진것들 : ★★★★★인터페이스
};

class Dog : public Animal {
public:	
	void Speak() override{
		std::cout << "멍멍\n";
	}
	void Speak1() { // 무조건 깡통이라도 구현을 만들어야됨
	}
};
int main() {
	Animal* animal = new Dog; // 업캐스팅 (자식에서 부모로 캐스팅됨)
	Dog* dog = static_cast<Dog*>(animal); // 다운캐스팅 (부모에서 자식으로 캐스팅됨)

	animal->Speak(); // 업캐스팅
	dog->Speak(); // 다운캐스팅
}
