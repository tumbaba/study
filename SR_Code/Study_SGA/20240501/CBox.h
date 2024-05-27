#pragma once
#include "CShape.h"


class CBox :public CShape
{
public:
	CPoint3 center3; // Áß½ÉÃà È¸Àü ±âÁØµÇµµ·Ï
	CPoint3 v[8];

public:
	CBox() ;
	CBox(CPoint3* pv, CPoint3 _center);
	~CBox();


	void Init(CPoint3 v[8], CPoint3 _center);
	void Volume();

};
