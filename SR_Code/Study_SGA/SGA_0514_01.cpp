#include "stdafx.h"
// 0514 �������������������������� vector ���� 
#include <vector>

//void maxInt<T>(T x) {}
 

void maxInt(int x) {} // Ÿ�Ժ��� ������ �Լ��� ����� �̸��� ���Ƶ� �ڷ��� �����Ϸ� �˾Ƽ� ��ġ�Ǵµ�
void maxInt(float x) {}



int main(){

	//maxInt(10);
	//maxInt(3.14f);
	
	// vector<int> myVector; // ������ ��� ��
	// vector<int> myVector = {1,2,3,4,5}; // �迭 �������ε� ������
	vector<int> myVector(5); // ������ ���� , class ���̺귯���̰� ���÷��̴�. int ������ ���ͻ���

	// ������ ���� �� �迭�� �ش�Ǵ� �迭�� �� ����
	myVector[0] = 1;
	myVector[1] = 10;
	myVector[2] = 20;
	myVector[3] = 30;
	myVector[4] = 40;

	// for(int &i : myVector)
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "����������������������������������������������������������������������������������������������\n";

	//���� ����� ���� �����Ҷ� 
	for (int i = 0; i < myVector.size(); i++)
	{
		myVector[i] += 5;
		int value = myVector[i];
		//int value = myVector.at(i); // at�Լ��� �迭���� �ε��� �� ������ �Ͱ� ������ �Լ� (�� �ּ��� ��������)
		cout << "myVector[" << i << "] = " << value << endl;
	}

	cout << "����������������������������������������������������������������������������������������������\n";
	
	//��� �߰� (������ �׸� �߰��� ����)
	myVector.push_back(50); 

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "����������������������������������������������������������������������������������������������\n";

	// ��� ���� (������ �׸��� �����Ǵ� ����)
	myVector.pop_back(); 
	myVector.pop_back();
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "] = " << myVector[i] << endl;
	}

	cout << "����������������������������������������������������������������������������������������������\n";



	int i = 0;
	for (int my : myVector)
	{
		cout << "myVector[" << i << "] = " << my << endl;
		i++;
	}



	return 0;
}
