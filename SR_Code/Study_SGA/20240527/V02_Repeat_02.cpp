#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum{MAKE=1, DEPOSIT, WITHDRAW, SHOWINFO, EXIT};

class Account
{
private:
	int accID;
	int balance;		// �����Ҵ�
	char* cusName;		// ����Ʈ ���(�����Ҵ�)
public:
	Account(int ID, int money, char* name) : accID(ID), balance(money)
	//������ : ������Բ� �ɹ� �ʱ�ȭ(accID�� balance ��� ������ ���� �ʱ�ȭ)
	{
		cusName = new char[strlen(name) + 1]; //�����Ҵ�, �׸��� strlen�� (name)���̸� ����ϴ� �Լ��� null���̰� �������ʾƵ� �����Ƿ� +1 �߰� 
	}// cusName�� �����迭�� �ּҸ� ����Ŵ

	int GetAccID() { return accID; } // accID ��� ���� ���� ��ȯ

	void Deposit(int money)
	{
		balance += money;
	}

	int Withdraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;  // money�� ��ȯ
	}

	void ShowAccInfo()
	{
		cout << "����ID: " << accID << endl;
		cout << "��  ��: " << cusName << endl;
		cout << "��  ��: " << balance << endl;
	}

	~Account()
	{
		delete [] cusName;
	}
};

Account* accArr[100];
// Account accArr[100]; �� �����ϰ� ����Ʈ�� ����ϴ�����
/*
 ��ü�� �����͸� �迭�� �����ϴ� ������ �޸� ����� ȿ����, 
 ��ü �����ֱ��� ��Ȯ�� ����, �׸��� ������ ��ü ������ �����ϰ� �ϱ� ����
 
 ����Ʈ�� ������������� ������ Account �����ʹ�?
 accArr[accNum++] = Account(id, balance, name);  // ���� ��ü�� �� �����͸� ���

 ����Ʈ�� ����ϸ� ������ Account �����ʹ�?
 accArr[accNum++] = new Account(id, balance, name);  // �������� Account ��ü ����

*/

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
			cout << "������ �߸��߽��ϴ�.." << endl;
		}

	}
	for (int i = 0; i < accNum; i++)
		delete accArr[i];
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
	cout << "����ID: ";		cin >> id;
	cout << "��  ��: ";		cin >> name;
	cout << "�Աݾ�: ";		cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);

}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[��   ��]" << endl;
	cout << "����ID: ";		cin >> id;
	cout << "�Ա޾�: ";		cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}

	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
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
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money)==0) // ����� false 0������ ������ ����
			{
				cout << "�ܾ׺���" << endl << endl;
				return;
			}

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
		accArr[i]->ShowAccInfo();
		cout << endl;
	}

}