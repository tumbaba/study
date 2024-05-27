#include "stdafx.h"

// �޸� ���� & ���� ����

class Object {
public:
	int value;

	//������
	Object(int val) : value(val) {}// �����ڸ� ���� �ʱ�ȭ

	void printValue() {
		cout << "Value : " << value << endl;
	}
};

//#define OBJECT_MAX 5  �Ʒ� const�� ���� ������ ���

int main() {
	const int OBJECT_MAX = 6; // ��ü�� ����
	
	//object[5][5]  ���߹迭�� ������ �޸� �Ҵ��� ���������?
	Object** objects = new Object * [OBJECT_MAX]; // ���� ������ �迭 ���� �Ҵ�
	for (int i = 0; i < OBJECT_MAX; i++)
		objects[i] = new Object(i);

	for (int i = 0; i < OBJECT_MAX; i++)
		objects[i]->printValue();

	// �޸� ����
	for (int i = 0; i < OBJECT_MAX; i++)
		delete[] objects[i];

	delete[] objects;


	return 0;
}

