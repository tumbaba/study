#include <iostream>

using namespace std;

//ĳ����

//C��Ÿ�� ĳ���� 
//�⺻�ڷ��� ĳ���� 

//C++��Ÿ�� ĳ����(4�ѻ�)
// 1.static cast
// -> ������� ��ȯ�� ���
// -> ������ �ð��� ĳ����
// 2. dynamic cast***
// -> ��ӱ������� ������(vftable)�� �־�� ��밡���� cast
// -> �� �� ĳ������ �����ϸ� nullptr�� ��ȯ�Ѵ�.
// -> ��Ÿ�ӿ� ĳ�����Ѵ�.
// 3. const cast
// -> �����ü�� ������ü�� ĳ������ �� �ִ�.
// 4. reinterpret_cast
// -> ��� ĳ���� ���
// -> ������ ĳ���� 


class Player
{
public:
	virtual void PrintPlayer() { cout << "Player �Դϴ�" << endl; }
};

class Knight : public Player
{
public:
	virtual void PrintPlayer() override { cout << "Knight �Դϴ�" << endl; }
};

class Mage : public Player
{
public:
	virtual void PrintPlayer() override { cout << "Mage �Դϴ�" << endl; }
	int _mana;
};

void MangUp(Player* player)
{
	Mage* mage = dynamic_cast<Mage*>(player);

	if (mage == nullptr)
	{
		cout << "Mage�� �ƴմϴ�" << endl;
		return;
	}

	mage->PrintPlayer();
	cout << "�ִ븶���� �����Ǿ����ϴ�." << endl;
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
	float aFloat = static_cast<float>(alnt); // 5 -> 0.5f => 16���� > �ε��Ҽ���
	bool aBool = static_cast<bool>(alnt);
	// int* aPtr = (int*)alnt; //..aPtr = 5
	Player* player1 = new Knight();
	//int* aPtr = static_cast<int*>(player);
	Player* player2 = new Mage();

	MangUp(player2);

	//���ͷ� ���?
	// Data
	// -bss    : �ʱ�ȭ���� ���� ��������
	// - data  : �ʱ�ȭ�� ��������
	// -rodata : ���
	char* str1 =  const_cast<char*>("hello"); // rodata //const_cast ������Ǵµ�, �ٲ������Ѵ�

	// Ŭ���̾�Ʈ �α��� �õ�
	Protocol_test_S pkt;
	pkt.id = PacketID::LOG_IN;
	pkt.id = 123445;
	pkt.password = 12345;

	//Send(pkt); ������ ���� 

	// �������� �α��� üũ �� ������ ����
	//  12����Ʈ ...?
	Protocol_test_S* s_pkt = reinterpret_cast<Protocol_test_S*>(&pkt);

	// Ŭ���̾�Ʈ���� �α��� ��������
	
	return 0;
}