#include <iostream>
#include <string>

using namespace std;


// 파일 캐스팅
int main() {

	//int num = 10;
	//float fnum;


	//fnum = (float)num;	// 타입 캐스팅 > int -> float
	//
	//cout << fnum << endl;
	//printf("%f\n", fnum);
	//

	//double b = (double)num;
	//cout << b << endl;
	//
	//

	//fnum = 3.141592f;

	//num = (int)fnum;	// 타입 캐스팅 float -> int
	//cout << num << endl;



	// static_cast<타입>  // 정적 캐스팅
	/*double dnum = 3.141592f;
	int d = static_cast<int>(dnum);
	cout << d << endl;*/

	// Dynamic_cast<타입> // 동적캐스팅
	class Animal {
		void foo() {}
	};
	class Dog :public Animal {
	};
	Dog* parentPtr = new Dog();
	Animal* dog = dynamic_cast<Animal*>(parentPtr); // 영역을 할당해서 캐스팅하기때문에


	
	// const_cast<타입>  // 상수캐스팅 
	int i = 200;
	
	const int* num = &i;
	
	int *r = const_cast<int*>(num); // const_int의 주소값에 num에 대입해준다
	*r = 5;
	cout << "r:" << i << endl; // i가 5로 바뀜
	

	return 0;
}