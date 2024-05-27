#include "stdafx.h"
#include "SingleTon.h"
// oop Ŭ������ Ȱ������ �Ϻ�(������� ���� ������ �ϳ�)
// �̱��� ����(���� ���ο����� �ַ� ����� �� �ִ� Ȱ��)
// �ѹ��� �����ǵ��� New ���·� static �������.. ��ȭ�����̶�µ� ���������� ����Ը��� �𸣰���


//�߻� Ŭ���� (�ڽ��� �ʿ���)
class Animal { // Class : ù��° �빮��
public:
	virtual void makesound() = 0; // ���� �����Լ� : �ڽĿ� ����ϱ����� �����Լ� (virtual�� ����)
};

class Dog :public Animal { // �θ�� �ڽ��� ��Ӱ���
public:
	Dog() {
		nType = 0;
	}

	Dog(int _type) {
		nType = _type;
	}
	static int nType; // ����
	// �� ���� �����Լ��� 0���̱� ������ �ڡڡڱ��� ���ϴ��󵵡ڡڡ� ������ �־ ����������
	string name;
	virtual void makesound() override { // override�� �Ἥ �����ϴ°� ��
		if (nType == 1)
		{
			 cout << "��!!!!!! ��!!!!!!!!\n"; 
		}
		else
		{
			cout << "��! ��!\n";
		}
	// cout << "��! ��!\n";
	
	} 
	// ������� ���� �ٸ� ������ ������ �����Ҷ� �� �����Լ��տ� virtual���� // ������ ��� ����⺸�� ���� �����Ƿ��� Type�� ����
	~Dog() {}


	// static �Լ� ����
	static void Display()
	{
		
		cout << "static �Լ��� Dog::Display(); ȣ��Ǿ����ϴ�.\n";
		// name = "�������̸�"; //  name�� �ʱ�ȭ���� ���� ����־ ȣ���� �������� �ʴ�. 
	}
};

class BlackDog : public Dog {
public:
	void makesound() override { cout << "��!!!!!! ��!!!!!!!!\n"; }
};

void Display() // ����ƽ�� ���̸� �޸𸮰����� �����ϴ� ��
{
	cout << "�Ϲ� �Լ��� Display(); ȣ��Ǿ����ϴ�.\n";
}

// ����ƽ ���� ȣ����
int Dog::nType = 0; // ���� static�� Ŭ���� �ȿ����� ����Ҽ� ������ ���� �̸� ȣ����ġ�� �ٸ��⶧���� �ʱ�ȭ�������
					// ȣ�� ����� class �̸��� �ٿ�����Ѵ�.
static int Num = 0; 

//�̱��� ������� �̿��Ѱ� �̿��� Ŭ����
class AnimalManger : public Singleton {
	Dog dog;
};


int main() {

	Dog::nType = 1;
	
	Dog::Display(); // ����ƽ�Լ� ȣ��

	Display();		// �Ϲ� �Լ� ȣ��

	Dog dog, blackdog(Dog::nType);
	//BlackDog blackdog;
	
	dog.makesound();
	blackdog.makesound();
	
	blackdog.Display();

	

	AnimalManger *pMng = (AnimalManger*)AnimalManger::getInstance();

	//pMng->dog.makesound();


	return 0;
}
