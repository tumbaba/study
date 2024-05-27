#include "stdafx.h"
// SET �߰����� ���� : set �� key�� �ִ� STL 
#include <set> 
//	�ߺ� X, �ڵ����� 
#include <unordered_set>
//	�ߺ� X, �ڵ�����X		

int main()
{
	set<int> mySet;
	unordered_set<int> uo_mySet;

	mySet.insert(100);
	mySet.insert(10);
	mySet.insert(20);
	mySet.insert(10);

	for (int num : mySet)
	{
		cout << num << " ";
	}

	cout << endl;

	uo_mySet.insert(100);
	uo_mySet.insert(10);
	uo_mySet.insert(20);
	uo_mySet.insert(10);

	for (int num : uo_mySet)
	{
		cout << num << " ";
		// ������ ���������� �ߺ��� �ȵ�.
	}

	cout << endl;

	if (uo_mySet.find(100) != uo_mySet.end())
	{
		cout << " O ã������ ���ڰ� ����";
	}
	else
	{
		cout << " X ã������ ���ڰ� ����";
	}

	uo_mySet.erase(100); // 100�� ����� �������� �޸𸮰� �����ϴ� ������ ����ְ� �״��������� ä������.

	return 0;
}