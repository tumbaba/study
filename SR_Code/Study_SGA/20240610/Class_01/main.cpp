// 1. Player를 상속받는 3가지 클래스를 만드세요
// 2. main에 그 중 2개의 객체를 만드시고
// 3. 객체끼리 싸움을 합니다.
// 4. 이를 한명이 죽을 때까지 반복

// 1. Player를 상속받는 Goblin...(hp, mp, attack)
// 2. main에 Player1명, Goblin(10명) 배열을 만들어주세요.
// 3. 이 때 Goblin의 체력은 30 ~ 50 난수, 공격력은 2 ~ 5까지 랜덤한 난수
// 4. Player가 죽거나, 고블린 10마리가 다 죽는 경우에 게임 끝 그 외에 반복
// ... 이 때 고블린이 죽었다 하면 Attack은 동작하지 않게


#include "pch.h"

void SetG_Arr(Goblin arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int randHp = rand() % 21 + 30;
		int randAtk = rand() % 4 + 2;
		arr[i].SetStat(randHp, 0, randAtk);
	}

}

bool GArr_Dead(Goblin arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (!arr[i].IsDead())	// 살아있다.
			return false;
	}

	// 다죽음
	return true;
}

int main()
{
	srand(time(NULL));

	Player p(50000, 10, 5);
	Knight k(100, 5, 15, 10);

	Goblin gArr[10];

	SetG_Arr(gArr, 10);

	while (true)
	{
		// 싸움
		for (int i = 0; i < 10; i++)
		{
			p.Attack(&gArr[i]);
			gArr[i].Attack(&p);
		}

		if (p.IsDead() || GArr_Dead(gArr, 10))
			break;
	}

	p.PrintPlayer();

	for (int i = 0; i < 10; i++)
	{
		gArr[i].PrintPlayer();
	}

	return 0;
}