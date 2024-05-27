#include "stdafx.h"
#include "Util.h"
#include "Music.h"

void lineSeparator()
{
    std::cout << "\n----------------------------------------------------------------------------------------------------\n";
}

void Util::LoadMusicData(string filename, vector<MusicInfo> &musicinfos)
{
    std::ifstream file(filename);
    file.imbue(std::locale("ko_KR.utf8"));
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        MusicInfo row;
        getline(ss, row.title, ',');
        getline(ss, row.singer, ',');
        getline(ss, row.genre, ',');
        getline(ss, row.releaseDate, ',');
        getline(ss, row.playing, ',');
        musicinfos.push_back(row);
    }
    file.close();
}
