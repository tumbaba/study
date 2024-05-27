#include "stdafx.h"
#include <set>

// set : �ߺ����� X, ���� ���� 
// vector, list�� push pop���� ��������� insert

/*
			Set Ư¡
		1. �ߺ� ��� ����
		2. ���� �ڵ�����, ��������
		3. �˻�, ����, ���� ������.

			�ֿ��Լ�
		insert(��)  = ���� �߰�, �ߺ��� ���� �߰����� ����
		erase(��)	= ���� ã�Ƽ� ����
		find(��)		= ��Ī���� ã����. ��ã���� end()�� �Ѱ��ش�.
		begin(), end() = ����, ���� ����Ű�� ���ͷ����͸� ��ȯ
*/

int main() {

	set<int> mySet; // size 0

	if (mySet.empty()) //bool������ ����Ҽ� ����
	{
		mySet.insert(5);
		mySet.insert(15);
		mySet.insert(30);
		mySet.insert(2);
	}

	mySet.insert(30);			// �ߺ��� ���� ��¿������� ����

	for (int Value : mySet)		// �ڵ����� fot loop�� 
	{
		cout << Value << " ";	// set�� Ư¡�� ���ĵǾ� ��µ� 5,15,30,2�� �ƴ϶� 2,5,15,30 ���
	}
	cout << endl;

	cout << "erase(30) _ Test " << endl;
	
	//erase
	mySet.erase(30); // ����� 
	mySet.erase(10); // ���°��� ���ﶧ�� �״�� �н���

	for (int Value : mySet)		
	{
		cout << Value << " ";	
	}
	cout << endl;


	//find
	auto it = mySet.find(20);

	if (it != mySet.end()) 
	{
		// ���� ã������
		cout << "20 ���� ã�ҽ��ϴ�. " << endl;
	}
	else
	{
		// ���� ��ã��
		cout << "20 ���� �����ϴ�. " << endl;
		mySet.insert(20); // �ִٸ� set�� �ߺ�ó�� ����
	}
	

	//for (int Value : mySet)
	for(auto it = mySet.begin(); it != mySet.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;


	cout << "mySet ������� : " << mySet.size();

	return 0;
}