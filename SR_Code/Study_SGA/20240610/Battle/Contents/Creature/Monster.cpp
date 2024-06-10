#include "pch.h"
#include "Monster.h"

Monster::Monster(string name, int hp, int mp, int atk)
: Creature(name, hp, mp, atk)
{
}

Monster::~Monster()
{
}

void Monster::Attack(Creature* other)
{
	this->Creature::PreAttack(other);

	other->TakeDamage(_atk);
}
