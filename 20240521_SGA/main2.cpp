#include "stdafx.h"


/*
list
구현 : 이중 연결 리스트 구현 , c++ 표준 라이브러리 컨테이너
 요소의 삽입과 삭제가 빠르지만 임의 접근이 느린 특징이다.

  선언 ,  초기화

  list
*/
// 동적 배열이 아니라 연결 리스트(Linked List)입니다. 
// 연결 리스트는 동적 메모리 할당을 사용하여 데이터를 저장하며,
// 각 노드는 데이터와 다음 노드를 가리키는 포인터로 구성됩니다.

list<string> myStringList;
//list<int> myList;  // 사이즈 0
list<int> myList(5);  // 초기화 사이즈 5
list<int> myIntList = { 1,2,3,4,5,6 };   // 초기화 사이즈 6


// 리스트 연습 문제
// 리스트에 랜덤 함수 이용 30개 정도를  랜덤 값을 저장  (정수로)
// 짝수만 삭제하고 리스트에 홀수만 남기기

list<int> practiceList;


int main()
{
	myList.push_back(7);
	myList.push_front(8);
	auto it = myList.begin();
	advance(it, 4);
	myList.insert(it, 40);

	/*for (auto it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << endl;
	}*/

	cout << endl;

	myList.pop_back();

	//myList.remove(0);
	/*auto it2 = myList.begin();
	advance(it2, 2);
	myList.erase(it2);
	for (auto it = myList.begin(); it != myList.end(); it++)
	{
		cout << *it << endl;
	}*/


	for (int i = 0; i < 30; i++)
	{

		int j = rand() % 100;
		practiceList.push_front(j);

	}

	for (auto it = practiceList.begin(); it != practiceList.end(); it++)
	{
		cout << *it << endl;
	}
	

	cout << "--------------홀수만-----------" << endl;
	for (int i = 0; i < 50; i++)
	{
		
		practiceList.remove(i*2);
	}

	for (auto it = practiceList.begin(); it != practiceList.end(); it++)
	{
		cout << *it << endl;
	}


	return 0;
}

