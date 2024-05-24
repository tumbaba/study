#include "stdafx.h"
#include <list>
#include <vector>
#include <random>
#include <ctime>

// 1 ~ 20까지의 범위를 가진 숫자 int를 저장하는 리스트 컨테이너 만들기
// 리스트 사이즈 20
// 중복숫자를 삭제하는 프로그램
// 중복된 숫자들도 출력

list<int> Numbers;
list<int> SameNumbers;

int main() {

	srand(time(NULL));	
	
	// 랜덤값 20개 생성
	for (int i = 0; i < 20; i++)  // 랜덤값 20개를 숫자 1~20 범위 안에 생성
	{
		int ran = rand() % 20;
		Numbers.push_back(ran);
	}

	cout << "랜덤으로 1부터 20까지 뽑은 숫자는?" << endl;

	for (auto it = Numbers.begin(); it != Numbers.end(); it++) // 위에 랜덤값 20개를 출력
	{
		cout << *it << " ";
	}
	cout << endl << endl;

	//중복된 숫자 찾기
	for (auto it = Numbers.begin(); it != Numbers.end(); ++it){
		bool isSame = false;
		for (auto it2 = it; it2 != Numbers.end(); ++it2){
			if (it != it2 && *it == *it2) { // it != it2 (it와 it2가 같은위치를 가르키지 않는지?) AND *it == *it2(두개가 가리키는값이 같은지?)  
				// 이중연산자 && 둘다 참일때 (bool isSame을 True로 변환)
				isSame = true;
				// 첫번째 for문의 무한반복을 나가기 위해서 break;
				break;
			}
		}
		if (isSame) { //중복 숫자를 찾은 후, 중복 숫자를 SameNumbers에 추가
			SameNumbers.push_back(*it);
		}
	}




	cout << "반복된 숫자들을 지우고 남는 숫자는?" << endl;

	Numbers.sort(); // 랜덤 20개 숫자 정렬 
	Numbers.unique(); // 랜덤 값 20개에서 숫자 정렬중 반복된값 지우기
	for (auto it = Numbers.begin(); it != Numbers.end(); it++) // 반복된값 지우고난 뒤 남는 값들 출력
	{
		cout << *it << " ";
	}
	cout << endl << endl;


	

	cout << "여러개 반복되어 지워진 숫자는?" << endl;

	//중복된 숫자
	SameNumbers.sort(); // 중복된 숫자 순서 정렬
	SameNumbers.unique(); // 중복된 값 지우기
	for (auto it = SameNumbers.begin(); it != SameNumbers.end(); ++it)
	{
		cout << *it << " ";
	}


	cout << endl << endl;
	



	return 0;
}