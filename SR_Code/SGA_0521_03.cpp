//����Ʈ �������� : ����Ʈ�� �����Լ��̿� 30�������� �������� ����
//¦���� �����ϰ� ����Ʈ�� Ȧ���� �����ϴ� ���α׷� �ۼ�
//Ȧ���� ���� ���� �������ϰ� Ȧ�� ���ڵ� ���

#include "stdafx.h"
#include <vector>
#include <list>
#include <random>
#include <ctime>

list<int> Numbers;

int main() {

	srand(time(NULL));

	for (int i = 0; i < 30; i++)
	{
		int ran = rand() % 100;

		Numbers.push_back(ran);
	}

	cout << "�������� ���� 30�� ���ڴ�? " << endl;
	
	for(auto it = Numbers.begin(); it != Numbers.end(); ++it) 
	{

		cout << *it << " ";

	}
	
	cout << endl << endl;

	cout << "Ȧ�� ���� ���ڴ�? " << endl;
	for (int i = 2; i < 100; i += 2)
	{
		Numbers.remove(i);
	}
	
	for (auto it = Numbers.begin(); it != Numbers.end(); ++it) {

		cout << *it << " ";

	}


	


	return 0;
}