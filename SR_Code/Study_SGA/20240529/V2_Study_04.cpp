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
		cusName = new char[strlen(name) + 1];		// 이름의 길이 + 1 (null 문자 공간)
		strcpy_s(cusName, strlen(name), name + 1);	// 이름 복사
	}

	int GetAccID()
	{
		return accID; // ID가 맞는지 확인하기위한 반환함수
	}

	void Deposit(int money)	//입금
	{
		balance += money;	// 자산 + 입금금액
	}

	int Withdraw(int money)	//출금
	{
		if (balance < money)		// 조건 : 자산금액 < 입력한 금액보다 크면 false 반환
			return false;

		balance -= money;			// 자산에서 출금금액 빼기
		return money;
	}

	void ShowAccInfo()		// 전체 목록 확인
	{
		cout << "계좌ID: " << accID << endl;		// 계좌 생성후에 저장된 변수 ID
		cout << "이  름: " << cusName << endl;	// 위 id에 맞는 사용자 이름출력
		cout << "잔  액: " << balance << endl;	// 위 balance 금액에 맞는 내용출력
	}

	~Account()
	{
		delete[] cusName;	// 위에서 동적할당 받은 메모리 삭제
	}


};

Account* accArr[100];	// Account 저장을 위한 배열
int accNum = 0;			// 배열의 값 0부터 초기화 시작


int main(void)
{
	int choice;			// choice int 자료형 선언

	while (1)			// 무한반복 시작
	{
		ShowMenu();		// 전체 메뉴 호출
		cout << "선택: ";
		cin >> choice;	// 입력값을 choice로 입력
		cout << endl;

		switch (choice)	// 각각의 케이스문으로 역할분담
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
			cout << "잘못 선택하셨습니다.. 다시 입력 부탁드립니다." << endl << endl;
		}
	}

	for (int i = 0; i < accNum; i++) // 할당된 메모리 해제를 하기위함
		delete accArr[i];
	/*
	메모리 누수 방지
	프로그램이 실행되는 동안 동적으로 할당된 메모리는 프로그램이 종료될 때까지 유지됨.
	동적으로 할당된 메모리를 해제하지 않으면 메모리 누수가 발생되서 시스템 전체의 성능저하될수있음.
	*/
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
	// ++ 증가연산자를 통해 accArr 배열에 순차적으로 새로운 Account 객체들이 저장을 위함
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
		if (accArr[i]->GetAccID() == id) // 조건 : 입력한 id와 같은지 확인
		{ // 함수 구현중 class 안의 함수이용할때 -> 표시 사용하여 호출할수 있다.
			accArr[i]->Deposit(money);	 // 해당id Calss 함수 내부 balance += money;로 추가
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다~~" << endl << endl;
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
		if (accArr[i]->GetAccID() == id) // 조건 : 입력한 id와 같은지 확인
		{
			if (accArr[i]->Withdraw(money) == 0) // 조건 : 해당id Class함수 조건문으로..
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			cout << "출금완료!" << endl << endl; // id 비교 같으면 출금완료
			return;
		}
		cout << "유효하지 않은 ID 입ㄴ디ㅏ." << endl << endl;
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


// 참고 발견부분
// 클래스 내에서 정의된 멤버 함수들을 클래스 외부에서 호출할 때는
// ->연산자를 사용하여 객체의 포인터를 통해 호출
// 객체의 포인터가 아니라 객체 그 자체를 통해 호출하는 경우에는
// .연산자를 사용