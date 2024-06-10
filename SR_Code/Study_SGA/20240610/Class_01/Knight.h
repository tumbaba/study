#pragma once
#include "Player.h"


class Knight : public Player
{
public:
	Knight();
	Knight(int hp, int mp, int attack, int stamina);
	~Knight();

	// 함수 오버라이딩 : 부모의 함수를 재정의
	void Attack(Player* p);

private:
	int _stamina;
};

