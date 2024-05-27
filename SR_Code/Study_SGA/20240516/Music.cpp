#include "stdafx.h"
#include "Music.h"


MusicInfo::MusicInfo() :title("unknown"), genre("x"), singer("unknown"), playing("no data"), releaseDate("")
{
}

string MusicInfo::getTitle()
{
	return title;
}

string MusicInfo::getSinger()
{
	return singer;
}

string MusicInfo::getGenre()
{
	return genre;
}

string MusicInfo::getReleaseDate()
{
	return releaseDate;
}

string MusicInfo::getPlaying()
{
	return playing;
}


void MusicInfo::Display()
{
	cout << title << "\t\t" << singer << "\t\t" << genre << "\t\t" << releaseDate << "\t\t" << playing << endl;
}

