#include "stdafx.h"
#include "CRectangle.h"



void CRectangle::Area()
{

	CShape::Area(); // �θ� �ִ� �Լ��� ȣ���� �� �ִ�.

	m_area = m_width* m_height;
	
	Print("��ӵ����ʰ� �ڽ��� ������ ����ϴ� CRectangle::Area�� ����մϴ�.");
	// cout << "��ӵ����ʰ� �ڽ��� ������ ����ϴ� CRectangle::Area�� ����մϴ�." << endl;
}

void CRectangle::Length()
{
	m_length = (m_width + m_height) * 2;
	Print("��ӵ����ʰ� �ڽ��� ������ ����ϴ� CRectangle::length�� ����մϴ�.");
	// cout << "��ӵ����ʰ� �ڽ��� ������ ����ϴ� CRectangle::length�� ����մϴ�." << endl;
}
