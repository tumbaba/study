// �����ֺ��� ������ ���α׷� ¥�¹������...(���ø����̼Ǹ���� ��) 
// 6���߼� 2D�� openGl (���̷�Ʈ x ���ϰ�)
#include "stdafx.h"


//class Ŭ���� ����
/*

class Ŭ����_�̸�
{
 public:	// ��𼭵��� ���ٰ��� : ����, �Լ� �� 
 private:	// Ŭ���� �������� ���ٰ��� : default
 protected: // Ŭ���� ������, �ڽ� ��밡�� 
};

*/

class Car {
private: // default ����
	int value;
	int x, y;

public:
	Car(); // ������ ����
	Car(const Car& other); // ��������� (�Ʒ� main�� ����)
	~Car(); // �Ҹ��� & �ı��� ����

	int num;
	void privateFunc1(int x, int y) {
		this->x = x;  // x��� ���� ������ ����ﶧ this�� Car��� Ŭ���� �ڱ��ڽ��� ��Ÿ��
		this->y = y;
	}

private:
	void privateFunc();

protected:
	int protecVar;
};

Car::Car() {
	// ������ ����
}
Car::~Car() {
	// �Ҹ��� ����
}
Car::Car(const Car& other) { //& ���� : �б⸸ �ϰڴٴ� �ǹ�
	this->x = other.x;
	this->y = other.y;
	//this->privateFunc1 = other.
}


void Car::privateFunc() {
	int i = 100;	
}

int main() {

	// �ν��Ͻ� ������� 1 : �޸𸮸� ������ �� // ����Ǹ� �޸𸮴� �ڵ����� �Ҹ�
	Car car; 
	car.privateFunc1(5,4);

	// ��Ʈ�Ͻ� ������� 2 : �޸� �����Ҵ����� ����
	Car* pCar = new Car();	 // ��ĳ���� (�ڽĿ��� �θ�� ĳ���õ�)
	pCar->privateFunc1(10,100);	 // ���ٹ�� ->

	delete pCar; // �޸𸮸� �����ϴ� �� : delete���� ������ ���ᰡ�Ǵ��� �޸𸮸� ��뿵���� ��������


	Car car1(car); // ��������� : ���簡 �״�� car�� ������ �����Ѱ��� �ƴ�. 
	//car1.privateFunc1(5, 4); // �Ȱ��� �̷��� �����Ҽ� ���� ������..25���� �̿�
	// ��������� ��� : ���� ��� ���� ���������� ���鶧 or �Ѿ� ������ �� �� �����Ҷ�
	//pCar = &car; // 1. ���� ����(��õ����)

}


