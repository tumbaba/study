#pragma once
#include "CShape.h"

//	 �ڽ� Ŭ���� : public �θ�Ŭ����
class CRectangle : public CShape
{
public:
	int m_width, m_height;
	int m_area;
	int m_length;

	void Area();	// �Լ� - ����
	void Length();	// �Լ� - ����
	

}; //�����ݷ�

