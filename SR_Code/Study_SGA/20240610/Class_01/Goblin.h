#pragma once
class Goblin : public Player
{
public:
	Goblin();
	Goblin(int hp, int mp, int attack);
	~Goblin();

	// �Լ� �������̵�
	void Attack(Player* p);


private:
};

