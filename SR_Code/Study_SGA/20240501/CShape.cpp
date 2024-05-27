#include "stdafx.h"
#include "CShape.h"

using namespace std;

void CShape::Area()
{
	cout << "상속된 함수 CShape :: Area()를 사용했습니다." << endl;
}

void CShape::Length()
{
	cout << "상속된 함수 CShape :: Length()를 사용했습니다." << endl;
}

void CShape::Print(string str)
{
	cout << str << endl;
}
