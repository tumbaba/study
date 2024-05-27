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

typedef struct{
	int accID;
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
		cout << "선택: ";
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

			cout << "선택을 잘못하셨습니다.." << endl;
		}

	}

	return 0;
}



void ShowMenu(void)
{
	cout << "-----Menu------" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}
void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int money;
	cout << "[계좌개설]" << endl;
	cout << "아이디: "; cin >> id;
	cout << "이  름: "; cin >> name;
	cout << "입금액: "; cin >> money;
	cout << endl;

	accArr[accNum].accID = id;
	strcpy_s(accArr[accNum].cusName, name);
	accArr[accNum].balance = money;
	accNum++;

}
void DepositMoney(void)
{
	int id;
	int money;
	cout << "[입   금]" << endl;
	cout << "아이디: ";		cin >> id;
	cout << "입금액: ";		cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			cout << "입금완료" << endl;
			accArr[i].balance += money;
			return;
		}

	}
	cout << "유효한 ID가 아닙니다." << endl << endl;

}
void WithdrawMoney(void)
{
	int id;
	int money;
	cout << "[출  금]" << endl;
	cout << "아이디: ";		cin >> id;
	cout << "출금액: ";		cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "잔액이 부족합니다." << endl;
				return;
			}
			cout << "출금완료" << endl;
			accArr[i].balance -= money;
			return;
		}
	}

}
void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "사용자ID: " << accArr[i].accID << endl;
		cout << "사용자 이름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl;
	}
}
