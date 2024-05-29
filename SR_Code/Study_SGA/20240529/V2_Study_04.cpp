#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum { MAKE = 1, DEPOSIT, WITHDRAW, SHOWINFO, EXIT };

class Account
{
private:
	int accID;
	int balance;
	char* cusName;

public:
	Account(int ID, int money, char* name) : accID(ID), balance(money)
	{
		cusName = new char[strlen(name) + 1];		// �̸��� ���� + 1 (null ���� ����)
		strcpy_s(cusName, strlen(name), name + 1);	// �̸� ����
	}

	int GetAccID()
	{
		return accID; // ID�� �´��� Ȯ���ϱ����� ��ȯ�Լ�
	}

	void Deposit(int money)	//�Ա�
	{
		balance += money;	// �ڻ� + �Աݱݾ�
	}

	int Withdraw(int money)	//���
	{
		if (balance < money)		// ���� : �ڻ�ݾ� < �Է��� �ݾ׺��� ũ�� false ��ȯ
			return false;

		balance -= money;			// �ڻ꿡�� ��ݱݾ� ����
		return money;
	}

	void ShowAccInfo()		// ��ü ��� Ȯ��
	{
		cout << "����ID: " << accID << endl;		// ���� �����Ŀ� ����� ���� ID
		cout << "��  ��: " << cusName << endl;	// �� id�� �´� ����� �̸����
		cout << "��  ��: " << balance << endl;	// �� balance �ݾ׿� �´� �������
	}

	~Account()
	{
		delete[] cusName;	// ������ �����Ҵ� ���� �޸� ����
	}


};

Account* accArr[100];	// Account ������ ���� �迭
int accNum = 0;			// �迭�� �� 0���� �ʱ�ȭ ����


int main(void)
{
	int choice;			// choice int �ڷ��� ����

	while (1)			// ���ѹݺ� ����
	{
		ShowMenu();		// ��ü �޴� ȣ��
		cout << "����: ";
		cin >> choice;	// �Է°��� choice�� �Է�
		cout << endl;

		switch (choice)	// ������ ���̽������� ���Һд�
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case SHOWINFO:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		
		default:
			cout << "�߸� �����ϼ̽��ϴ�.. �ٽ� �Է� ��Ź�帳�ϴ�." << endl << endl;
		}
	}

	for (int i = 0; i < accNum; i++) // �Ҵ�� �޸� ������ �ϱ�����
		delete accArr[i];
	/*
	�޸� ���� ����
	���α׷��� ����Ǵ� ���� �������� �Ҵ�� �޸𸮴� ���α׷��� ����� ������ ������.
	�������� �Ҵ�� �޸𸮸� �������� ������ �޸� ������ �߻��Ǽ� �ý��� ��ü�� �������ϵɼ�����.
	*/
	return 0;
}

void ShowMenu(void) 
{
	cout << "-----Menu------" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}
void MakeAccount(void) 
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��  ��: ";	cin >> name;
	cout << "�Աݾ�: ";	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
	// ++ ���������ڸ� ���� accArr �迭�� ���������� ���ο� Account ��ü���� ������ ����
}

void DepositMoney(void) 
{
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�Աݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id) // ���� : �Է��� id�� ������ Ȯ��
		{ // �Լ� ������ class ���� �Լ��̿��Ҷ� -> ǥ�� ����Ͽ� ȣ���Ҽ� �ִ�.
			accArr[i]->Deposit(money);	 // �ش�id Calss �Լ� ���� balance += money;�� �߰�
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�~~" << endl << endl;
}
void WithdrawMoney(void) 
{
	int money;
	int id;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��ݾ�: ";	cin >> money;

	for (int i = 0; i < accNum; i++) 
	{
		if (accArr[i]->GetAccID() == id) // ���� : �Է��� id�� ������ Ȯ��
		{
			if (accArr[i]->Withdraw(money) == 0) // ���� : �ش�id Class�Լ� ���ǹ�����..
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}

			cout << "��ݿϷ�!" << endl << endl; // id �� ������ ��ݿϷ�
			return;
		}
		cout << "��ȿ���� ���� ID �Ԥ���." << endl << endl;
	}


}
void ShowAllAccInfo(void) 
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}

}


// ���� �߰ߺκ�
// Ŭ���� ������ ���ǵ� ��� �Լ����� Ŭ���� �ܺο��� ȣ���� ����
// ->�����ڸ� ����Ͽ� ��ü�� �����͸� ���� ȣ��
// ��ü�� �����Ͱ� �ƴ϶� ��ü �� ��ü�� ���� ȣ���ϴ� ��쿡��
// .�����ڸ� ���