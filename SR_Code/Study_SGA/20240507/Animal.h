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


private:
	void Print();
public:
	void Print(string name);
	void Print(int number);
	void playSound();

	string sound;
	int legs;

public:
	~Animal();						// �Ҹ���
};

