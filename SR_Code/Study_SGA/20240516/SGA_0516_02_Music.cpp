#include "stdafx.h"
#include "Music.h"
#include "Util.h"

void SizePrint(vector<MusicInfo>& musicinfos);
int main() {

	//MusicInfo ���ؼ� vector�� ������
	vector<MusicInfo> myMusicInfo;

	Util myutil;
	myutil.LoadMusicData("MusicBaseData.csv", myMusicInfo);



	/*for (int i = 0; i < myMusicInfo.size(); i++)
	{
		cout << myMusicInfo[i].getSinger() << endl;
	}*/


	// ���� (������ �����̳�)
	// �迭���� ���͸� ���ٰ� �����ϸ��

	//int nsize = myMusicInfo.size(); // ���� ����� Ȯ�� // �ؿ� �Լ��� ��ü
	//cout << "myMusicInfo.size() = " << nsize << endl; // �ʱ� ������ 100
	SizePrint(myMusicInfo);
	
	// �ȿ� ���� ���°�
	myMusicInfo.clear(); 
	
	//nsize = myMusicInfo.size(); // �ؿ� �Լ��� ��ü
	//cout << "myMusicInfo.size() = " << nsize << endl; // clear ������ 0
	SizePrint(myMusicInfo);


	MusicInfo musicinfo;
	musicinfo.title = "�ʹ� ������� - ����";
	musicinfo.singer = "����";
	musicinfo.genre = "������Ӿ�ī���� / ����ķ�۽�";
	musicinfo.releaseDate = "2024.05.16";
	musicinfo.playing = "������ ������ ������ ��Ʈ�� �������� �̾ �ٽ� �̼����� �������� ����?";


	//myMusicInfo.push_back(musicinfo); // 1�� �ֱ�

	//�迭�� �����ϰ� �����ϴ� ���
	//myMusicInfo[0].Display(); // vector<MusicInfo> // ù��° MusicInfo ����


	SizePrint(myMusicInfo); // �ؿ� �Լ��� ��ü

	// 10���� �����
	for (int i = 0; i < 10; i++) 
	{
		musicinfo.title = to_string(i); // ���ڸ� ���ڷ� �ٲ��ִ°� = to_string
		musicinfo.singer = "����";
		musicinfo.genre = "������Ӿ�ī���� / ����ķ�۽�";
		musicinfo.releaseDate = "2024.05.16";
		musicinfo.playing = "������ ������ ������ ��Ʈ�� �������� �̾ �ٽ� �̼����� �������� ����?";

		myMusicInfo.push_back(musicinfo);
	}
	SizePrint(myMusicInfo);

	MusicInfo vInfo = myMusicInfo.at(5); // �Լ����� ȣ��
	//MusicInfo vInfo = myMusicInfo[5]; // �迭���� ȣ��
	cout << "myMusicInfo.at(5) = " << vInfo.getTitle() << endl;

	return 0;
};


// �� ������ �Լ���
void SizePrint(vector<MusicInfo>& musicinfos)
{
	int nsize = musicinfos.size(); // ���� ����� Ȯ��
	cout << "myMusicInfo.size() = " << nsize << endl;
}


