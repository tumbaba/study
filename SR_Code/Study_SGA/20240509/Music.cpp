#include "Music.h"
#include "Music.h"


Music::Music()
{

}

Music::~Music()
{
}

string SingerName[36] = {
	SingerName[0] = "유재하 ",
	"김현식 ",
	SingerName[3] = "아이유 ",
	"태연 ",
	"성시경 ",

	"폴킴 ",
	"박효신 ",
	"헤이즈 ",
	"허각 ",
	"이적 ",

	"지코 ",
	"다이나믹듀오 ",
	"지드래곤 ",
	"싸이 ",
	"윤미래 ",

	"에픽하이 ",
	"드렁큰타이거 ",
	"박재범 ",
	"사이먼도미닉 ",
	"나얼 ",

	"자이언티 ",
	"박정현 ",
	"솔리드 ",
	"거미 ",
	"태양 ",

	"크러쉬 ",
	"김범수 ",
	"혁오 ",
	"넬 ",
	"김경호 ",

	"윤도현 ",
	"부활 ",
	"10CM ",
	"국카스텐 ",
	"테이 ",

	"임재범 "
};

void Music::sMusicName()
{
	
}

void Music::sSingerName(string name)
{	
	
	Search_SingerName = name;

	SingerName[0] = "유재하 ";
	SingerName[1] = "김현식 ";
	SingerName[2] = "아이유 ";;
	SingerName[3] = "태연 ";
	SingerName[4] = "성시경 ";

	SingerName[5] = "폴킴 ";
	SingerName[6] = "박효신 ";
	SingerName[7] = "헤이즈 ";
	SingerName[8] = "허각 ";
	SingerName[9] = "이적 ";

	SingerName[10] = "지코 ";
	SingerName[11] = "다이나믹듀오 ";
	SingerName[12] = "지드래곤 ";
	SingerName[13] = "싸이 ";
	SingerName[14] = "윤미래 ";

	SingerName[15] = "에픽하이 ";
	SingerName[16] = "드렁큰타이거 ";
	SingerName[17] = "박재범 ";
	SingerName[18] = "사이먼도미닉 ";
	SingerName[19] = "나얼 ";

	SingerName[20] = "자이언티 ";
	SingerName[21] = "박정현 ";
	SingerName[22] = "솔리드 ";
	SingerName[23] = "거미 ";
	SingerName[24] = "태양 ";

	SingerName[25] = "크러쉬 ";
	SingerName[26] = "김범수 ";
	SingerName[27] = "혁오 ";
	SingerName[28] = "넬 ";
	SingerName[29] = "김경호 ";

	SingerName[30] = "윤도현 ";
	SingerName[31] = "부활 ";
	SingerName[32] = "10CM ";
	SingerName[33] = "국카스텐 ";
	SingerName[34] = "테이 ";

	SingerName[35] = "임재범 ";
	


}

void Music::ALL()
{
	SongList();
	for (i = 0; i < 100; i++)
	{
		cout << Sing[i] << endl;
	}
}
void Music::BalladeList()
{
	SongList();
	for (i = 0; i < 25; i++)
	{
		cout << Sing[i] << endl;
	}
}
void Music::HiphopList()
{
	SongList();
	for (i = 25; i < 50; i++)
	{
		cout << Sing[i] << endl;
	}
}
void Music::RnbList()
{
	SongList();
	for (i = 50; i < 75; i++)
	{
		cout << Sing[i] << endl;
	}
}
void Music::RockList()
{
	SongList();
	for (i = 75; i < 100; i++)
	{
		cout << Sing[i] << endl;
	}
}

void Music::SongList()
{
	
	Sing[0] = "유재하 - 사랑하기 때문에";
	Sing[1] = "유재하 - 가리워진 길";
	Sing[2] = "유재하 - 그대내품에";
	Sing[3] = "김현식 - 비처럼 음악처럼";
	Sing[4] = "김현식 - 사랑했어요";
	Sing[5] = "아이유 - Love wins all";
	Sing[6] = "아이유 - 관객이 될게(I stan U)";
	Sing[7] = "아이유 - 밤편지";
	Sing[8] = "태연 - 꿈";
	Sing[9] = "태연 - 사계(Four Seasons)";

	Sing[10] = "성시경 - 잠시라도우리";
	Sing[11] = "성시경 - 희재";
	Sing[12] = "성시경 - 너의 모든순간";
	Sing[13] = "폴킴 - 있잖아";
	Sing[14] = "폴킴 - 좋아해요";
	Sing[15] = "박효신 - 야생화";
	Sing[16] = "박효신 - 눈의꽃";
	Sing[17] = "박효신 - Goodbye";
	Sing[18] = "헤이즈 - 넌 어디에";
	Sing[19] = "헤이즈 - 비도 오고 그래서";

	Sing[20] = "허각 -	사랑을 하기는 했나 봐";
	Sing[21] = "허각 -	물론";
	Sing[22] = "이적 -	Rain";
	Sing[23] = "이적 -	다행이다";
	Sing[24] = "이적 -	하늘을 달리다";
	Sing[25] = "지코 -	SPOT!(feat.JENNIE)";
	Sing[26] = "지코 -	새삥(Prod.ZICO) (Feat.호미들)";
	Sing[27] = "지코 - 	너는 나 나는 너";
	Sing[28] = "다이나믹듀오 - Smoke (Prod. Dynamicduo, Padi)";
	Sing[29] = "다이나믹듀오 - 죽일 놈(Guilty)";

	Sing[30] = "지드래곤 - 삐딱하게 (Crooked)";
	Sing[31] = "지드래곤 - Heartbreaker";
	Sing[32] = "싸이 - 	어땠을까(feat.박정현)";
	Sing[33] = "싸이 - 낙원 (feat. 이재훈)";
	Sing[34] = "싸이 - 	강남스타일";
	Sing[35] = "싸이 - 챔피언";
	Sing[36] = "윤미래 - 시간이 흐른 뒤 (As Time Goes By)";
	Sing[37] = "윤미래 - 검은 행복";
	Sing[38] = "에픽하이 - 비 오는 날 듣기 좋은 노래(Feat.Colde)";
	Sing[39] = "에픽하이 - Love Love Love(feat.융진 Of Casker)";

	Sing[40] = "드렁큰 타이거 - 난 널 원해";
	Sing[41] = "드렁큰 타이거 - 너희가 힙합을 아느냐?";
	Sing[42] = "드렁큰 타이거 - 	Good Life";
	Sing[43] = "박재범 - 좋아(JOAH)";
	Sing[44] = "박재범 - 곁에 있어주길";
	Sing[45] = "박재범 - Love Is Ugly(Feat.화사)";
	Sing[46] = "박재범 - DRIVE(Feat.GRAY)";
	Sing[47] = "사이먼 도미닉 - 	사이먼 도미닉";
	Sing[48] = "사이먼 도미닉 - 맘 편히(Comfortable)";
	Sing[49] = "사이먼 도미닉 - 사라진 모든 것들에게(with ELLE KOREA)";
	Sing[50] = "나얼 - 바람기억";
	Sing[51] = "나얼 - 	같은 시간 속의 너";
	Sing[52] = "나얼 - 	기억의 빈자리";
	Sing[53] = "나얼 - 귀로";
	Sing[54] = "자이언티(Zion.T) - 양화대교";
	Sing[55] = "자이언티(Zion.T) - 꺼내 먹어요";
	Sing[56] = "자이언티(Zion.T) - 	그냥(Just)";
	Sing[57] = "자이언티(Zion.T) - No Make Up";
	Sing[58] = "박정현 - 꿈에";
	Sing[59] = "박정현 - 사랑보다 깊은 상처(duet with 임재범)";

	Sing[60] = "박정현 - 편지할께요";
	Sing[61] = "박정현 - 하얀 겨울";
	Sing[62] = "솔리드 - 천생연분(Rave)";
	Sing[63] = "솔리드 - 이 밤의 끝을 잡고 (R&B Ballad)";
	Sing[64] = "거미 - 	You Are My Everything";
	Sing[65] = "거미 - 	친구라도 될 걸 그랬어";
	Sing[66] = "거미 - 	그대 돌아오면..";
	Sing[67] = "거미 - 기억상실";
	Sing[68] = "태양 - 	눈, 코, 입";
	Sing[69] = "태양 - 	나의 마음에";

	Sing[70] = "크러쉬(Crush) - Beautiful";
	Sing[71] = "크러쉬(Crush) - 어떻게 지내";
	Sing[72] = "김범수 - 끝사랑";
	Sing[73] = "김범수 - 보고싶다";
	Sing[74] = "김범수 - 슬픔활용법";
	Sing[75] = "혁오 (HYUKOH) - 위잉위잉";
	Sing[76] = "혁오 (HYUKOH) - 와리가리";
	Sing[77] = "혁오 (HYUKOH) - TOMBOY";
	Sing[78] = "넬(NELL) - 	기억을 걷는 시간";
	Sing[79] = "넬(NELL) - Stay";

	Sing[80] = "김경호 - 금지된 사랑";
	Sing[81] = "김경호 - 나를 슬프게 하는 사람들";
	Sing[82] = "김경호 - 사랑했지만";
	Sing[83] = "윤도현 - 사랑했나봐";
	Sing[84] = "윤도현 - 사랑 Two";
	Sing[85] = "윤도현 - 너를 보내고";
	Sing[86] = "윤도현 - 흰수염고래";
	Sing[87] = "부활 - Lonely Night";
	Sing[88] = "부활 - 생각이 나";
	Sing[89] = "부활 - Never Ending Story";

	Sing[90] = "10CM - 그라데이션";
	Sing[91] = "10CM - 나의 어깨에 기대어요";
	Sing[92] = "10CM - 내 눈에만 보여";
	Sing[93] = "국카스텐 - Pulse";
	Sing[94] = "국카스텐 - 걱정말아요 그대 (우리 동네 음악대장)";
	Sing[95] = "국카스텐 - 거울";
	Sing[96] = "테이 - 	Monologue";
	Sing[97] = "테이 - 	사랑은...향기를 남기고";
	Sing[98] = "임재범 - 낙인";
	Sing[99] = "임재범 - 너를 위해";
}

void Music::Name(string name)
{
	GenreName = name;
}

void Music::SingerSongList()
{
	cout << "\t\t← 뒤로가기 (키보드 0 입력)" << endl;
	cout << "\n가수 이름을 검색하세요 : ";

	
	//SingerName[36];
	cin >> Search_SingerName;

	if (Search_SingerName == "유재하")
	{
		cout << Search_SingerName << ": " << Sing[0] << ", " << SingerName[3] << ", " << Sing[2] << endl; // string 출력되는 문구가 왜안나오는지?
	}
	else if (Search_SingerName == "0")
	{
		system("cls");
		info();
	}
	else {
	
		cout << "───────────해당하는 가수가 없습니다. 다시 이름을 입력해주세요───────────" << endl;
		return(SingerSongList());
	}
	
}

void Music::info()
{

	cout << "────────────────원하시는 숫자의 내용을 입력하세요────────────────" << endl;
	cout << "\t\t\t1. 장르별 노래" << endl;
	cout << "\t\t\t2. 제목별 노래" << endl;
	cout << "\t\t\t3. 가수별 노래" << endl;
	cout << "\t\t\t4. 전체 노래" << endl;


	cin >> Num;
	int i = Num;
	

	if (i == 1) {
		system("cls");
		sGenre();
	}
	else if (i == 2) {
		sMusicName();
	}
	else if (i == 3) {
		system("cls");
		SingerSongList();
	}
	else if (i == 4) {
		ALL();
	}
	else {
		//system("cls");
		cout << "잘못 입력하셨으니 다시 입력 부탁드립니다." << endl;
		return info();
	}
}




void Music::sGenre()
{
	
	cout << "────────────────원하시는 장르를 입력하세요────────────────" << endl;
	cout << "발라드" << "\t\t" << "랩 & 힙합" << "\t" << "알앤비소울" << "\t" << "락 or 인디" << "\t" << endl;
	cout << "\n\n\t\t← 뒤로가기 (키보드 0 입력)" << endl;
	
	//string Name;
	cout << "\n장르: ";
	cin >> GenreName;
	if (GenreName == "발라드" || GenreName == "Ballade") {
		cout << "───────────발라드 (Ballade) 목록리스트는 아래와 같습니다───────────" << endl;
		BalladeList();
	}
	else if (GenreName == "Balade" || GenreName == "balade") {
		cout << "───────────발라드 (Ballade) 목록리스트는 아래와 같습니다───────────" << endl;
		BalladeList();
	}
	else if (GenreName == "ballade") {
		cout << "───────────발라드 (Ballade) 목록리스트는 아래와 같습니다───────────" << endl;
		BalladeList();
	}
	else if (GenreName == "랩" || GenreName == "N"){
		cout << "───────────랩 & 힙합 (Rap & Hiphop) 목록리스트는 아래와 같습니다───────────" << endl;
		HiphopList();
	}
	else if (GenreName == "Rap" || GenreName == "rap"){
		cout << "───────────랩 & 힙합 (Rap & Hiphop) 목록리스트는 아래와 같습니다───────────" << endl;
		HiphopList();
	}
	else if (GenreName == "힙합" || GenreName == "Hiphop") {
		cout << "───────────랩 & 힙합 (Rap & Hiphop) 목록리스트는 아래와 같습니다───────────" << endl;
		HiphopList();
	}
	else if (GenreName == "hiphop") {
		cout << "───────────랩 & 힙합 (Rap & Hiphop) 목록리스트는 아래와 같습니다───────────" << endl;
		HiphopList();
	}

	else if (GenreName == "알앤비" || GenreName == "알앤비소울") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "rnb" || GenreName == "rnbsoul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "RnB" || GenreName == "RnBSoul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "R&B" || GenreName == "R&BSoul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "r&b" || GenreName== "r&bsoul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "r&b soul" || GenreName == "R&B soul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "소울" || GenreName == "soul") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}
	else if (GenreName == "Soul" || GenreName == "알앤비 소울") {
		cout << "───────────알앤비 소울 (R&B Soul) 목록리스트는 아래와 같습니다───────────" << endl;
		RnbList();
	}

	else if (GenreName == "락" || GenreName == "록") {
		cout << "───────────락, 인디 (Rock, Indie) 목록리스트는 아래와 같습니다───────────" << endl;
		RockList();
	}
	else if (GenreName == "rok" || GenreName =="rock") {
		cout << "───────────락, 인디 (Rock, Indie) 목록리스트는 아래와 같습니다───────────" << endl;
		RockList();
	}
	else if (GenreName == "Rok" || GenreName == "Rock") {
		cout << "───────────락, 인디 (Rock, Indie) 목록리스트는 아래와 같습니다───────────" << endl;
		RockList();
	}
	else if (GenreName == "인디" || GenreName == "Indie") {
		cout << "───────────락, 인디 (Rock, Indie) 목록리스트는 아래와 같습니다───────────" << endl;
		RockList();
	}
	else if (GenreName == "indie"){
		cout << "───────────락, 인디 (Rock, Indie) 목록리스트는 아래와 같습니다───────────" << endl;
		RockList();
	}
	else if (GenreName == "0") {
		system("cls");
		info();
	}
	else {
		cout << "───────────해당하는 장르가 없습니다. 다시 원하시는 장르를 입력해주세요───────────" << endl;
		return(sGenre());
		
	}



}


