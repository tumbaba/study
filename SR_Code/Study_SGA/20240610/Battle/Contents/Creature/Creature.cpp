#include "pch.h"
#include "Creature.h"

Creature::Creature(string name, int hp, int mp, int atk)
: _name(name), _curHp(hp), _atk(atk), _mp(mp),_maxHp(hp)
{
}

Creature::~Creature()
{
}

void Creature::Printinfo()
{
	cout << "---- ���� ----" << endl;
	cout << "�̸� : " <<_name << endl;
	cout << "HP : " << _curHp << endl;
	cout << "MP : " << _mp << endl;
	cout << "ATK : " << _atk << endl;
	cout << "------------" << endl;
}

void Creature::PreAttack(Creature* other)
{
	cout << _name << "�� " << other->_name << "���� ������ �õ��մϴ�." << endl;
}

void Creature::TakeDamage(int amount)
{
	_curHp -= amount;

	if (_curHp < 0)
		_curHp = 0;

	Printinfo();
	/*if (IsDead())
	{


	}*/

}
