#include <iostream>
#include <string>
#include "Circle.h"
#include "Rectangle.h"

#include <iomanip> // �Ҽ��� ���̳����µ� ���

using namespace std;

// �ε��Ҽ���
/*
float = 4����Ʈ
double = 8����Ʈ
long double = 8����Ʈ, 12����Ʈ or 16����Ʈ
*/


int main() 
{
	Rectangle rect(3, 5);     // class �̸� Rectangle // ������ �Բ� �ʱ�ȭ

	/*
	rect.width = 3;
	rect.height = 5;
	*/

	cout << "�簢���� ������ : " << rect.getArea() /* ���� A�� */ << endl;
	cout << "�簢���� �ѷ��� : " << rect.getdul() /* ���� B�� */ << endl;



	Circle donut(1);
	// donut.radius = 1;
	double area = donut.getArea(); // �Լ��� ����Ÿ�� = area
	cout << setprecision(17); // ��û ��� 17�ڸ����� ���´�..
	
	cout << "dounut ���� = " << area << endl;

	Circle pizza(30);
	// pizza.radius = 30; // Circle Ŭ���� �� ������ radius, Ÿ���� int
	area = pizza.getArea();
	cout << setprecision(17); // ��û ��Գ��´�..

	cout << "pizza ���� = " << area << endl;

	

	return 0;

}
