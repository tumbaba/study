#include "pch.h"
#include "Player.h"

Player::Player()
{
	cout << "Player의 기본 생성자" << endl;
	_hp = 0;
	_mp = 0;
	_attack = 0;
}

Player::Player(int hp, int mp, int attack)
{
	cout << "Player의 타입변환 생성자" << endl;
	_hp = hp;
	_mp = mp;
	_attack = attack;
}

Player::~Player()
{
	cout << "Player의 소멸자" << endl;
}

void Player::PrintPlayer()
{
	cout << "HP : " << _hp << endl;
	cout << "MP : " << _mp << endl;
	cout << "ATTACK : " << _attack << endl;

}

void Player::Attack(Player* p)
{
	if (IsDead() || p->IsDead()) return;	// if 조건 : 공격을 시도하는 플레이어가 죽었는지(IsDead()) 확인
											// 공격 대상 플레이어가 죽었는지(p->IsDead()) 확인
											// || => or  둘중 하나만 해당해도 true를 반환
	cout << "Player의 공격 !!!" << endl;		// 위조건 해당안되면 그냥 text 공격 출력
	p->TakeDamage(_attack);
}

void Player::TakeDamage(int amount)
{
	_hp -= amount;

	if (_hp <= 0)	// protected의 _hp가 0보다 작거나(-수치) 0이라면..
		_hp = 0;	// _hp를 = 0값으로 초기화 (죽음...)
}

void Player::SetStat(int hp, int mp, int attack)
{
	_hp = hp;
	_mp = mp;
	_attack = attack;
}
