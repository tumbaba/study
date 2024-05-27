#pragma once
#include "stdafx.h"

class Music
{


public:
	
	string Genre;
	string GenreName;
	string MusicName;
	string SingerName[36];  // 가수이름
	string Sing[100];	 // 노래제목들
	string lyrics[100];  // 가사
	
	
	string Search_SingerName;
	int Num;
	
	int i = 0;

public:
	Music();
	~Music();

void info();
void sGenre();			// 장르 함수
void sMusicName();		// 노래 제목
void sSingerName(string name);		// 가수 이름

void ALL();
void BalladeList();		// 발라드
void HiphopList();		// 힙합&랩
void RnbList();			// 알앤비 소울
void RockList();		// 락, 인디
void SongList();		// Sing[100] 담긴 데이터
void Name(string name);
void SingerSongList(); // 가수이름, 노래제목

};


