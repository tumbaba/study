#include <iostream>  // cout, cin
#include <string>


// 주제 --- 네임스페이스, 변수
using namespace std;

// 네임스페이스 : 코드에서 이름 충돌을 방지하기 위해 사용

//선언부분 
//namespace 이름
//{     네임스페이스 영역 시작
 
//}     네임스페이스 영역 끝 

namespace MyNameSpace {
	
	// 변수 선언
	// 변수 타입, 번수이름 = 초기화값;
	
	int value = 4200; // 네임스페이스 안에 지연변수 (int 그릇을 가리키는 value 이름)
	
	// 변수 타입 = short, int, float, double, long int, long doubla..... 
	// 변수 앞에 unsigned 사용할 경우 0부터 (+)양수영역
	// 변수 타입에대한 범위 조사 -- 과제★★★★★★★★★★★★★★★★★★★★

	// 변수 사용법 = 같은 타입의 결과, 리턴값이 있는 함수
	// 변수 이름 = 결과, 리턴값을 내보내주는 함수 



	void Prints(string input) // 외부에서 입력된 것을 바로 출력
	{
		cout << input << endl;
	}


	int Add(int a, int b)
	{
		int c = (a + b)*2;  // 함수 과정 작성

		return c; 
	}


}

using namespace MyNameSpace;
// 예 : 10 + 100 = 110 가정했을때
int Add(int a, int b); // int a가 10, int b가 100

int Add(int a, int b) 
{
	int c = a + b;

	return c;  // 반환값 출력 (a+b)
}

// 불필요한 내용 언급... (양수 unsigned  사용을 하려고 복잡하게 레벨업을 설명하면서 함수까지만들어서 이해가되지않음.. 엉뚱한방향)
int LevelUp(int curlevel, int& nExp)
{
	if (nExp > 1000)
	{
		nExp = 1000 - nExp;

		curlevel++;
	}

	return curlevel;
}

int main(){

	//불필요한 내용 언급... (양수 unsigned  사용을 하려고 복잡하게 레벨업을 설명하면서 함수까지만들어서 이해가되지않음..엉뚱한방향)
	/*
	int level = 0;
	int exp = 1100;
	
	level = LevelUp(level, exp);

	cout << "Level = " << level <<"\t" << "Exp = " << exp << endl;
	*/


	int value = 42; // 메인 안에 지역변수

	
	//cout << "Local value = " << value << endl;
	cout << "MyNameSpace value = " << value << endl;

	// :: 호출하면 전역변수, 전역함수를 호출
	//using namespace MyNameSpace; 사용하지 않았을 경우
	cout << "MyNameSpace value = " << ::value << endl;

	//네임스페이스 함수 사용
	::Prints("네임스페이스 사용한 함수를 이용 출력");

	//함수 10 + 100 = 110 사용 
	int sum = ::Add(10, 100); // sum 사용하지 않아도되지만 담기위해서 sum 만듬
	int mul = MyNameSpace::Add(10, 100);

	cout << "Sum = " << sum << endl;
	cout << "mul = " << mul << endl;





	return 0;
}