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
	// 깊은복사 : 복사생성자, 복사대입연산자 둘다
	// 복사생성자
	// World(const World& other);
	// 복사 대입연산자
	// World& operator=(const World& other);

	void Init(); // 초기화
	
	bool End();

	void Battle1();
	void Battle2(); // 과제

private:

	void SeletPlayer(int num, string name, Creature** creature);

	void Input();

	Creature* _player;
	Creature* _computer;
};

