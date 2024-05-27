#include "Rectangle.h"

// 생성자
Rectangle::Rectangle()
{
	width = 0;
	height = 0;
}

Rectangle::Rectangle(int w, int h)
{
	width = w;
	height = h;
}

Rectangle::Rectangle(int w)
{
	width = w;
}




// 소멸자
Rectangle::~Rectangle()
{

}
int Rectangle::getArea() // 클래스 안의 함수 구현되는 로직
{
	int A = width * height;
	return A;			// 리턴이 출력되는 대상 (void = 만약 윗 int 선언이아니고 void일 경우 리턴하지 않겠다는 결과임)
}

int Rectangle::getdul()
{
	int B = (width + height) * 2;
	return B;
}
