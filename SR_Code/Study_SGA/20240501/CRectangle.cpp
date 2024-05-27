#include "stdafx.h"
#include "CRectangle.h"



void CRectangle::Area()
{

	CShape::Area(); // 부모에 있는 함수를 호출할 수 있다.

	m_area = m_width* m_height;
	
	Print("상속되지않고 자식이 별도로 사용하는 CRectangle::Area를 사용합니다.");
	// cout << "상속되지않고 자식이 별도로 사용하는 CRectangle::Area를 사용합니다." << endl;
}

void CRectangle::Length()
{
	m_length = (m_width + m_height) * 2;
	Print("상속되지않고 자식이 별도로 사용하는 CRectangle::length를 사용합니다.");
	// cout << "상속되지않고 자식이 별도로 사용하는 CRectangle::length를 사용합니다." << endl;
}
