#include "Birld.h"

Birld::Birld()
{
	sound = "째액짹쨱쨱~~~~!!!";
	legs = 2;
}

Birld::~Birld()
{
}

void Birld::playSound() // protected 에서 virtual을 사용하여 override 사용하여 다시 함수를 재정의
{
	Print("Virtual부모상태로 자식이override를  함수호출");
}
