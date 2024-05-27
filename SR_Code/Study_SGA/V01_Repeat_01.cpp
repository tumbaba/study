#include <iostream>
#include <cstring>	
// strcpy 사용하기위함 : string 출력한것 복사할수 있는 함수
/*
	- 하나의 문자열을 다른 문자열에 복사할 때 사용
--- 예) char* strcpy(char* destination, const char* source);
		- destination: 복사된 문자열이 저장될 대상 배열입니다.
		- source: 복사될 원본 문자열입니다.
		- 반환값 : destination을 반환합니다.
*/

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);		//메뉴
void MakeAccount(void);		//계좌만들기
void DepositMoney(void);	//입금
void WithdrawMoney(void);	//출금
void ShowAllAccInfo(void);	//잔액조회

enum{MAKE=1, DEPOSIT, WITHDRAW, IQUIRE, EXIT}; // 메인 switch에서 구분할수있는 조건

typedef struct				// 이름 미생성 구조체 생성
{
	int accID;				// 계좌번호 변수 선언
	int balace;				// 잔액 선언
	char cusName[NAME_LEN];	// 사용자 이름 배열 생성
}Account;

Account accArr[100];		// Account 저장을 위한 배열 : id, 잔액, 이름을 담은 배열[100] 개
int accNum = 0;				// 저장된 Account 수

int main() 
{
	int choice;				// 메뉴선택을 고를 수 있는 변수

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
		case IQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "잘못 선택하셨습니다.." << endl;
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
	char name[NAME_LEN]; // 20글자 이름 변수 선언
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: ";		cin >> id;
	cout << "이  름: ";		cin >> name;
	cout << "임금액: ";		cin >> balance;
	cout << endl;

	accArr[accNum].accID = id; //입력된 id가 accArr[accNum(구조체안에있는)].accID(구조체ID에 저장) 
	accArr[accNum].balace = balance;
	strcpy_s(accArr[accNum].cusName, name); // 이름에 저장한 것을 구조체안에있는 cusName에 복사(변수저장)
	accNum++; // 계좌를 만들고나면 다음 차례로 넘기기위해 증가해서 만들도록 ++
}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌ID: ";		cin >> id;		// id변수는 cin으로 동적 변수
	cout << "입금액: ";		cin >> money;

	for (int i = 0; i < accNum; i++)		// 배열안에 0~99확인
	{
		if (accArr[i].accID == id)			// 조건 입력된 id와 저장된 id가 동일하면
		{
			accArr[i].balace += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않는 ID 입니다." << endl << endl;

}
void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[출   근]" << endl;
	cout << "계좌ID: ";		cin >> id;
	cout << "출금액: ";		cin >> money;

	for (int i = 0; i<accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balace < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}
			accArr[i].balace -= money;
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
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이  름: " << accArr[i].cusName << endl;
		cout << "잔  액: " << accArr[i].balace << endl << endl;

	}


}