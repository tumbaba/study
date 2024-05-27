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
	int balance;		// 정적할당
	char* cusName;		// 포인트 사용(동적할당)
public:
	Account(int ID, int money, char* name) : accID(ID), balance(money)
	//생산자 : 선언과함께 맴버 초기화(accID와 balance 멤버 변수를 각각 초기화)
	{
		cusName = new char[strlen(name) + 1]; //동적할당, 그리고 strlen은 (name)길이를 사용하는 함수고 null길이가 보이지않아도 있으므로 +1 추가 
	}// cusName은 동적배열의 주소를 가리킴

	int GetAccID() { return accID; } // accID 멤버 변수 값을 반환

	void Deposit(int money)
	{
		balance += money;
	}

	int Withdraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;  // money를 반환
	}

	void ShowAccInfo()
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이  름: " << cusName << endl;
		cout << "잔  액: " << balance << endl;
	}

	~Account()
	{
		delete [] cusName;
	}
};

Account* accArr[100];
// Account accArr[100]; 를 사용안하고 포인트를 사용하는이유
/*
 객체의 포인터를 배열에 저장하는 이유는 메모리 사용의 효율성, 
 객체 생명주기의 명확한 관리, 그리고 유연한 객체 생성을 가능하게 하기 위함
 
 포인트를 사용하지않으면 생성자 Account 데이터는?
 accArr[accNum++] = Account(id, balance, name);  // 기존 객체에 새 데이터를 덮어씀

 포인트를 사용하면 생성자 Account 데이터는?
 accArr[accNum++] = new Account(id, balance, name);  // 동적으로 Account 객체 생성

*/

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
			cout << "선택을 잘못했습니다.." << endl;
		}

	}
	for (int i = 0; i < accNum; i++)
		delete accArr[i];
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
	cout << "계좌ID: ";		cin >> id;
	cout << "이  름: ";		cin >> name;
	cout << "입금액: ";		cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);

}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";		cin >> id;
	cout << "입급액: ";		cin >> money;

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
	cout << "[출    금]" << endl;
	cout << "계좌ID: ";	cin >> id;
	cout << "출금액: ";	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money)==0) // 출력이 false 0값으로 뱉어낼때를 말함
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