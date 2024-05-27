#include "stdafx.h"

// Class = protected (부모 자식 관계중 protected)
// 자식, 부모안에관계는 public으로 해결하지만 protected는 외부공개제한(class 끼리 관계만 허용됨)
// virtual은 함수에만 앞에 붙여서 사용했지만 protected는 해당 영역을 공간을 사용되도록..

//부모 클래스
class Parent {
protected: // protected 맴버
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

// 자식 클래스
class Child : public Parent {
public:
	void accessProtected() {     // (int value 를 사용할수도 있음)
		// protected 맴버에 접근 가능
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

	child->accessProtected(); // 자식 고유 함수
	child->displayProtected();

	child->setProtectedVar(80); // 상속받은 부모의 기능 함수
	*/
	
	return 0;
}
