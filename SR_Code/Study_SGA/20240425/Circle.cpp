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
	float A = (radius / 2) * (radius / 2) * pi;      // 원의 면적 구하는 공식 = 반지름 x 반지름 x 파이(3.14)

	return A;
}
