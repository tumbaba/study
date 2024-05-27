#include "stdafx.h"
#include "CTriangle.h"

void CTriangle::Area()
{
	
	m_Area = (m_width * m_height) / 2;

	//Print("상속되지않고 자식이 별도로 사용하는 CTriangle::Area를 사용합니다");
	Print("삼각형의 높이는 : " + to_string(m_Area));
}
