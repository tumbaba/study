#pragma once
class Rectangle
{
public:
	Rectangle(); // 생성자 (이름을 class 이름과 동일)
	Rectangle(int w, int h);
	Rectangle(int w);
	~Rectangle(); // 소멸자 (생성자 동시에 같이 소멸해준다)

private:				// 클래스 유형(공통 공유)
	int width;
	int height;

	// 함수를 클래스 안에 선언
public:
	int getArea(); // 클래스 안의 함수 선언 (get 은 내보내겠다)
	int getdul();


};

