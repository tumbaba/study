#pragma once
class Creature
{
public:
	Creature(string name, int hp, int mp, int atk);
	virtual ~Creature();

	// ����Լ� : ���

	void Printinfo();
	void PreAttack(Creature* other);
	virtual void Attack(Creature* other) abstract; // ���������Լ�
	void TakeDamage(int amount);

	bool IsDead() { return _curHp <= 0; }

protected: // �������: �Ӽ�
	string _name;
	int _curHp;
	int _maxHp;
	int _atk;
	int _mp;
};

