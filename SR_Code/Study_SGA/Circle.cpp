#include "Circle.h"

Circle::Circle()
{
	
}
Circle::Circle(float r)
{
	radius = r;
}


Circle::~Circle()
{

}



double Circle::getArea() 
{
	float pi = 3.141592;
	float A = (radius / 2) * (radius / 2) * pi;      // ���� ���� ���ϴ� ���� = ������ x ������ x ����(3.14)

	return A;
}