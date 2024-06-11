#include <iostream>

using namespace std;

//캐스팅

//C스타일 캐스팅 
//기본자료형 캐스팅 

//C++스타일 캐스팅(4총사)
// 1.static cast
// -> 상식적인 변환만 허용
// -> 컴파일 시간에 캐스팅
// 2. dynamic cast***
// -> 상속구조에서 다형성(vftable)이 있어야 사용가능한 cast
// -> 이 때 캐스팅이 실패하면 nullptr을 반환한다.
// -> 런타임에 캐스팅한다.
// 3. const cast
// -> 상수객체를 비상수객체로 캐스팅할 수 있다.
// 4. reinterpret_cast
// -> 모든 캐스팅 통과
// -> 위험한 캐스팅 


class Player
{
public:
	virtual void PrintPlayer() { cout << "Player 입니다" << endl; }
};

class Knight : public Player
{
public:
	virtual void PrintPlayer() override { cout << "Knight 입니다" << endl; }
};

class Mage : public Player
{
public:
	virtual void PrintPlayer() override { cout << "Mage 입니다" << endl; }
	int _mana;
};

void MangUp(Player* player)
{
	Mage* mage = dynamic_cast<Mage*>(player);

	if (mage == nullptr)
	{
		cout << "Mage가 아닙니다" << endl;
		return;
	}

	mage->PrintPlayer();
	cout << "최대마나가 증가되었습니다." << endl;
}

// pkt : 17kb/s, fps 140
enum PacketID
{
	NONE = 0,
	LOG_IN,
	LOG_SUCCESS,
	CREATE_ACCOUNT,
	PLAER_RUN,

};

struct  Protocol_test_S
{
	PacketID pkt_id = PacketID::LOG_IN;
	int id;
	int password;

};

struct Protocol_test_C
{
	PacketID pkt_Id = PacketID::LOG_SUCCESS;
		bool success;
};

int main()
{
	// 1.static cast
	int alnt = 5;
	float aFloat = static_cast<float>(alnt); // 5 -> 0.5f => 16진수 > 부동소수점
	bool aBool = static_cast<bool>(alnt);
	// int* aPtr = (int*)alnt; //..aPtr = 5
	Player* player1 = new Knight();
	//int* aPtr = static_cast<int*>(player);
	Player* player2 = new Mage();

	MangUp(player2);

	//리터럴 상수?
	// Data
	// -bss    : 초기화되지 않은 전역변수
	// - data  : 초기화된 전역변수
	// -rodata : 상수
	char* str1 =  const_cast<char*>("hello"); // rodata //const_cast 통과만되는데, 바꾸진못한다

	// 클라이언트 로그인 시도
	Protocol_test_S pkt;
	pkt.id = PacketID::LOG_IN;
	pkt.id = 123445;
	pkt.password = 12345;

	//Send(pkt); 서버에 전송 

	// 서버에서 로그인 체크 후 성고여부 전달
	//  12바이트 ...?
	Protocol_test_S* s_pkt = reinterpret_cast<Protocol_test_S*>(&pkt);

	// 클라이언트에서 로그인 성공여부
	
	return 0;
}