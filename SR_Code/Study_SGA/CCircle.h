#pragma once
#include "CShape.h"

//	 �ڽ� Ŭ���� : public �θ�Ŭ����
class CCircle : public CShape
{
public:
	
	int radius;
	int m_area;
	int m_length;

	void Area();		// �Լ� - ����
	void Length();	// �Լ� - �ѷ�


};

