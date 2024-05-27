#include "stdafx.h"
// 가상함수 (virtual function) 파생클래스에게 재정의
// 부모의 함수를 가상 함수로 선언해서 자식에서 사용할수 있도록(오버라이드)
// 부모에 virtual를 가상함수로 선언해야함

//부모 클래스
class Base {
public :
    string name;
    virtual void display() { // 함수     (부모가 자식에게 함수허용 virtual)
        cout << name <<"부모 클래스의 display 함수" << endl;
    }
    ~Base()
    {
        cout << name << " : 메모리 해제 " << endl;
    }
};
// 자식 클래스
class Derived : public Base {
public: //부모 클래스의 가상 함수를 재정의
        void display() override {   // (자식입장에서 부모 함수를 사용하도록 허용 override)

        cout << "자식 클래스의 display 함수" << endl;
    }
};


int main()
{
    /*    이것과 같은 상황
    int* p;
    int num = 0;
    p = &num; 
    */

    Base* basePtr = nullptr;          // 포인트 선언  
    
    Base* pbase = new Base;           // 포인트 선언, 메모리영역까지 할당
    pbase->name = "홍길동 : ";        // 그안에 들어있는 내용 접근
    //basePtr = pbase;
    pbase->display();

    Base base;
    base.name = "홍길동2 : ";
    //basePtr = (Base*)&base;
    base.display();

    // pbase->display();
    // delete basePtr; // error
    delete pbase;


    /*
    Derived derviedObj;
    basePtr = &derviedObj; // Derived 객체를 Base 포인터에 할당
    // 포인터가 가리키
    basePtr->display(); // 출력 : "자식 클래스의 display 함수"
    */


    return 0;
}

