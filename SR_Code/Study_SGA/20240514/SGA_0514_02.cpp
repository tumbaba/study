#include "stdafx.h"
#include "Music.h"
#include "Util.h"


int main() {

	vector<MusicInfo> myMusicInfo;

	Util myutil;

	int num2 = 10;
	int& num = num2;

	
	myutil.LoadMusicData("MusicBaseData.csv", myMusicInfo);

	//���Ϳ� ������ �����ϴ� ���
	//vector<MusicInfl>& musicinfos = myMusicInfo; // ��������
		
	// ���� ����Ʈ ������ ���ٹ��
	// 
	// ���� 1)
	//MusicInfo* pmusicInfo = myMusicInfo.data(); // ������ ���
	//(pmusicInfo)->Display();  // 0��°��� (99��° ����� pmusicInfo + 99)
	
	// ���� 2)
	//vector<int> myInt(6);
	//int* pInt = myInt.data();
	// 
	// �����ͷ� �����ؼ� �ش�� �迭�� �����Ҷ� 
	//*(pInt + 0) = 100; // myInt[0] = 100;


	// const_cast ��뿹 (�ܽ�Ʈ ĳ����)
	vector<int> myInt(6); // ���� int�ڷ��� myInt �̸��� 6�� �迭���� ����
	const int* pInt = myInt.data(); // ����� int �Ȱ��� ���� ���ϱ⶧���� �����ͷ� pint ������ �ʱ�ȭ?
	//*(pInt + 0) = 100; // const�� ����߱⶧���� *�ؿ� ������ ���� ( ���� ���ϱ⶧�� )
	int* ptr = const_cast<int*>(pInt); // ptr������ �����ؼ� ���ִ� ����
	*(ptr + 4) = 30;

	
	
	/*
	for (int i = 0; i < myMusicInfo.size(); i++)
	{
		cout << myMusicInfo[i].getSinger() << endl;
	}*/




	return 0;
}