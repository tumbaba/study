#include "stdafx.h"
#include <vector>
#include <list>

// std::list  ����Ʈ (������� ������ ����Ʈ�� ������ ������ ���·� ����� ������ ����ϰ� ����µ��� ����ϱ⵵�Ѵ�.)

// ����: ���� ���Ḯ��Ʈ ����, c++ ǥ�� ���̺귯�� �����̳�
// ���� ���� ����(���) ���԰� ������ ����, ���� ������ �������� Ư¡.

// ����, �ʱ�ȭ
//list<string> smyList; //����

list<int> imyList; // �ʱ�ȭ ������ 0
//list<int> imyList(10); // �ʱ�ȭ ������ 10
//list<int> myarrIntList = { 1, 2, 3, 4, 5, 6 }; // �迭 �ʱ�ȭ


int main() {
	//��� �߰� �� ����(�Լ� ���ο��� ȣ��)
	//�޸� ������ �߰�
	imyList.push_back(6);              
	imyList.push_front(2);
	imyList.push_front(50);
	imyList.push_front(30);
	imyList.push_back(8);
//	30, 50, 2, 6, 8

	//cout << "imyList.size() ���� = " << imyList.size() << endl; // ����������
	//cout << "imyList.front() ���� = " << imyList.front() << endl; // ���� �� ��
	//cout << "imyList.back() ���� = " << imyList.back() << endl; // ���� �� ��
	//imyList.clear(); // �ȿ� ��ü �����ϴ°�
	
	auto it = imyList.begin();
	
	advance(it, 3); // ĭ���� �����Ҽ� ���� (it += 3) �ּҰ� 3�� ����
	cout << *it << endl;
	

	imyList.erase(it); // ������ �����Ȱ��� ����

	//����߰�
	it = imyList.begin();
	advance(it, 3);
	imyList.insert(it, 10000); 

	//imyList.remove();

	
	//�޸� ������ ����
	imyList.pop_front(); // ���� �ֱ� �������� ���� ���� ������(�������� �������̱� ������) (first in Last out)
	imyList.pop_back();
	//	����(30), 50, 2, 6, ����(8)
	

	for (auto it = imyList.begin(); it != imyList.end(); ++it) { // auto = �ڵ����� ������ ����

		cout << *it << endl;
	
	}



	return 0;
}