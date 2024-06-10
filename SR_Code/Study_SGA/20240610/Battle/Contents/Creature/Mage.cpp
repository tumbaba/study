#include "pch.h"
#include "Mage.h"

Mage::Mage(string name, int hp, int mp, int atk)
: Player(name, hp, mp, atk)
{
}

Mage::~Mage()
{
}

void Mage::Attack(Creature* other)
{
	this->Creature::PreAttack(other);

	if (_mp < 5)
	{
		_mp == 50;
	}
	else
	{
		_mp -= 5;
		other->TakeDamage(_atk);
	}


}
