#include "stdafx.h"
// ifstream: 파일로부터 입력 받기위한 클래스 std::ifstream file("파일이름.txt")
// ofstream: 파일로부터 출력 하기위한 클래스 std::ofstream file("파일이름.txt")
// fstream: 파일을 입력 or 풀력하기 위한 클래스 std::fstream file("파일이름.txt")
// open: 파일열기 file.open("파일이름.txt")
// close: 파일닫기 file.close("파일이름.txt")
// << 출력 연산자
// >> 입력 연산자
// getline: 한줄씩 파일에서 문자열 읽기 std::getline(file.str);


#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Birld.h"

int main() {
	/*
	Animal animal; 
	Animal dog0("멍멍이");
	Animal dog1("멍멍이", 1);
	Animal dog2(5);
	Animal ani_Bird("그지비둘기", 2);
	*/
	//Animal* panimal = new Animal; // 새로운 애니멀사이즈 객체 생성

	
	// 내용값을 돌아가며 변경할때 주로 사용한다고함.(주소값만 바꿔주는형식)
	Animal* panimal = nullptr;
	
	Dog dog3;
	dog3.Print("새로운 개새끼");
	dog3.playSound();
	dog3.Print(dog3.legs);

	Cat cat;
	cat.Print("새로운 야옹이");
	cat.playSound();
	int nlegs = cat.legs;
	cat.Print(nlegs);

	Birld birld;
	birld.Print("푸드득푸드득 막날라다니는 새");
	birld.playSound();
	nlegs = birld.legs;
	birld.Print(nlegs);

	
	// 동일한 곳에 접근하는 방법을 포인터, 레퍼런스로 알려줌. 
	// 포인터
	panimal = &dog3;
	panimal->playSound();

	panimal = &cat;
	panimal->playSound();

	panimal = &birld;
	panimal->playSound();

	// 레퍼런스 : 참조는 바로 선언과 동시에 호출을 써야한다. (포인터는 따로따로 할수있음)
	// 같은 동일한 메모리를 계속 복사(주소도) 하면서 내부의 변경값도 같이 변경	
	Animal& refanimal = dog3;
	refanimal.playSound();

	refanimal = cat;
	refanimal.playSound();

	refanimal = birld;
	refanimal.playSound();

	return 0;
}
