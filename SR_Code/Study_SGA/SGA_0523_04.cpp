// a~z, A~Z 배열(배열아니어도됨) 만듬
// 랜덤하게 문자를 선택해서 최대 15자로 된 문자열(string)만듬
// 문자열을 2개만듬  (문자열A, 문자열B)
// 두 문자열을 비교해서 같은 (문자열A - 문자열B) A와 B에 중된값 삭제한 A 출력 , A와 B에 중복된 값 삭제한 B 출력, 그리고 제거된 값 출력

// A = {"asADF"} B = {"DFC"}
// A-B = 출력 : "asA" , 삭제 : "DF"

#include "stdafx.h"
#include <set>
#include <list>
#include <vector>
#include <random>
#include <ctime>
list<char> A;
list<char> B;
list<char> C; // 중복되어있는 값

char randomLetter() {
	int r = rand() % 52;
	char base = (r < 26) ? 'A' : 'a';
	return (char)(base + r % 26);
}

int main() {

	srand(time(NULL));
	
	cout << "────────────A안에 들어있는 알파벳────────────" << endl;
	for (int i = 0; i < 15; i++)
	{
		char ch = randomLetter();
		A.push_back(ch);
		cout << ch << " ";
	}
	cout << endl << endl;
	cout << "────────────B안에 들어있는 알파벳────────────" << endl;
	for (int i = 0; i < 15; i++)
	{
		char ch = randomLetter();
		B.push_back(ch);
		cout << ch << " ";
	}
	cout << endl << endl;



	
	//중복된 문자 찾기
	for (auto it_A = A.begin(); it_A != A.end(); ++it_A) {
		for (auto it_B = B.begin(); it_B != B.end(); ++it_B) {
			if (*it_A == *it_B) {		// 두가지를 for문안에서 돌리고 돌린 값이 같은지 비교할때 같은경우
				C.push_back(*it_A);		// 중복된 분자를 C애 저장
				it_A = A.erase(it_A);	// A에서 제거하고 다음 요소로 이동 = erase는 반환된 반복자는 제거된 요소의 위치가 아니라, 제거된 요소의 다음 위치를 가리킴
										// 그래서 반환된 반복자를 다시 it_A 저장하여 다음요소를 가르키도록 만들고 for문이기때문에 아래 --조절을함 (++it_A 때문에)
				--it_A;					// erase는 지우고난 뒤 그다음값을 반환하게된다. 그래서 it_A가 다음 요소를 가리키도록 조정
				it_B = B.erase(it_B);
				--it_B;
			}
		}
	}


	cout << "────────────A안에 B와 중복되있는것을 지운 A안에 알파벳────────────" << endl;
	for (auto value : A)
	{
		cout << value << " ";
	}
	cout << endl << endl;

	cout << "────────────A안에 B와 중복되있는것을 지운 B안에 알파벳────────────" << endl;
	for (auto value : B)
	{
		cout << value << " ";
	}
	cout << endl << endl;
		
	cout << "────────────제거된 알파벳────────────" << endl;
	for (auto value : C) // 제거된 값 출력
	{
		cout << value << " ";
	}

	
	return 0;
}
