#include "stdafx.h"

// Class = protected (�θ� �ڽ� ������ protected)
// �ڽ�, �θ�ȿ������ public���� �ذ������� protected�� �ܺΰ�������(class ���� ���踸 ����)
// virtual�� �Լ����� �տ� �ٿ��� ��������� protected�� �ش� ������ ������ ���ǵ���..

//�θ� Ŭ����
class Parent {
protected: // protected �ɹ�
	int protectedVar;

public:
	Parent() : protectedVar(0) {}

	void setProtectedVar(int value) {
		protectedVar = value;
	}

	int getProtectedVar() const {
		return protectedVar;
	}
};

// �ڽ� Ŭ����
class Child : public Parent {
public:
	void accessProtected() {     // (int value �� ����Ҽ��� ����)
		// protected �ɹ��� ���� ����
		protectedVar = 42;
	}

	void displayProtected()	{
		cout << "Protected variable: " << protectedVar << endl;
	}
};


int main() 
{
	Child child;

	

	child.accessProtected(); // 42

	child.setProtectedVar(10);

	child.displayProtected();

	/*
	Parent* par = new Parent;
	Child* child = new Child;

	par->setProtectedVar(10);
	cout << par->getProtectedVar();

	child->accessProtected(); // �ڽ� ���� �Լ�
	child->displayProtected();

	child->setProtectedVar(80); // ��ӹ��� �θ��� ��� �Լ�
	*/
	
	return 0;
}