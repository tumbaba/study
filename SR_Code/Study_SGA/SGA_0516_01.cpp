#include <iostream>  // cout, cin
#include <string>


// ���� --- ���ӽ����̽�, ����
using namespace std;

// ���ӽ����̽� : �ڵ忡�� �̸� �浹�� �����ϱ� ���� ���

//����κ� 
//namespace �̸�
//{     ���ӽ����̽� ���� ����
 
//}     ���ӽ����̽� ���� �� 

namespace MyNameSpace {
	
	// ���� ����
	// ���� Ÿ��, �����̸� = �ʱ�ȭ��;
	
	int value = 4200; // ���ӽ����̽� �ȿ� �������� (int �׸��� ����Ű�� value �̸�)
	
	// ���� Ÿ�� = short, int, float, double, long int, long doubla..... 
	// ���� �տ� unsigned ����� ��� 0���� (+)�������
	// ���� Ÿ�Կ����� ���� ���� -- �����ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�

	// ���� ���� = ���� Ÿ���� ���, ���ϰ��� �ִ� �Լ�
	// ���� �̸� = ���, ���ϰ��� �������ִ� �Լ� 



	void Prints(string input) // �ܺο��� �Էµ� ���� �ٷ� ���
	{
		cout << input << endl;
	}


	int Add(int a, int b)
	{
		int c = (a + b)*2;  // �Լ� ���� �ۼ�

		return c; 
	}


}

using namespace MyNameSpace;
// �� : 10 + 100 = 110 ����������
int Add(int a, int b); // int a�� 10, int b�� 100

int Add(int a, int b) 
{
	int c = a + b;

	return c;  // ��ȯ�� ��� (a+b)
}

// ���ʿ��� ���� ���... (��� unsigned  ����� �Ϸ��� �����ϰ� �������� �����ϸ鼭 �Լ��������� ���ذ���������.. �����ѹ���)
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

	//���ʿ��� ���� ���... (��� unsigned  ����� �Ϸ��� �����ϰ� �������� �����ϸ鼭 �Լ��������� ���ذ���������..�����ѹ���)
	/*
	int level = 0;
	int exp = 1100;
	
	level = LevelUp(level, exp);

	cout << "Level = " << level <<"\t" << "Exp = " << exp << endl;
	*/


	int value = 42; // ���� �ȿ� ��������

	
	//cout << "Local value = " << value << endl;
	cout << "MyNameSpace value = " << value << endl;

	// :: ȣ���ϸ� ��������, �����Լ��� ȣ��
	//using namespace MyNameSpace; ������� �ʾ��� ���
	cout << "MyNameSpace value = " << ::value << endl;

	//���ӽ����̽� �Լ� ���
	::Prints("���ӽ����̽� ����� �Լ��� �̿� ���");

	//�Լ� 10 + 100 = 110 ��� 
	int sum = ::Add(10, 100); // sum ������� �ʾƵ������� ������ؼ� sum ����
	int mul = MyNameSpace::Add(10, 100);

	cout << "Sum = " << sum << endl;
	cout << "mul = " << mul << endl;





	return 0;
}