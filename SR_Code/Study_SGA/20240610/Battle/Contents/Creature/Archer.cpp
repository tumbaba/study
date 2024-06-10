#include "pch.h"
#include "Archer.h"

Archer::Archer(string name, int hp, int mp, int atk)
: Player(name, hp, mp, atk)
{
}

Archer::~Archer()
{
}

void Archer::Attack(Creature* other)
{
	// 30���� Ȯ��
	// 0~100������ ������ �̰�
	// 100���� ����
	this->Creature::PreAttack(other); // ����Լ��� ȣ���ϱ� ���� ����... ��ü�� �׻� �־���Ѵ�.
	int num = rand() % 100;
	float ratio = num / (float)100;
	if (ratio < 0.3f)
	{
		other->TakeDamage(_atk * 3.0f);
	}
	else
	{
		other->TakeDamage(_atk);
	}
}
