#pragma once
#include "stdafx.h"


// �����ε� overloading = �����̸����� �Ķ���Ͱ� �ٸ� �Լ��� ����ϴ°�
class Animal
{
private:
	string ani_name;				// �Ʒ� Ŭ������ ���޵Ǳ� ���� ������ ��
	int		 number;		 
	
	//��, �����, �� �� ���� ���������� �Ѱ����� �ϱ� ����⿡ ������� ����

	int type;
	//int legs;



public:
	Animal();						// �⺻ ������
						 
	Animal(string name);			// �߰� ������
	Animal(int num);
	Animal(string name, int num);	// �ΰ����� �ѹ��� ������� ���� �뵵�� �°Ի��..



private: // �ڽ�(����) Ŭ�����ȿ����� ���Ǵ� �Լ�
	void Print();

public: // �ڽ� + �ڽ� + �ܺο����� ȣ�Ⱑ���� ���� �Լ�
	void Print(string name);
	void Print(int number);
	
	string sound;
	int legs;
	
protected: // �ڽ� + �ڽ� Ŭ�������Ը� �����Ͽ� ��밡��(�ܺ� ��� �Ұ���)
	virtual void playSound(); 


public:
	~Animal();						// �Ҹ���
};

