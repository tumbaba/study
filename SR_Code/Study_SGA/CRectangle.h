#pragma once
#include "CShape.h"

//	 자식 클래스 : public 부모클래스
class CRectangle : public CShape
{
public:
	int m_width, m_height;
	int m_area;
	int m_length;

	void Area();	// 함수 - 면적
	void Length();	// 함수 - 길이
	

}; //세미콜론

