#pragma once
#include "stdafx.h"
#include "CPoint.h"

class CShape
{
public :
	
	//int m_x, m_y; // �߽��� => CPoint ��ü
	CPoint center;


	virtual void Area();      // virtual �θ��Լ� �����ʰ� �ڽ��� �Լ��� ����ϵ���
	virtual void Length();

	void Print(string str); // ��Ʈ�� ġ�� �����Ƽ� �̾ȿ� �Լ� �� ����


};

