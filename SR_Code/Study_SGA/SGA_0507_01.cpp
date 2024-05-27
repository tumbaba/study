#include "stdafx.h"
// ifstream: ���Ϸκ��� �Է� �ޱ����� Ŭ���� std::ifstream file("�����̸�.txt")
// ofstream: ���Ϸκ��� ��� �ϱ����� Ŭ���� std::ofstream file("�����̸�.txt")
// fstream: ������ �Է� or Ǯ���ϱ� ���� Ŭ���� std::fstream file("�����̸�.txt")
// open: ���Ͽ��� file.open("�����̸�.txt")
// close: ���ϴݱ� file.close("�����̸�.txt")
// << ��� ������
// >> �Է� ������
// getline: ���پ� ���Ͽ��� ���ڿ� �б� std::getline(file.str);


#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Birld.h"

int main() {
	/*
	Animal animal; 
	Animal dog0("�۸���");
	Animal dog1("�۸���", 1);
	Animal dog2(5);
	Animal ani_Bird("������ѱ�", 2);
	*/
	//Animal* panimal = new Animal; // ���ο� �ִϸֻ����� ��ü ����

	
	// ���밪�� ���ư��� �����Ҷ� �ַ� ����Ѵٰ���.(�ּҰ��� �ٲ��ִ�����)
	Animal* panimal = nullptr;
	
	Dog dog3;
	dog3.Print("���ο� ������");
	dog3.playSound();
	dog3.Print(dog3.legs);

	Cat cat;
	cat.Print("���ο� �߿���");
	cat.playSound();
	int nlegs = cat.legs;
	cat.Print(nlegs);

	Birld birld;
	birld.Print("Ǫ���Ǫ��� ������ٴϴ� ��");
	birld.playSound();
	nlegs = birld.legs;
	birld.Print(nlegs);

	
	// ������ ���� �����ϴ� ����� ������, ���۷����� �˷���. 
	// ������
	panimal = &dog3;
	panimal->playSound();

	panimal = &cat;
	panimal->playSound();

	panimal = &birld;
	panimal->playSound();

	// ���۷��� : ������ �ٷ� ����� ���ÿ� ȣ���� ����Ѵ�. (�����ʹ� ���ε��� �Ҽ�����)
	// ���� ������ �޸𸮸� ��� ����(�ּҵ�) �ϸ鼭 ������ ���氪�� ���� ����	
	Animal& refanimal = dog3;
	refanimal.playSound();

	refanimal = cat;
	refanimal.playSound();

	refanimal = birld;
	refanimal.playSound();

	return 0;
}
