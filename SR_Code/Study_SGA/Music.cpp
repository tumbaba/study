#include "Music.h"
#include "Music.h"


Music::Music()
{

}

Music::~Music()
{
}

string SingerName[36] = {
	SingerName[0] = "������ ",
	"������ ",
	SingerName[3] = "������ ",
	"�¿� ",
	"���ð� ",

	"��Ŵ ",
	"��ȿ�� ",
	"������ ",
	"�㰢 ",
	"���� ",

	"���� ",
	"���̳��͵�� ",
	"���巡�� ",
	"���� ",
	"���̷� ",

	"�������� ",
	"�巷ūŸ�̰� ",
	"����� ",
	"���̸յ��̴� ",
	"���� ",

	"���̾�Ƽ ",
	"������ ",
	"�ָ��� ",
	"�Ź� ",
	"�¾� ",

	"ũ���� ",
	"����� ",
	"���� ",
	"�� ",
	"���ȣ ",

	"������ ",
	"��Ȱ ",
	"10CM ",
	"��ī���� ",
	"���� ",

	"����� "
};

void Music::sMusicName()
{
	
}

void Music::sSingerName(string name)
{	
	
	Search_SingerName = name;

	SingerName[0] = "������ ";
	SingerName[1] = "������ ";
	SingerName[2] = "������ ";;
	SingerName[3] = "�¿� ";
	SingerName[4] = "���ð� ";

	SingerName[5] = "��Ŵ ";
	SingerName[6] = "��ȿ�� ";
	SingerName[7] = "������ ";
	SingerName[8] = "�㰢 ";
	SingerName[9] = "���� ";

	SingerName[10] = "���� ";
	SingerName[11] = "���̳��͵�� ";
	SingerName[12] = "���巡�� ";
	SingerName[13] = "���� ";
	SingerName[14] = "���̷� ";

	SingerName[15] = "�������� ";
	SingerName[16] = "�巷ūŸ�̰� ";
	SingerName[17] = "����� ";
	SingerName[18] = "���̸յ��̴� ";
	SingerName[19] = "���� ";

	SingerName[20] = "���̾�Ƽ ";
	SingerName[21] = "������ ";
	SingerName[22] = "�ָ��� ";
	SingerName[23] = "�Ź� ";
	SingerName[24] = "�¾� ";

	SingerName[25] = "ũ���� ";
	SingerName[26] = "����� ";
	SingerName[27] = "���� ";
	SingerName[28] = "�� ";
	SingerName[29] = "���ȣ ";

	SingerName[30] = "������ ";
	SingerName[31] = "��Ȱ ";
	SingerName[32] = "10CM ";
	SingerName[33] = "��ī���� ";
	SingerName[34] = "���� ";

	SingerName[35] = "����� ";
	


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
	
	Sing[0] = "������ - ����ϱ� ������";
	Sing[1] = "������ - �������� ��";
	Sing[2] = "������ - �״볻ǰ��";
	Sing[3] = "������ - ��ó�� ����ó��";
	Sing[4] = "������ - ����߾��";
	Sing[5] = "������ - Love wins all";
	Sing[6] = "������ - ������ �ɰ�(I stan U)";
	Sing[7] = "������ - ������";
	Sing[8] = "�¿� - ��";
	Sing[9] = "�¿� - ���(Four Seasons)";

	Sing[10] = "���ð� - ��ö󵵿츮";
	Sing[11] = "���ð� - ����";
	Sing[12] = "���ð� - ���� ������";
	Sing[13] = "��Ŵ - ���ݾ�";
	Sing[14] = "��Ŵ - �����ؿ�";
	Sing[15] = "��ȿ�� - �߻�ȭ";
	Sing[16] = "��ȿ�� - ���ǲ�";
	Sing[17] = "��ȿ�� - Goodbye";
	Sing[18] = "������ - �� ���";
	Sing[19] = "������ - �� ���� �׷���";

	Sing[20] = "�㰢 -	����� �ϱ�� �߳� ��";
	Sing[21] = "�㰢 -	����";
	Sing[22] = "���� -	Rain";
	Sing[23] = "���� -	�����̴�";
	Sing[24] = "���� -	�ϴ��� �޸���";
	Sing[25] = "���� -	SPOT!(feat.JENNIE)";
	Sing[26] = "���� -	����(Prod.ZICO) (Feat.ȣ�̵�)";
	Sing[27] = "���� - 	�ʴ� �� ���� ��";
	Sing[28] = "���̳��͵�� - Smoke (Prod. Dynamicduo, Padi)";
	Sing[29] = "���̳��͵�� - ���� ��(Guilty)";

	Sing[30] = "���巡�� - �ߵ��ϰ� (Crooked)";
	Sing[31] = "���巡�� - Heartbreaker";
	Sing[32] = "���� - 	�����(feat.������)";
	Sing[33] = "���� - ���� (feat. ������)";
	Sing[34] = "���� - 	������Ÿ��";
	Sing[35] = "���� - è�Ǿ�";
	Sing[36] = "���̷� - �ð��� �帥 �� (As Time Goes By)";
	Sing[37] = "���̷� - ���� �ູ";
	Sing[38] = "�������� - �� ���� �� ��� ���� �뷡(Feat.Colde)";
	Sing[39] = "�������� - Love Love Love(feat.���� Of Casker)";

	Sing[40] = "�巷ū Ÿ�̰� - �� �� ����";
	Sing[41] = "�巷ū Ÿ�̰� - ���� ������ �ƴ���?";
	Sing[42] = "�巷ū Ÿ�̰� - 	Good Life";
	Sing[43] = "����� - ����(JOAH)";
	Sing[44] = "����� - �翡 �־��ֱ�";
	Sing[45] = "����� - Love Is Ugly(Feat.ȭ��)";
	Sing[46] = "����� - DRIVE(Feat.GRAY)";
	Sing[47] = "���̸� ���̴� - 	���̸� ���̴�";
	Sing[48] = "���̸� ���̴� - �� ����(Comfortable)";
	Sing[49] = "���̸� ���̴� - ����� ��� �͵鿡��(with ELLE KOREA)";
	Sing[50] = "���� - �ٶ����";
	Sing[51] = "���� - 	���� �ð� ���� ��";
	Sing[52] = "���� - 	����� ���ڸ�";
	Sing[53] = "���� - �ͷ�";
	Sing[54] = "���̾�Ƽ(Zion.T) - ��ȭ�뱳";
	Sing[55] = "���̾�Ƽ(Zion.T) - ���� �Ծ��";
	Sing[56] = "���̾�Ƽ(Zion.T) - 	�׳�(Just)";
	Sing[57] = "���̾�Ƽ(Zion.T) - No Make Up";
	Sing[58] = "������ - �޿�";
	Sing[59] = "������ - ������� ���� ��ó(duet with �����)";

	Sing[60] = "������ - �����Ҳ���";
	Sing[61] = "������ - �Ͼ� �ܿ�";
	Sing[62] = "�ָ��� - õ������(Rave)";
	Sing[63] = "�ָ��� - �� ���� ���� ��� (R&B Ballad)";
	Sing[64] = "�Ź� - 	You Are My Everything";
	Sing[65] = "�Ź� - 	ģ���� �� �� �׷���";
	Sing[66] = "�Ź� - 	�״� ���ƿ���..";
	Sing[67] = "�Ź� - �����";
	Sing[68] = "�¾� - 	��, ��, ��";
	Sing[69] = "�¾� - 	���� ������";

	Sing[70] = "ũ����(Crush) - Beautiful";
	Sing[71] = "ũ����(Crush) - ��� ����";
	Sing[72] = "����� - �����";
	Sing[73] = "����� - ����ʹ�";
	Sing[74] = "����� - ����Ȱ���";
	Sing[75] = "���� (HYUKOH) - ��������";
	Sing[76] = "���� (HYUKOH) - �͸�����";
	Sing[77] = "���� (HYUKOH) - TOMBOY";
	Sing[78] = "��(NELL) - 	����� �ȴ� �ð�";
	Sing[79] = "��(NELL) - Stay";

	Sing[80] = "���ȣ - ������ ���";
	Sing[81] = "���ȣ - ���� ������ �ϴ� �����";
	Sing[82] = "���ȣ - ���������";
	Sing[83] = "������ - ����߳���";
	Sing[84] = "������ - ��� Two";
	Sing[85] = "������ - �ʸ� ������";
	Sing[86] = "������ - �������";
	Sing[87] = "��Ȱ - Lonely Night";
	Sing[88] = "��Ȱ - ������ ��";
	Sing[89] = "��Ȱ - Never Ending Story";

	Sing[90] = "10CM - �׶��̼�";
	Sing[91] = "10CM - ���� ����� �����";
	Sing[92] = "10CM - �� ������ ����";
	Sing[93] = "��ī���� - Pulse";
	Sing[94] = "��ī���� - �������ƿ� �״� (�츮 ���� ���Ǵ���)";
	Sing[95] = "��ī���� - �ſ�";
	Sing[96] = "���� - 	Monologue";
	Sing[97] = "���� - 	�����...��⸦ �����";
	Sing[98] = "����� - ����";
	Sing[99] = "����� - �ʸ� ����";
}

void Music::Name(string name)
{
	GenreName = name;
}

void Music::SingerSongList()
{
	cout << "\t\t�� �ڷΰ��� (Ű���� 0 �Է�)" << endl;
	cout << "\n���� �̸��� �˻��ϼ��� : ";

	
	//SingerName[36];
	cin >> Search_SingerName;

	if (Search_SingerName == "������")
	{
		cout << Search_SingerName << ": " << Sing[0] << ", " << SingerName[3] << ", " << Sing[2] << endl; // string ��µǴ� ������ �־ȳ�������?
	}
	else if (Search_SingerName == "0")
	{
		system("cls");
		info();
	}
	else {
	
		cout << "�����������������������ش��ϴ� ������ �����ϴ�. �ٽ� �̸��� �Է����ּ��䦡��������������������" << endl;
		return(SingerSongList());
	}
	
}

void Music::info()
{

	cout << "�����������������������������������Ͻô� ������ ������ �Է��ϼ��䦡������������������������������" << endl;
	cout << "\t\t\t1. �帣�� �뷡" << endl;
	cout << "\t\t\t2. ���� �뷡" << endl;
	cout << "\t\t\t3. ������ �뷡" << endl;
	cout << "\t\t\t4. ��ü �뷡" << endl;


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
		cout << "�߸� �Է��ϼ����� �ٽ� �Է� ��Ź�帳�ϴ�." << endl;
		return info();
	}
}




void Music::sGenre()
{
	
	cout << "�����������������������������������Ͻô� �帣�� �Է��ϼ��䦡������������������������������" << endl;
	cout << "�߶��" << "\t\t" << "�� & ����" << "\t" << "�˾غ�ҿ�" << "\t" << "�� or �ε�" << "\t" << endl;
	cout << "\n\n\t\t�� �ڷΰ��� (Ű���� 0 �Է�)" << endl;
	
	//string Name;
	cout << "\n�帣: ";
	cin >> GenreName;
	if (GenreName == "�߶��" || GenreName == "Ballade") {
		cout << "�����������������������߶�� (Ballade) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		BalladeList();
	}
	else if (GenreName == "Balade" || GenreName == "balade") {
		cout << "�����������������������߶�� (Ballade) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		BalladeList();
	}
	else if (GenreName == "ballade") {
		cout << "�����������������������߶�� (Ballade) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		BalladeList();
	}
	else if (GenreName == "��" || GenreName == "�N"){
		cout << "������������������������ & ���� (Rap & Hiphop) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		HiphopList();
	}
	else if (GenreName == "Rap" || GenreName == "rap"){
		cout << "������������������������ & ���� (Rap & Hiphop) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		HiphopList();
	}
	else if (GenreName == "����" || GenreName == "Hiphop") {
		cout << "������������������������ & ���� (Rap & Hiphop) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		HiphopList();
	}
	else if (GenreName == "hiphop") {
		cout << "������������������������ & ���� (Rap & Hiphop) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		HiphopList();
	}

	else if (GenreName == "�˾غ�" || GenreName == "�˾غ�ҿ�") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "rnb" || GenreName == "rnbsoul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "RnB" || GenreName == "RnBSoul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "R&B" || GenreName == "R&BSoul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "r&b" || GenreName== "r&bsoul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "r&b soul" || GenreName == "R&B soul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "�ҿ�" || GenreName == "soul") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}
	else if (GenreName == "Soul" || GenreName == "�˾غ� �ҿ�") {
		cout << "�����������������������˾غ� �ҿ� (R&B Soul) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RnbList();
	}

	else if (GenreName == "��" || GenreName == "��") {
		cout << "������������������������, �ε� (Rock, Indie) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RockList();
	}
	else if (GenreName == "rok" || GenreName =="rock") {
		cout << "������������������������, �ε� (Rock, Indie) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RockList();
	}
	else if (GenreName == "Rok" || GenreName == "Rock") {
		cout << "������������������������, �ε� (Rock, Indie) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RockList();
	}
	else if (GenreName == "�ε�" || GenreName == "Indie") {
		cout << "������������������������, �ε� (Rock, Indie) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RockList();
	}
	else if (GenreName == "indie"){
		cout << "������������������������, �ε� (Rock, Indie) ��ϸ���Ʈ�� �Ʒ��� �����ϴ٦���������������������" << endl;
		RockList();
	}
	else if (GenreName == "0") {
		system("cls");
		info();
	}
	else {
		cout << "�����������������������ش��ϴ� �帣�� �����ϴ�. �ٽ� ���Ͻô� �帣�� �Է����ּ��䦡��������������������" << endl;
		return(sGenre());
		
	}



}


