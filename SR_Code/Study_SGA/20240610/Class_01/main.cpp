// 1. Player�� ��ӹ޴� 3���� Ŭ������ ���弼��
// 2. main�� �� �� 2���� ��ü�� ����ð�
// 3. ��ü���� �ο��� �մϴ�.
// 4. �̸� �Ѹ��� ���� ������ �ݺ�

// 1. Player�� ��ӹ޴� Goblin...(hp, mp, attack)
// 2. main�� Player1��, Goblin(10��) �迭�� ������ּ���.
// 3. �� �� Goblin�� ü���� 30 ~ 50 ����, ���ݷ��� 2 ~ 5���� ������ ����
// 4. Player�� �װų�, ��� 10������ �� �״� ��쿡 ���� �� �� �ܿ� �ݺ�
// ... �� �� ����� �׾��� �ϸ� Attack�� �������� �ʰ�


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
		if (!arr[i].IsDead())	// ����ִ�.
			return false;
	}

	// ������
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
		// �ο�
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