#include <iostream>	
#include <string>
#include <vector>
// 0531 - Template (�Լ�, Ŭ����), �����Լ� ([],[&], [=]) 


using namespace std;
//Template : �Ʒ��� �ִ� ������ Ÿ�Կ� ���� �������� �Լ��� �ۼ��ϴ� C++ ���ø� ���

template<typename T> // T�� �Ϲ������� ǥ�� ������
//template<typename T, typename T1>// �ΰ��� ��� ����(�ٸ�Ÿ������)

T Add(T a, T b) //T Add(T a, T b); ������ �ʿ䰡 ���� // �� : int Add(int a, int b)
{
	T c = a + b;
	return c;
}
//�����������������������������������������������Ʒ� �� �ڷ��� �Լ����� �ּ�ó���ϰ���..����������������������������������������������

/*
// ���ϱ� �Լ� a+b = c  ( + ���ϴ°��� �����°��� �Լ����� �ϴ� ��)
// 1. �Լ� ����
int Add(int a, int b); 

// 2. �Լ� ���������(����)		// �����ε� ������ �����Լ� �ٸ��ڷ������� Add ����
int Add(int a, int b)			// ���� �����Լ�
{
	int c = a + b;
	return c;					// int���̱� ������ int ������ ��ȯ. ��) int();
}

float Add(float a, float b);	// �Ǽ� �����Լ�
float Add(float a, float b)
{
	float c = a + b;
	return c;					// float���̱� ������ float ������ ��ȯ. ��) foat();
}

double Add(double a, double b);	// �Ǽ� �����Լ�
double Add(double a, double b)	// float�� ���� �Ǽ�(�Ҽ����� ���̰� �ٸ�)
{
	double c = a + b;
	return c;
}

string Add(string a, string b);	// ���� �����Լ�
string Add(string a, string b)
{
	string c = a + b;
	return c;
}
*/
//����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������

// 4. Ŭ���� ���ø�
template<typename T>
class MyClass { // �� �ȿ� int���̳� �ڷ������� T�� �ٲ۴�.
private :
	T data;
public:
	MyClass(T d) : data(d) {}
	T getData() { return data; }

};

/*
������������������������������������������ড��������������������������������������
���ø� �Լ�
	1. ���� : �Լ�ȣ��� �����Ϸ��� Ÿ���� �߷��Ͽ� �ν��Ͻ�ȭ
			template<typename T>
			T Add(T a, T b) 
				{
				T c = a + b;
				return c;
				}
	
	2. ��� : �Ϲ� �Լ�ó�� ȣ��

���ø� Ŭ����
	1. ���� : 
			template<typename T>
			class MyClass 
			{
			private:
				T data;
			public:
				MyClass(T d) : data(d) {}
				T getData() { return data; }
			};

	2. ��� : �ν��Ͻ�ȭ�� ��ü�� Ÿ�������ؼ� �ɹ�����
*/


int main() {

	// 3. �Լ� ȣ��

	int c = Add(10, 30);					// int ���� ����������
	float d = Add(50.5f, 20.3f);			// float ���� ����������
	double e = Add(10.51523, 11.213562);	// double ������ ����������
	
	cout << "int c : " << c << endl;
	cout << "float d : " << d << endl;
	cout << "double e : " << e << endl;

	cout << "���ø��� �̿��ϸ� �ٸ� �Լ� ��ü�� �ʿ�����ϴ�." << endl << endl;


	// Ŭ������ ���ø� ���·� ����..
	MyClass<int> intObj(5); // �� Ŭ���� ���ø��� T�� 5(����)�� ����
	MyClass<string> strObj("����");
	MyClass<double> doubleObj(1000.33333);

	cout << intObj.getData() << endl;
	cout << strObj.getData() << endl;
	cout << doubleObj.getData() << endl;

	cout << "���ø��� �̿��ϸ� Ŭ���� ���ø����ε� ����� �ֽ��ϴ�." << endl << endl;


	// �ڶ��١� : �͸��Լ��� �����ϰ� �����ϴµ� ����ϴ� �Լ��� ���α׷��� ����.
	//			 �����ϰ� ǥ���ϰ� �ڵ带 ����ȭ �ϴµ� Ȱ���.

	// ������ ������ ���ϴ� �����Լ� ����(����)
	// �̸����� �ڲ���(�ǹ�����)���ʿ�
	// [&], [=] 2�� ���� (ĸó ǥ����) 
	
	// 1. [&] : �ܺκ����� �����Լ� �ȿ��� ������ ĸó�Ѵ�. (�����Լ� ������ �ܺκ����� �����Ҷ� ���)
	// [&]
	int I = 5;
	auto add = [&](int x, int y) -> int { 
		I++;	// ���� �Լ� ������ �ܺκ����� ����ϱ����� ��
		x += I; // ���� : �ܺκ��� ķ�Ľ� [&] 
		return x + y;
		};

	int result = add(1000, 3000);
	cout << "�����Լ� [&] ��� : " << result << endl;
	
	//2. [=] : �ܺ� ������ �Լ������� ������ ����ϴ� ��(�б�����)
	auto J = 5;
	auto lamda = [=](){  //()�Ķ���� �� ������ -> int��ȯ�� �����
		int y = J * 2;
		cout << y << endl;
		};
	cout << "�����Լ� [=] ��� : "; lamda();



	// �����Լ��� ����ϴ� ������ ������ �ڵ��ۼ�, ��ȸ�� ���, ǥ������� ��..






	return 0; 
}