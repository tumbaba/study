#include "stdafx.h"
#include <list>
#include <vector>
#include <random>
#include <ctime>

// 1 ~ 20������ ������ ���� ���� int�� �����ϴ� ����Ʈ �����̳� �����
// ����Ʈ ������ 20
// �ߺ����ڸ� �����ϴ� ���α׷�
// �ߺ��� ���ڵ鵵 ���

list<int> Numbers;
list<int> SameNumbers;

int main() {

	srand(time(NULL));	
	
	// ������ 20�� ����
	for (int i = 0; i < 20; i++)  // ������ 20���� ���� 1~20 ���� �ȿ� ����
	{
		int ran = rand() % 20;
		Numbers.push_back(ran);
	}

	cout << "�������� 1���� 20���� ���� ���ڴ�?" << endl;

	for (auto it = Numbers.begin(); it != Numbers.end(); it++) // ���� ������ 20���� ���
	{
		cout << *it << " ";
	}
	cout << endl << endl;

	//�ߺ��� ���� ã��
	for (auto it = Numbers.begin(); it != Numbers.end(); ++it){
		bool isSame = false;
		for (auto it2 = it; it2 != Numbers.end(); ++it2){
			if (it != it2 && *it == *it2) { // it != it2 (it�� it2�� ������ġ�� ����Ű�� �ʴ���?) AND *it == *it2(�ΰ��� ����Ű�°��� ������?)  
				// ���߿����� && �Ѵ� ���϶� (bool isSame�� True�� ��ȯ)
				isSame = true;
				// ù��° for���� ���ѹݺ��� ������ ���ؼ� break;
				break;
			}
		}
		if (isSame) { //�ߺ� ���ڸ� ã�� ��, �ߺ� ���ڸ� SameNumbers�� �߰�
			SameNumbers.push_back(*it);
		}
	}




	cout << "�ݺ��� ���ڵ��� ����� ���� ���ڴ�?" << endl;

	Numbers.sort(); // ���� 20�� ���� ���� 
	Numbers.unique(); // ���� �� 20������ ���� ������ �ݺ��Ȱ� �����
	for (auto it = Numbers.begin(); it != Numbers.end(); it++) // �ݺ��Ȱ� ����� �� ���� ���� ���
	{
		cout << *it << " ";
	}
	cout << endl << endl;


	

	cout << "������ �ݺ��Ǿ� ������ ���ڴ�?" << endl;

	//�ߺ��� ����
	SameNumbers.sort(); // �ߺ��� ���� ���� ����
	SameNumbers.unique(); // �ߺ��� �� �����
	for (auto it = SameNumbers.begin(); it != SameNumbers.end(); ++it)
	{
		cout << *it << " ";
	}


	cout << endl << endl;
	



	return 0;
}