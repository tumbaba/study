#pragma once
#include "CShape.h"

//	 자식 클래스 : public 부모클래스
class CCircle : public CShape
{
public:
	
	int radius;
	int m_area;
	int m_length;

	void Area();		// 함수 - 면적
	void Length();	// 함수 - 둘레


};

