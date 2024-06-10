#include "pch.h"
#include "Player.h"
#include "Knight.h"

Knight::Knight()
// ���� �ʱ�ȭ ����
: Player()
{
	// ���� �ʱ�ȭ ����
	cout << "Knight�� �⺻������" << endl;

	_stamina = 0; // private
}

Knight::Knight(int hp, int mp, int attack, int stamina)
: Player(hp, mp, attack)
{
	cout << "Knight�� Ÿ�Թ�ȯ ������" << endl;
	_stamina = stamina;
}

Knight::~Knight()
{
	cout << "Knight�� �Ҹ���" << endl;
}

void Knight::Attack(Player* p)
{
	if (IsDead() || p->IsDead()) return;

	cout << "Knight�� Attack!!!!!" << endl;
	p->TakeDamage(_attack);

}
