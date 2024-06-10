#include "pch.h"	
#include "World.h"

World::World()
: _player(nullptr)
, _computer(nullptr)
{
	Input();
	Init();
}

World::~World()
{
	if(_player != nullptr)
		delete _player;
	if(_computer != nullptr)
		delete _computer;
}

void World::Init()
{
}

bool World::End()
{
	if (_player->IsDead() || _computer->IsDead())
	{
		return true;
	}
	return false;
}

void World::SeletPlayer(int num, string name, Creature** creature)
{
	switch (num)
	{
	case PlayerType::NONE:
	{
		cout << "�ٽ� �Է����ּ���." << endl;
		break;
	}

	case PlayerType::KNIGHT:
	{
		*creature = new Knight(name, 500, 20, 15);
	}
	break;
	case PlayerType::ARCHER:
	{
		*creature = new Archer(name, 300, 25, 35);
	}
	break;
	case PlayerType::MAGE:
	{
		*creature = new Mage(name, 200, 50, 60);
	}
	break;

	default:
	{
		cout << "�ٽ� �Է����ּ���." << endl;
		break;
	}
	break;
	}
}

void World::Input()
{
	int playerNum = 0;
	int cumNum = 0;
	string name;
	
	cout << "�̸��� �Է����ּ���" << endl;
	cin >> name;
	cout << "1. Knight(���)\t2. Archer(�ü�)\t 3. Mage(������) �߿��� ��ȣ�� �Է����ּ���." << endl;
	cin >> playerNum;
	cumNum = rand() % 3 + 1; // 1 ~ 3
	SeletPlayer(playerNum, name, &_player);
	SeletPlayer(playerNum, "computer", &_computer);
}

void World::Battle1()
{
	_player->Attack(_computer);
	_computer->Attack(_player);
}

void World::Battle2()
{
}
