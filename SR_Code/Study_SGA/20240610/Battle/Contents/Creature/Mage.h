#pragma once
class Mage : public Player
{
public:
	Mage(string name, int hp, int mp, int atk);
	virtual ~Mage();

	// Player�� ���� ���
	virtual void Attack(Creature* other) override;

private:
};

