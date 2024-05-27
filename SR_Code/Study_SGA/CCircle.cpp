#include "stdafx.h"
#include "CCircle.h"

void CCircle::Area()
{
	m_area = PI * radius * radius;
	Print("상속되지않고 자식이 별도로 사용하는 CCircle::Area를 호출합니다.");
}

void CCircle::Length()
{
	m_length = 2 * PI * radius;
	Print("상속되지않고 자식이 별도로 사용하는 CCircle::Length를 호출합니다. ");
}
