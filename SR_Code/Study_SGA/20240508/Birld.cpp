#include "Birld.h"

Birld::Birld()
{
	sound = "°��±����~~~~!!!";
	legs = 2;
}

Birld::~Birld()
{
}

void Birld::playSound() // protected ���� virtual�� ����Ͽ� override ����Ͽ� �ٽ� �Լ��� ������
{
	Print("Virtual�θ���·� �ڽ���override��  �Լ�ȣ��");
}
