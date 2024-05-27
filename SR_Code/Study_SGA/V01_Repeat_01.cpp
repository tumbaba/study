#include <iostream>
#include <cstring>	
// strcpy ����ϱ����� : string ����Ѱ� �����Ҽ� �ִ� �Լ�
/*
	- �ϳ��� ���ڿ��� �ٸ� ���ڿ��� ������ �� ���
--- ��) char* strcpy(char* destination, const char* source);
		- destination: ����� ���ڿ��� ����� ��� �迭�Դϴ�.
		- source: ����� ���� ���ڿ��Դϴ�.
		- ��ȯ�� : destination�� ��ȯ�մϴ�.
*/

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);		//�޴�
void MakeAccount(void);		//���¸����
void DepositMoney(void);	//�Ա�
void WithdrawMoney(void);	//���
void ShowAllAccInfo(void);	//�ܾ���ȸ

enum{MAKE=1, DEPOSIT, WITHDRAW, IQUIRE, EXIT}; // ���� switch���� �����Ҽ��ִ� ����

typedef struct				// �̸� �̻��� ����ü ����
{
	int accID;				// ���¹�ȣ ���� ����
	int balace;				// �ܾ� ����
	char cusName[NAME_LEN];	// ����� �̸� �迭 ����
}Account;

Account accArr[100];		// Account ������ ���� �迭 : id, �ܾ�, �̸��� ���� �迭[100] ��
int accNum = 0;				// ����� Account ��

int main() 
{
	int choice;				// �޴������� �� �� �ִ� ����

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
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case IQUIRE:
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
	char name[NAME_LEN]; // 20���� �̸� ���� ����
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID: ";		cin >> id;
	cout << "��  ��: ";		cin >> name;
	cout << "�ӱݾ�: ";		cin >> balance;
	cout << endl;

	accArr[accNum].accID = id; //�Էµ� id�� accArr[accNum(����ü�ȿ��ִ�)].accID(����üID�� ����) 
	accArr[accNum].balace = balance;
	strcpy_s(accArr[accNum].cusName, name); // �̸��� ������ ���� ����ü�ȿ��ִ� cusName�� ����(��������)
	accNum++; // ���¸� ������� ���� ���ʷ� �ѱ������ �����ؼ� ���鵵�� ++
}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";		cin >> id;		// id������ cin���� ���� ����
	cout << "�Աݾ�: ";		cin >> money;

	for (int i = 0; i < accNum; i++)		// �迭�ȿ� 0~99Ȯ��
	{
		if (accArr[i].accID == id)			// ���� �Էµ� id�� ����� id�� �����ϸ�
		{
			accArr[i].balace += money;
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� �ʴ� ID �Դϴ�." << endl << endl;

}
void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";		cin >> id;
	cout << "��ݾ�: ";		cin >> money;

	for (int i = 0; i<accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balace < money)
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			accArr[i].balace -= money;
			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

void ShowAllAccInfo(void) 
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "��  ��: " << accArr[i].cusName << endl;
		cout << "��  ��: " << accArr[i].balace << endl << endl;

	}


}