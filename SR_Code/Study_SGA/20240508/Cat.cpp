#include "Cat.h"

Cat::Cat()
{
	sound = "야아아아~~~~~~오오오오오옹!";
	legs = 4;
	playSound(); // protected : 자식에게서만 노출사용 가능
}
/*
void Cat::playSound()
{
	Animal::Print(sound);
}
*/
Cat::~Cat()
{
}

