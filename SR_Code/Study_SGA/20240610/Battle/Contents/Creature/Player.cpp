#include "pch.h"
#include "Player.h"

Player::Player(string name, int hp, int mp, int atk)
// : Creature()
: Creature(name, hp, mp, atk)
, _exp(0)
{
}

Player::~Player()
{
}
