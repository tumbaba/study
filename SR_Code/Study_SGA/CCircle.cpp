#include "stdafx.h"
#include "CCircle.h"

void CCircle::Area()
{
	m_area = PI * radius * radius;
	Print("��ӵ����ʰ� �ڽ��� ������ ����ϴ� CCircle::Area�� ȣ���մϴ�.");
}

void CCircle::Length()
{
	m_length = 2 * PI * radius;
	Print("��ӵ����ʰ� �ڽ��� ������ ����ϴ� CCircle::Length�� ȣ���մϴ�. ");
}
