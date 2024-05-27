#include "stdafx.h"
// SET 추가내용 교육 : set 은 key가 있는 STL 
#include <set> 
//	중복 X, 자동정렬 
#include <unordered_set>
//	중복 X, 자동정렬X		

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
		// 정렬은 되지않지만 중복은 안됨.
	}

	cout << endl;

	if (uo_mySet.find(100) != uo_mySet.end())
	{
		cout << " O 찾으려는 숫자가 있음";
	}
	else
	{
		cout << " X 찾으려는 숫자가 없음";
	}

	uo_mySet.erase(100); // 100을 지우고난 다음에는 메모리가 지정하는 구간이 비어있고 그다음수값이 채워진다.

	return 0;
}