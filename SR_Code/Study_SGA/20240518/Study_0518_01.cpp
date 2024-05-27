#include <iostream>
using namespace std;

/*
int main() {
	// ──────────────────────────────────────────043 실수 소수점 버리고 올리기 ──────────────────────────────────────────
	cout << "\t 소수점 버리기" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl;
	cout << "floor(2.3) : " << floor(-2.3) << endl;
	cout << "floor(40.5) : " << floor(40.5) << endl;
	cout << "floor(55.7) : " << floor(-55.7) << endl;
	cout << "floor(100.9) : " << floor(100.9) << endl;

	cout << "\n\n\t 소수점 올리기" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl;
	cout << "ceil(2.3) : " << ceil(-2.3) << endl;
	cout << "ceil(40.5) : " << ceil(40.5) << endl;
	cout << "ceil(55.7) : " << ceil(-55.7) << endl;
	cout << "ceil(100.9) : " << ceil(100.9) << endl;

	//반올림이 아니고 올림과 내림이다.
	//1. floor - 실수의 소수점을 버리고 출력 함수 (양수는 소수점 버려지고 음수면 실수보다 적은수를 돌려주기 때문에 -2.3이 .3을 버리는 것이아니라 -3이되는것임)
	//2. ceil - 실수의 소수점을 올려주는 출력함수 (양수는 소수점이 올려주고 음수도 그모다 올린값을 표현함 -55.7에서 올려거 -56이 되는것이 아니라 -55가 값이 더 크기때문에 그렇게 출력됨)

	// ──────────────────────────────────────────044 반올림 ──────────────────────────────────────────
	cout << "\n\n\t 반올림 round" << endl;
	cout << "round(1.1) : " << round(1.1) << endl;
	cout << "round(2.3) : " << round(-2.3) << endl;
	cout << "round(40.5) : " << round(40.5) << endl;
	cout << "round(55.7) : " << round(-55.7) << endl;
	cout << "round(100.9) : " << round(100.9) << endl;
	// 음수도 -55.7의 반올림이 -55가 되는것이 아니라 -56이 됨으로 floor, ceil과는 다르게 의도치않은 결과 출력(음수변환할때는 round, ceil, floor 조심해야할 것)


	return 0;
}
*/
/*
// ──────────────────────────────────────────047 제곱근 구하기(sqrt) ──────────────────────────────────────────
int main() {
	//sqrt 
	cout << "4의 제곱근 : " << sqrt(4.0) << endl;
	cout << "16의 제곱근 : " << sqrt(16) << endl;
	cout << "64의 제곱근 : " << sqrt(64) << endl;
	cout << "256의 제곱근 : " << sqrt(256.0) << endl;

	return 0;
}
//
*/
// ──────────────────────────────────────────050 무작위로 문자열과 배열 섞기 ──────────────────────────────────────────

#include <random>
#include <ctime>
/*
int main() {

	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "republic of korea";
	int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	srand(static_cast<unsigned int>(time(NULL)));

	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	random_shuffle(data1, data1 + 4); // 배열 data1[10]개에서 data1의 인덱스 (0~3)까지만 무작위로 재배치 한다는 의미


	cout << "== str1 ==" << endl;
	for (auto i : str1)
		cout << i << ", ";

	cout << endl << "== str2 ==" << endl;
	for (auto i : str2)
		cout << i << ", ";

	cout << endl << "== data1 ==" << endl;
	for (auto i : data1)
		cout << i << ", ";

	return 0;
}
*/
// ──────────────────────────────────────────053 문자열 비교하기 (string.compare) ──────────────────────────────────────────
/*
int main() {

	string name1 = "연성록";
	string name2 = "연성하";

	if (name1.compare(name2) == 0)   // 위 string 함수 두개 비교하는 if문 안에 조건이 (스트링네임.compare(스트링네임) == 0)햇을 경우 비교할 수 있음
		cout << "같은 문자열입니다\n";
	else
		cout << "다른 문자열입니다\n";

	return 0;
}
*/

// ──────────────────────────────────────────054 문자열 조회하기 (find) ──────────────────────────────────────────
#include <string>

int main() {

	string name1 = "연성록은 공부중이다";
	
	int rtn = name1.find("연성록");  // 해당하는 string의 제목을 쓰고 .find("검색하는 내용"); 하는 경우 검색할 수 있다.

	if (rtn == 0)   
		cout << "문자열 찾음. 위치는 " << rtn <<"입니다."<< endl;
	else
		cout << "문자열 찾을 수 없음." << endl;

	return 0;
}

