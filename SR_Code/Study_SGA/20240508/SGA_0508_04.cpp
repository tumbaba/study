#include <iostream>
#include <string>

using namespace std;


// ���� ĳ����
int main() {

	//int num = 10;
	//float fnum;


	//fnum = (float)num;	// Ÿ�� ĳ���� > int -> float
	//
	//cout << fnum << endl;
	//printf("%f\n", fnum);
	//

	//double b = (double)num;
	//cout << b << endl;
	//
	//

	//fnum = 3.141592f;

	//num = (int)fnum;	// Ÿ�� ĳ���� float -> int
	//cout << num << endl;



	// static_cast<Ÿ��>  // ���� ĳ����
	/*double dnum = 3.141592f;
	int d = static_cast<int>(dnum);
	cout << d << endl;*/

	// Dynamic_cast<Ÿ��> // ����ĳ����
	class Animal {
		void foo() {}
	};
	class Dog :public Animal {
	};
	Dog* parentPtr = new Dog();
	Animal* dog = dynamic_cast<Animal*>(parentPtr); // ������ �Ҵ��ؼ� ĳ�����ϱ⶧����


	
	// const_cast<Ÿ��>  // ���ĳ���� 
	int i = 200;
	
	const int* num = &i;
	
	int *r = const_cast<int*>(num); // const_int�� �ּҰ��� num�� �������ش�
	*r = 5;
	cout << "r:" << i << endl; // i�� 5�� �ٲ�
	

	return 0;
}