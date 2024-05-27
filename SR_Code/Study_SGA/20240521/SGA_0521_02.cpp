#include "stdafx.h"
#include <vector>
#include <list>

// std::list  리스트 (예를들어 게임중 퀘스트가 있을때 없을때 형태로 지우는 것으로 사용하고 지우는데도 사용하기도한다.)

// 구현: 이중 연결리스트 구현, c++ 표준 라이브러리 컨테이너
// 들어가는 값에 대한(요소) 삽입과 삭제가 빠름, 임의 접근이 느린것이 특징.

// 선언, 초기화
//list<string> smyList; //선언

list<int> imyList; // 초기화 사이즈 0
//list<int> imyList(10); // 초기화 사이즈 10
//list<int> myarrIntList = { 1, 2, 3, 4, 5, 6 }; // 배열 초기화


int main() {
	//요소 추가 및 삭제(함수 내부에서 호출)
	//메모리 공간의 추가
	imyList.push_back(6);              
	imyList.push_front(2);
	imyList.push_front(50);
	imyList.push_front(30);
	imyList.push_back(8);
//	30, 50, 2, 6, 8

	//cout << "imyList.size() 값은 = " << imyList.size() << endl; // 공간사이즈
	//cout << "imyList.front() 값은 = " << imyList.front() << endl; // 가장 앞 값
	//cout << "imyList.back() 값은 = " << imyList.back() << endl; // 가장 뒤 값
	//imyList.clear(); // 안에 전체 삭제하는것
	
	auto it = imyList.begin();
	
	advance(it, 3); // 칸수를 지정할수 있음 (it += 3) 주소값 3번 증가
	cout << *it << endl;
	

	imyList.erase(it); // 위에서 지정된값을 삭제

	//요소추가
	it = imyList.begin();
	advance(it, 3);
	imyList.insert(it, 10000); 

	//imyList.remove();

	
	//메모리 공간의 삭제
	imyList.pop_front(); // 가장 최근 넣은것이 가장 먼저 꺼낸다(마지막에 넣은것이기 때문에) (first in Last out)
	imyList.pop_back();
	//	삭제(30), 50, 2, 6, 삭제(8)
	

	for (auto it = imyList.begin(); it != imyList.end(); ++it) { // auto = 자동으로 컴파일 측정

		cout << *it << endl;
	
	}



	return 0;
}