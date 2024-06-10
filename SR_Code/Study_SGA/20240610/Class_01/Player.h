#pragma once
class Player
{
public:
	Player();
	Player(int hp, int mp, int attack);
	~Player();

	void PrintPlayer();
	void Attack(Player* p);
	void TakeDamage(int amount);

	// stat을 재설정하는 함수
	void SetStat(int hp, int mp, int attack);

	bool IsDead() { return _hp <= 0; }

	// get set
	void SetHp(int hp) { _hp = hp; }
	const int& GetHp() {return _hp;}


protected:
	int _hp;
	int _mp;
	int _attack;

};

