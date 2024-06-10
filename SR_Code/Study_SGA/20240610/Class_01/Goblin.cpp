#include "pch.h"
#include "Goblin.h"

Goblin::Goblin()
{
}

Goblin::Goblin(int hp, int mp, int attack)
:Player(hp,mp,attack)
{
}

Goblin::~Goblin()
{
}

void Goblin::Attack(Player* p)
{
	if (IsDead() || p->IsDead()) return;

	cout << "고블린 공격" << endl;
	p->TakeDamage(_attack);

}
