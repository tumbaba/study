#pragma once
#include "stdafx.h"

class Music
{


public:
	
	string Genre;
	string GenreName;
	string MusicName;
	string SingerName[36];  // �����̸�
	string Sing[100];	 // �뷡�����
	string lyrics[100];  // ����
	
	
	string Search_SingerName;
	int Num;
	
	int i = 0;

public:
	Music();
	~Music();

void info();
void sGenre();			// �帣 �Լ�
void sMusicName();		// �뷡 ����
void sSingerName(string name);		// ���� �̸�

void ALL();
void BalladeList();		// �߶��
void HiphopList();		// ����&��
void RnbList();			// �˾غ� �ҿ�
void RockList();		// ��, �ε�
void SongList();		// Sing[100] ��� ������
void Name(string name);
void SingerSongList(); // �����̸�, �뷡����

};


