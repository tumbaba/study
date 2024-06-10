#pragma once
class Player : public Creature
{
public:
	Player(string name, int hp, int mp, int atk);
	virtual ~Player();

protected:
	int _exp;
};

