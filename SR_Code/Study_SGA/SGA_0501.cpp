#include "stdafx.h"
#include "CCircle.h"
#include "CRectangle.h"
#include "CTriangle.h"
#include "CBox.h"

using namespace std; // namespace���� ������ ���Խ�Ŵ (std �� �ٸ� �κп��� ��밡��)

// class �θ� �ڽ� ���


int main() 
{
	CRectangle rect;
	CCircle circle;
	CTriangle triangle;
	
	/*
	CPoint3* pv = new CPoint3[8];
	CBox box;
	*/

	rect.center.m_x = 10;
	rect.center.m_y = 10;

	rect.m_width = 100;
	rect.m_height = 100;

	rect.Area();
	//rect.Length();

	circle.center.m_x = 20;
	circle.center.m_y = 20;
	circle.radius = 10;

	circle.Area();
	//circle.Length();
	
	triangle.m_width = 5;
	triangle.m_height = 10;
	triangle.Area();

	return 0;
}