#pragma once
#include "Player.h"


class Knight : public Player
{
public:
	Knight();
	Knight(int hp, int mp, int attack, int stamina);
	~Knight();

	// �Լ� �������̵� : �θ��� �Լ��� ������
	void Attack(Player* p);

private:
	int _stamina;
};

