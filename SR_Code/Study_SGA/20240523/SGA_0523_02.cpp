#include "stdafx.h"
#include <vector> // STL : Stadard Template Librey
#include <list>
// vector와 list 
// 연관컨테이너 : set, map 

// iterator (포인터이다) : 컨테이너 안에 타입을 지칭할때 사용하는 것 (배열하고 살짝 다르다)
// 반복연산자 기능이다.
//typedef vector<int>::iterator It_INT; // 기니까 이렇게 사용한다고 정리함
typedef list<int>::iterator It_INT;

int main() {
	
	// vector<int> vec = {1, 2, 3, 4, 5}; // size 5 
	// vector의 int형으로 이름은 vec = 그 공간에 대입된 값 다섯개
	list<int> vec = { 1, 2, 3, 4, 5 };
	
	cout << vec.size() << endl; // 사이즈 5 확인


	vec.push_back(10); // 위 5개
	vec.push_front(100);

	//It_INT it_start = vec.begin();
	//It_INT it_end = vec.end();

	It_INT it_start = vec.begin();
	It_INT it_end = vec.end();

	for (auto it_start = vec.begin(); it_start != vec.end(); ++it_start) {
		
		(*it_start) *= 2; // +=와 같이 *= 포인트값으로 주소안의 값들을 변경시켜줌
		
		cout << *it_start << " ";
	}
	cout << endl;

	//범위기반 for 루프 사용방법 (위보다 빠르게 할 경우)
	for (int value : vec) { // 위에가 길경우 int에 있음 value 네임을 지정하고 : vec에 있는 내용에 접근
		cout << value << " ";
	}
	cout << endl;
	
	
	cout << vec.size() << endl; // 사이즈 동적할당
	// 포인터를 가리킴 // it = 변수이름 (it 주소값을 가리킨다.)
	

	

	return 0;
}