#pragma once
#include "Animal.h"
class Birld :public Animal
{
private:
	

public:
	Birld();
	~Birld();
	
	void playSound() override; // 앞에는 표시되어있지 않지만 virtual이 앞에 붙은것과 같음

};

