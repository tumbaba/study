#pragma once
class Rectangle
{
public:
	Rectangle(); // ������ (�̸��� class �̸��� ����)
	Rectangle(int w, int h);
	Rectangle(int w);
	~Rectangle(); // �Ҹ��� (������ ���ÿ� ���� �Ҹ����ش�)

private:				// Ŭ���� ����(���� ����)
	int width;
	int height;

	// �Լ��� Ŭ���� �ȿ� ����
public:
	int getArea(); // Ŭ���� ���� �Լ� ���� (get �� �������ڴ�)
	int getdul();


};

