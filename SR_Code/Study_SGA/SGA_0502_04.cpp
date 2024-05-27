#include "stdafx.h"

// 메모리 생성 & 삭제 목적

class Object {
public:
	int value;

	//생성자
	Object(int val) : value(val) {}// 생성자를 통한 초기화

	void printValue() {
		cout << "Value : " << value << endl;
	}
};

//#define OBJECT_MAX 5  아래 const와 같은 개념의 상수

int main() {
	const int OBJECT_MAX = 6; // 객체의 개수
	
	//object[5][5]  이중배열을 포인터 메모리 할당을 만들기위함?
	Object** objects = new Object * [OBJECT_MAX]; // 이중 포인터 배열 동적 할당
	for (int i = 0; i < OBJECT_MAX; i++)
		objects[i] = new Object(i);

	for (int i = 0; i < OBJECT_MAX; i++)
		objects[i]->printValue();

	// 메모리 해제
	for (int i = 0; i < OBJECT_MAX; i++)
		delete[] objects[i];

	delete[] objects;


	return 0;
}

