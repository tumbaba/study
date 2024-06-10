#pragma once

#include <iostream>

using namespace std;

class Player
{
public:
	// 생성자, 소멸자
	Player() { _hp = 0; _mp = 0; }
	Player(int hp, int mp) { _hp = hp; _mp = mp; }
	~Player() {}


	// 멤버함수 : 클래스에서 기능
	// => 클래스의 멤버변수에 접근할수 있는 방법

	void Print()
	{
		cout << "Player의 hp : " << _hp << endl;
		cout << "Player의 mp : " << _mp << endl;
	}

	void TakeDamage(int amount)
	{
		_hp -= amount;
		if (_hp < 0)
		{
			_hp = 0;
		}
	}



private:
	// 멤버변수 : 클래스에서 속성
	// 코딩컨벤션 : 멤버변수를 표시해주는 컨벤션
	int _hp;
	int _mp;
};

