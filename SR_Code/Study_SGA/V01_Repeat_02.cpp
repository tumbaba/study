#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE=1, DESPOSIT, WITHDRAW, SHOWALL, EXIT};

typedef struct {
	int accId;
	int balance;
	char cusName[NAME_LEN];
}Account;

Account accArr[100];
int accNum = 0;

int main(void) 
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DESPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case SHOWALL:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "�߸� �����ϼ̽��ϴ�.." << endl;
		}

	}

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

	accArr[accNum].accId = id;
	strcpy_s(accArr[accNum].cusName, name);
	accArr[accNum].balance = balance;

	accNum++;

}
void DepositMoney(void)
{
	int id;
	int money;
	
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "�Աݾ�: ";	cin >> money;
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accId == id)
		{
			cout << "�ԱݿϷ�" << endl;
			accArr[i].balance += money;
			return;
		}
		cout << "���̵� ��ġ���� �ʽ��ϴ�." << endl << endl;
	}

}
void WithdrawMoney(void)
{
	int id;
	int money;
	cout << "[��    ��]" << endl;
	cout << "����ID: ";	cin >> id;
	cout << "��ݾ�: ";	cin >> money;
	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accId == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "�ݾ׺���" << endl;
				return;
			}
			cout << "��ݿϷ�" << endl;
			accArr[i].balance -= money;
			return;
		}
		cout << "���̵� ��ġ���� �ʽ��ϴ�." << endl << endl;
	}

}
void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].accId << endl;
		cout << "��  ��: " << accArr[i].cusName << endl;
		cout << "��  ��: " << accArr[i].balance << endl << endl;
	}
}