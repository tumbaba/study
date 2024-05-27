#include "stdafx.h"
#include "CBox.h"



inline CBox::CBox(CPoint3* pv, CPoint3 _center)
{
	for (int i = 0; i < 8; i++)
	{
		this->v[i] = *(pv + i);
	}
	center3 = _center;
}

inline CBox::CBox()
{
	center3 = { 0, 0, 0 };
	for (int i = 0; i < 8; i++)
	{
		v[i] = { 0, 0, 0 };
	}
}



inline CBox::~CBox()
{
}

void CBox::Volume()
{
}
