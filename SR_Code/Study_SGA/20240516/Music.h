#pragma once
#include "stdafx.h"

enum Element {
	TITLE,
	GENRE,
	SINGER,
};

class MusicInfo
{
public:
	string title;
	string singer;
	string genre;
	string releaseDate;
	string playing;

public:
	
	MusicInfo();
	~MusicInfo() {};

	string getTitle();
	string getSinger();
	string getGenre();
	string getReleaseDate();
	string getPlaying();

	//void Play();
	void Display();
};

