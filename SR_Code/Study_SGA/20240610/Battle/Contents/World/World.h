#pragma once
class World
{
public:
	enum PlayerType
	{
		NONE = 0,
		KNIGHT = 1,
		ARCHER = 2,
		MAGE = 3
	};

	World();
	~World();
	// �������� : ���������, ������Կ����� �Ѵ�
	// ���������
	// World(const World& other);
	// ���� ���Կ�����
	// World& operator=(const World& other);

	void Init(); // �ʱ�ȭ
	
	bool End();

	void Battle1();
	void Battle2(); // ����

private:

	void SeletPlayer(int num, string name, Creature** creature);

	void Input();

	Creature* _player;
	Creature* _computer;
};

