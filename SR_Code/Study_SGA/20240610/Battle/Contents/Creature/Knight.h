#pragma once
class Knight : public Player
{
public:
	Knight(string name, int hp, int mp, int atk);
	virtual ~Knight();

	// Player��(��) ���� ��ӵ�
	virtual void Attack(Creature* other) override;
private:
};

