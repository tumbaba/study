#include "stdafx.h"
#include "CTriangle.h"

void CTriangle::Area()
{
	
	m_Area = (m_width * m_height) / 2;

	//Print("��ӵ����ʰ� �ڽ��� ������ ����ϴ� CTriangle::Area�� ����մϴ�");
	Print("�ﰢ���� ���̴� : " + to_string(m_Area));
}
