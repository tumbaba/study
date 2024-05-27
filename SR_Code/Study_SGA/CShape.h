#pragma once
#include "stdafx.h"
#include "CPoint.h"

class CShape
{
public :
	
	//int m_x, m_y; // 중심점 => CPoint 교체
	CPoint center;


	virtual void Area();      // virtual 부모함수 쓰지않고 자식의 함수로 사용하도록
	virtual void Length();

	void Print(string str); // 스트링 치기 귀찮아서 이안에 함수 또 만듬


};

