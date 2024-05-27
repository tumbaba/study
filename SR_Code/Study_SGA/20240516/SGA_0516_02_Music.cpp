#include "stdafx.h"
#include "Music.h"
#include "Util.h"

void SizePrint(vector<MusicInfo>& musicinfos);
int main() {

	//MusicInfo 대해서 vector로 저장함
	vector<MusicInfo> myMusicInfo;

	Util myutil;
	myutil.LoadMusicData("MusicBaseData.csv", myMusicInfo);



	/*for (int i = 0; i < myMusicInfo.size(); i++)
	{
		cout << myMusicInfo[i].getSinger() << endl;
	}*/


	// 벡터 (시퀀스 컨테이너)
	// 배열보다 백터를 쓴다고 생각하면됨

	//int nsize = myMusicInfo.size(); // 벡터 사이즈를 확인 // 밑에 함수로 대체
	//cout << "myMusicInfo.size() = " << nsize << endl; // 초기 사이즈 100
	SizePrint(myMusicInfo);
	
	// 안에 내용 비우는것
	myMusicInfo.clear(); 
	
	//nsize = myMusicInfo.size(); // 밑에 함수로 대체
	//cout << "myMusicInfo.size() = " << nsize << endl; // clear 사이즈 0
	SizePrint(myMusicInfo);


	MusicInfo musicinfo;
	musicinfo.title = "너무 어려워요 - 지코";
	musicinfo.singer = "지코";
	musicinfo.genre = "서울게임아카데미 / 성남캠퍼스";
	musicinfo.releaseDate = "2024.05.16";
	musicinfo.playing = "개선된 수업이 여지껏 흐트러 놓은것을 이어서 다시 싱숭생숭 구간으로 진행?";


	//myMusicInfo.push_back(musicinfo); // 1개 넣기

	//배열과 동일하게 접근하는 방법
	//myMusicInfo[0].Display(); // vector<MusicInfo> // 첫번째 MusicInfo 접근


	SizePrint(myMusicInfo); // 밑에 함수로 대체

	// 10개를 만들기
	for (int i = 0; i < 10; i++) 
	{
		musicinfo.title = to_string(i); // 숫자를 문자로 바꿔주는것 = to_string
		musicinfo.singer = "지코";
		musicinfo.genre = "서울게임아카데미 / 성남캠퍼스";
		musicinfo.releaseDate = "2024.05.16";
		musicinfo.playing = "개선된 수업이 여지껏 흐트러 놓은것을 이어서 다시 싱숭생숭 구간으로 진행?";

		myMusicInfo.push_back(musicinfo);
	}
	SizePrint(myMusicInfo);

	MusicInfo vInfo = myMusicInfo.at(5); // 함수형태 호출
	//MusicInfo vInfo = myMusicInfo[5]; // 배열형태 호출
	cout << "myMusicInfo.at(5) = " << vInfo.getTitle() << endl;

	return 0;
};


// 위 내용을 함수로
void SizePrint(vector<MusicInfo>& musicinfos)
{
	int nsize = musicinfos.size(); // 벡터 사이즈를 확인
	cout << "myMusicInfo.size() = " << nsize << endl;
}


