#include "stdafx.h"
#include <set>

// set : 중복혀용 X, 연산 빠름 
// vector, list는 push pop으로 사용했지만 insert

/*
			Set 특징
		1. 중복 허용 안함
		2. 정렬 자동정렬, 내림차순
		3. 검색, 삽입, 삭제 빠르다.

			주요함수
		insert(값)  = 값을 추가, 중복된 값은 추가되지 않음
		erase(값)	= 값을 찾아서 삭제
		find(값)		= 매칭값을 찾아줌. 못찾으면 end()로 넘겨준다.
		begin(), end() = 시작, 끝을 가리키는 이터레이터를 반환
*/

int main() {

	set<int> mySet; // size 0

	if (mySet.empty()) //bool값으로 사용할수 있음
	{
		mySet.insert(5);
		mySet.insert(15);
		mySet.insert(30);
		mySet.insert(2);
	}

	mySet.insert(30);			// 중복된 값은 출력영향주지 않음

	for (int Value : mySet)		// 자동증가 fot loop문 
	{
		cout << Value << " ";	// set의 특징은 정렬되어 출력됨 5,15,30,2가 아니라 2,5,15,30 출력
	}
	cout << endl;

	cout << "erase(30) _ Test " << endl;
	
	//erase
	mySet.erase(30); // 지우기 
	mySet.erase(10); // 없는값을 지울때는 그대로 패스됨

	for (int Value : mySet)		
	{
		cout << Value << " ";	
	}
	cout << endl;


	//find
	auto it = mySet.find(20);

	if (it != mySet.end()) 
	{
		// 값을 찾았을시
		cout << "20 값을 찾았습니다. " << endl;
	}
	else
	{
		// 값을 못찾음
		cout << "20 값이 없습니다. " << endl;
		mySet.insert(20); // 있다면 set은 중복처리 안함
	}
	

	//for (int Value : mySet)
	for(auto it = mySet.begin(); it != mySet.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;


	cout << "mySet 사이즈는 : " << mySet.size();

	return 0;
}