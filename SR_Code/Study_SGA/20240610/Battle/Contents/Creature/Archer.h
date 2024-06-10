#pragma once
class Archer : public Player
{
public:
	Archer(string name, int hp, int mp, int atk);
	virtual ~Archer();

	virtual void Attack(Creature* other) override;
private:

};

