#include "Rectangle.h"

// ������
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




// �Ҹ���
Rectangle::~Rectangle()
{

}
int Rectangle::getArea() // Ŭ���� ���� �Լ� �����Ǵ� ����
{
	int A = width * height;
	return A;			// ������ ��µǴ� ��� (void = ���� �� int �����̾ƴϰ� void�� ��� �������� �ʰڴٴ� �����)
}

int Rectangle::getdul()
{
	int B = (width + height) * 2;
	return B;
}