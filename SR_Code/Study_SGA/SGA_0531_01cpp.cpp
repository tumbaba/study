#include <iostream>	
#include <string>
#include <vector>
// 0531 - Template (함수, 클래스), 람다함수 ([],[&], [=]) 


using namespace std;
//Template : 아래에 있는 데이터 타입에 많은 독립적인 함수를 작성하는 C++ 템플릿 방식

template<typename T> // T를 일반적으로 표시 많이함
//template<typename T, typename T1>// 두개도 사용 가능(다른타입으로)

T Add(T a, T b) //T Add(T a, T b); 선언은 필요가 없음 // 예 : int Add(int a, int b)
{
	T c = a + b;
	return c;
}
//───────────────────────아래 각 자료형 함수들을 주석처리하겠음..───────────────────────

/*
// 더하기 함수 a+b = c  ( + 더하는값이 나오는것을 함수역할 하는 것)
// 1. 함수 선언
int Add(int a, int b); 

// 2. 함수 구조만들기(몸통)		// 오버로딩 때문에 같은함수 다른자료형으로 Add 가능
int Add(int a, int b)			// 정수 덧셈함수
{
	int c = a + b;
	return c;					// int형이기 때문에 int 값으로 반환. 예) int();
}

float Add(float a, float b);	// 실수 덧셈함수
float Add(float a, float b)
{
	float c = a + b;
	return c;					// float형이기 때문에 float 값으로 반환. 예) foat();
}

double Add(double a, double b);	// 실수 덧셈함수
double Add(double a, double b)	// float와 같은 실수(소수점이 길이가 다름)
{
	double c = a + b;
	return c;
}

string Add(string a, string b);	// 문자 덧셈함수
string Add(string a, string b)
{
	string c = a + b;
	return c;
}
*/
//────────────────────────────────────────────────────────────────────────────────────────────

// 4. 클래스 템플릿
template<typename T>
class MyClass { // 이 안에 int형이나 자료형들을 T로 바꾼다.
private :
	T data;
public:
	MyClass(T d) : data(d) {}
	T getData() { return data; }

};

/*
────────────────────요약────────────────────
템플릿 함수
	1. 생성 : 함수호출시 컴파일러가 타입을 추론하여 인스턴스화
			template<typename T>
			T Add(T a, T b) 
				{
				T c = a + b;
				return c;
				}
	
	2. 사용 : 일반 함수처럼 호출

템플릿 클래스
	1. 생성 : 
			template<typename T>
			class MyClass 
			{
			private:
				T data;
			public:
				MyClass(T d) : data(d) {}
				T getData() { return data; }
			};

	2. 사용 : 인스턴스화된 객체를 타입지정해서 맴버접근
*/


int main() {

	// 3. 함수 호출

	int c = Add(10, 30);					// int 형태 지역변수로
	float d = Add(50.5f, 20.3f);			// float 형태 지역변수로
	double e = Add(10.51523, 11.213562);	// double 형태의 지역변수로
	
	cout << "int c : " << c << endl;
	cout << "float d : " << d << endl;
	cout << "double e : " << e << endl;

	cout << "템플릿을 이용하면 다른 함수 몸체가 필요없습니다." << endl << endl;


	// 클래스도 템플릿 형태로 가능..
	MyClass<int> intObj(5); // 위 클래스 템플릿의 T에 5(정수)를 넣음
	MyClass<string> strObj("하이");
	MyClass<double> doubleObj(1000.33333);

	cout << intObj.getData() << endl;
	cout << strObj.getData() << endl;
	cout << doubleObj.getData() << endl;

	cout << "템플릿을 이용하면 클래스 템플릿으로도 만들수 있습니다." << endl << endl;


	// ★람다★ : 익명함수를 생성하고 전달하는데 사용하는 함수형 프로그래밍 개념.
	//			 간결하게 표현하고 코드를 간소화 하는데 활용됨.

	// 간단한 정수를 더하는 람다함수 생성(예시)
	// 이름없고 ★꺽쇠(의미있음)★필요
	// [&], [=] 2개 있음 (캡처 표현식) 
	
	// 1. [&] : 외부변수를 람다함수 안에서 참조로 캡처한다. (람다함수 내에서 외부변수를 변경할때 사용)
	// [&]
	int I = 5;
	auto add = [&](int x, int y) -> int { 
		I++;	// 람다 함수 내에서 외부변수를 사용하기위한 것
		x += I; // 예시 : 외부변수 캠쳐시 [&] 
		return x + y;
		};

	int result = add(1000, 3000);
	cout << "람다함수 [&] 결과 : " << result << endl;
	
	//2. [=] : 외부 변수를 함수내에서 가져와 사용하는 것(읽기전용)
	auto J = 5;
	auto lamda = [=](){  //()파라미터 값 없으니 -> int반환값 없어도됨
		int y = J * 2;
		cout << y << endl;
		};
	cout << "람다함수 [=] 결과 : "; lamda();



	// 람다함수를 사용하는 이유는 간결한 코드작성, 일회성 사용, 표현력향상 등..






	return 0; 
}