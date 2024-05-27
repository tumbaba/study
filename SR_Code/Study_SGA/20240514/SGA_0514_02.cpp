#include "stdafx.h"
#include "Music.h"
#include "Util.h"


int main() {

	vector<MusicInfo> myMusicInfo;

	Util myutil;

	int num2 = 10;
	int& num = num2;

	
	myutil.LoadMusicData("MusicBaseData.csv", myMusicInfo);

	//벡터에 참조로 접근하는 방법
	//vector<MusicInfl>& musicinfos = myMusicInfo; // 참조접근
		
	// 백터 포인트 변수로 접근방법
	// 
	// 예제 1)
	//MusicInfo* pmusicInfo = myMusicInfo.data(); // 포인터 사용
	//(pmusicInfo)->Display();  // 0번째출력 (99번째 출력은 pmusicInfo + 99)
	
	// 예제 2)
	//vector<int> myInt(6);
	//int* pInt = myInt.data();
	// 
	// 포인터로 접근해서 해당된 배열값 수정할때 
	//*(pInt + 0) = 100; // myInt[0] = 100;


	// const_cast 사용예 (콘스트 캐스팅)
	vector<int> myInt(6); // 벡터 int자료형 myInt 이름의 6개 배열영역 선언
	const int* pInt = myInt.data(); // 상수로 int 된것을 변경 못하기때문에 포인터로 pint 생성후 초기화?
	//*(pInt + 0) = 100; // const로 사용했기때문에 *밑에 빨간줄 나옴 ( 변경 못하기때문 )
	int* ptr = const_cast<int*>(pInt); // ptr변수가 접근해서 해주는 역할
	*(ptr + 4) = 30;

	
	
	/*
	for (int i = 0; i < myMusicInfo.size(); i++)
	{
		cout << myMusicInfo[i].getSinger() << endl;
	}*/




	return 0;
}