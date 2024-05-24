//리스트 연습문제 : 리스트에 랜덤함수이용 30개정도를 랜덤값을 저장
//짝수만 삭제하고 리스트에 홀수만 남게하는 프로그램 작성
//홀수만 남은 것을 사이즈하고 홀수 숫자들 출력

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

	cout << "랜덤으로 뽑은 30개 숫자는? " << endl;
	
	for(auto it = Numbers.begin(); it != Numbers.end(); ++it) 
	{

		cout << *it << " ";

	}
	
	cout << endl << endl;

	cout << "홀수 뽑은 숫자는? " << endl;
	for (int i = 2; i < 100; i += 2)
	{
		Numbers.remove(i);
	}
	
	for (auto it = Numbers.begin(); it != Numbers.end(); ++it) {

		cout << *it << " ";

	}


	


	return 0;
}