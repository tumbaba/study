#include <iostream>
using namespace std;
/* ---- sample ---
int main() {

	return 0;
}
*/

// ������������������������������������������������������������������������������������ 075 Call by Reference �����ϱ� ������������������������������������������������������������������������������������
/*
#include <string>

//�Լ� 1
void Func1(int& arg) // int �ڷ��� �ּҸ� ����Ű�� �����͸� ����
{
	cout << "���� �� : " << arg << endl;
	arg += 10; // int�� �����߰�

	cout << "���� �� : " << arg << endl;
}
//�Լ� 2
void Func2(string& info) // string �ڷ��� �ּҸ� ����Ű�� �����͸� ����
{
	info += "981��"; // string�� �����߰�
}

int main() {
	int year = 10;

	Func1(year); // �Լ�1�� �������� int 10�� �ִ´�.
	cout << "Func1 �Լ� ���� �� : " << year << endl; // �Լ�1�� ���ڸ� ������ ������� �ʰ� ������ �ּҸ� ����Ű�� �����͸� ����ϱ� ������ year ������ ����.

	string king_info = "��� ���� ������ : ";
	
	Func2(king_info); //�Լ�2�� �������� king_info�� �ִ´�.
	cout << king_info << endl; // �Լ�2���� ���Ͱ��� ������


	return 0;
}
*/
// ������������������������������������������������������������������������������������ 080 enumm class �����ϱ� ������������������������������������������������������������������������������������

// enum 
enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};
// enum class
enum class MachineStatus : char // char ��ó�� �ڷ����� ���»��·� ������������ int �ڷ��� �ν��� ���ԵǹǷ� ��Ȯ�ϰ� �ؾ���.
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main() {

	MachineStatus machine = MachineStatus::abnormal;

	if (machine == MachineStatus::normal) {
		cout << "Status : normal" << endl;
	}
	else if (machine == MachineStatus::abnormal){
		cout << "Status : abnormal" << endl;
	}
	else if (machine == MachineStatus::disconnect) {
		cout << "Status : disconnect" << endl;
	}
	else{
		cout << "Status : close" << endl;
	}


	// �Ʒ�ó�� ����ȯ�Ҷ��� �̷��� int A = static_cast<int>(machine); �ʿ��� (enum Ŭ������ �⺻ Ÿ���� int��� �ص� �ٷ� ���������� ��ȯ������ �ʱ� ������ ����ȯ �����ڸ� ����ؾ� �Ѵ�.)
	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;


	return 0;
}