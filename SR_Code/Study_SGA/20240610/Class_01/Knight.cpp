#include "pch.h"
#include "Player.h"
#include "Knight.h"

Knight::Knight()
// 빠른 초기화 영역
: Player()
{
	// 늦은 초기화 영억
	cout << "Knight의 기본생성자" << endl;

	_stamina = 0; // private
}

Knight::Knight(int hp, int mp, int attack, int stamina)
: Player(hp, mp, attack)
{
	cout << "Knight의 타입반환 생성자" << endl;
	_stamina = stamina;
}

Knight::~Knight()
{
	cout << "Knight의 소멸자" << endl;
}

void Knight::Attack(Player* p)
{
	if (IsDead() || p->IsDead()) return;

	cout << "Knight의 Attack!!!!!" << endl;
	p->TakeDamage(_attack);

}
