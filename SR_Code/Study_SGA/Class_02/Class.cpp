#include <iostream>

using namespace std;

#include "Player.h"

// Ŭ����
// struct�� 99���� ��ġ�Ѵ�.
//		- ���赵
//			-- �ǹ��� ���� �� ����.
//			-- ��ü�� ���� �� ����.
// Ŭ������ ��ü�� ���� ������� ��!!!!!!!!!!!!!!!!!!!!!

// ��ü���� 3�Ӽ�
// 1. ���м�
// 2. ������
// 3. ��Ӽ�(�𸮾��� �ٽɱ���!!!)

// 1. ���м�
// struct�� class ���� : �⺻���������ڰ� struct�� ��---public---��, class�� ��---private---��
// ���������� : public, protected, private

struct Temp
{
private:
	int hp;
};

class Car
{
public:
	// ������
	// ������ ���� ȣ��Ǵ� �Լ�
	// �����ڿ��� ��������� �ʱ�ȭ �Ѵ�.

	Car() //�⺻������ : �Ϲ������� �������� �ʾƵ� ȣ��Ǵ� ������(�ٸ� �����ڰ� �ϳ��� ���� ���)
	{
		cout << "�⺻ ������ ȣ��" << endl;
		_handle = 0;
		_wheels = 4;
		_doors = 4;
		_engine = 1;
		
	}

	Car(int doors)
	{
		cout << "Ÿ�� ��ȯ ������ ȣ��" << endl; // �Ű������� �ִ� ������
		_doors = doors;
		_handle = 0;
		_wheels = 4;
		_engine = 1;
	
	}




	// �Ҹ���
	~Car()
	{
		cout << "�Ҹ��� ȣ��" << endl;
	}


public:		// �ܺο��� ���� ����
	int _handle;

private:	// ���ο����� ���� ����
	int _wheels;
	int _doors;

protected:	// ����, �ڽĿ����� ���� ����
	int _engine;

};

int main()
{
	Player p = Player(60, 10);
	p.TakeDamage(5);
	p.Print();


	return 0;
}