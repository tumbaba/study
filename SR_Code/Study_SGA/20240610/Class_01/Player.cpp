#include "pch.h"
#include "Player.h"

Player::Player()
{
	cout << "Player�� �⺻ ������" << endl;
	_hp = 0;
	_mp = 0;
	_attack = 0;
}

Player::Player(int hp, int mp, int attack)
{
	cout << "Player�� Ÿ�Ժ�ȯ ������" << endl;
	_hp = hp;
	_mp = mp;
	_attack = attack;
}

Player::~Player()
{
	cout << "Player�� �Ҹ���" << endl;
}

void Player::PrintPlayer()
{
	cout << "HP : " << _hp << endl;
	cout << "MP : " << _mp << endl;
	cout << "ATTACK : " << _attack << endl;

}

void Player::Attack(Player* p)
{
	if (IsDead() || p->IsDead()) return;	// if ���� : ������ �õ��ϴ� �÷��̾ �׾�����(IsDead()) Ȯ��
											// ���� ��� �÷��̾ �׾�����(p->IsDead()) Ȯ��
											// || => or  ���� �ϳ��� �ش��ص� true�� ��ȯ
	cout << "Player�� ���� !!!" << endl;		// ������ �ش�ȵǸ� �׳� text ���� ���
	p->TakeDamage(_attack);
}

void Player::TakeDamage(int amount)
{
	_hp -= amount;

	if (_hp <= 0)	// protected�� _hp�� 0���� �۰ų�(-��ġ) 0�̶��..
		_hp = 0;	// _hp�� = 0������ �ʱ�ȭ (����...)
}

void Player::SetStat(int hp, int mp, int attack)
{
	_hp = hp;
	_mp = mp;
	_attack = attack;
}
