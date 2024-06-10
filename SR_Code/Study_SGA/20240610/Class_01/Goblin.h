#pragma once
class Goblin : public Player
{
public:
	Goblin();
	Goblin(int hp, int mp, int attack);
	~Goblin();

	// 함수 오버라이딩
	void Attack(Player* p);


private:
};

