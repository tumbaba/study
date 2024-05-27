#include "stdafx.h"
#include <vector> // STL : Stadard Template Librey
#include <list>
// vector�� list 
// ���������̳� : set, map 

// iterator (�������̴�) : �����̳� �ȿ� Ÿ���� ��Ī�Ҷ� ����ϴ� �� (�迭�ϰ� ��¦ �ٸ���)
// �ݺ������� ����̴�.
//typedef vector<int>::iterator It_INT; // ��ϱ� �̷��� ����Ѵٰ� ������
typedef list<int>::iterator It_INT;

int main() {
	
	// vector<int> vec = {1, 2, 3, 4, 5}; // size 5 
	// vector�� int������ �̸��� vec = �� ������ ���Ե� �� �ټ���
	list<int> vec = { 1, 2, 3, 4, 5 };
	
	cout << vec.size() << endl; // ������ 5 Ȯ��


	vec.push_back(10); // �� 5��
	vec.push_front(100);

	//It_INT it_start = vec.begin();
	//It_INT it_end = vec.end();

	It_INT it_start = vec.begin();
	It_INT it_end = vec.end();

	for (auto it_start = vec.begin(); it_start != vec.end(); ++it_start) {
		
		(*it_start) *= 2; // +=�� ���� *= ����Ʈ������ �ּҾ��� ������ ���������
		
		cout << *it_start << " ";
	}
	cout << endl;

	//������� for ���� ����� (������ ������ �� ���)
	for (int value : vec) { // ������ ���� int�� ���� value ������ �����ϰ� : vec�� �ִ� ���뿡 ����
		cout << value << " ";
	}
	cout << endl;
	
	
	cout << vec.size() << endl; // ������ �����Ҵ�
	// �����͸� ����Ŵ // it = �����̸� (it �ּҰ��� ����Ų��.)
	

	

	return 0;
}