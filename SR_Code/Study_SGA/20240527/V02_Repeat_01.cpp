#include <iostream>
#include <cstring>
using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};	

class Account   // class 형 구현
{
private:  // 개인정보
	int accID;		// 계좌번호
	int balance;	// 잔액
	char* cusName;	// 고객이름

public: // 공유정보
	Account(int ID, int money, char* name) : accID(ID), balance(money) // 생성자 본문이 실행되기 전에 멤버 변수를 초기화하는 효율적인 방법
	{
		cusName = new char[strlen(name) + 1];
		strcpy_s(cusName, strlen(name) + 1, name);
	}

	int GetAccID() { return accID; }

	void Deposit(int money)   //  class 안에 입금 함수
	{
		balance += money;
	}

	int Withdraw(int money) // 출금액 반환, 부족시 0
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}

	void ShowAccInfo()
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이  름: " << cusName << endl;
		cout << "잔  액: " << balance << endl;
	}

	~Account() // 소멸자
	{
		delete[]cusName; // 소멸하지않으면 메모리 할당 가동...
	}
};

Account* accArr[100];	// Account 저장을 위한 배열
int accNum = 0;			// 저장된 Account 수

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
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "잘못 선택하셨습니다.." << endl;
		}
	}

	for (int i = 0; i < accNum; i++) // 생산자에서 동적 메모리 할당이 구동되기때문에 삭제해야한다.
		delete accArr[i];
	// 왜냐하면 프로그램이 종료되기 전에 할당된 모든 메모리를 해제하여 메모리 누수를 방지해야 한다.
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
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "이  름: ";	cin >> name;
	cout << "입금액: ";	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);

}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[입    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "입금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금완료" << endl << endl;
			return;
		}

	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출   금]" << endl;
	cout << "계좌ID: ";		cin >> id;
	cout << "출금액: ";		cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			cout << "출금완료" << endl << endl;
			return;

		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}


}


