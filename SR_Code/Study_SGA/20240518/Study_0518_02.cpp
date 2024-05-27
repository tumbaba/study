#include <iostream>
#include <string>
using namespace std;

// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡063 ¹®ÀÚ¿­À» Á¤¼ö·Î º¯È¯(stoi) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
/*
int main() {

	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 ¹®ÀÚ¿­";
	
	int num1 = stoi(str1);
	int num2 = stoi(str2);
	int num3 = stoi(str3);


	// str1ÀÇ ¹®ÀÚ¿­·Î Á¤¼ö·Î º¯È¯ÇÏ¿© 10
	// str2ÀÇ ¹®ÀÚ¿­À» Á¤¼ö·Î º¯È¯ÇÏ¿© ¼Ò¼öÁ¡ ¹ö¸² 2
	// str3ÀÇ ¹®ÀÚ¿­À» Á¤¼ö·Î º¯È¯ÇÏ¿© 456
	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}
*/
// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡064 ¹®ÀÚ¿­À» ¼ýÀÚ·Î º¯È¯(stringstream) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
/*
#include <sstream>
int main() {
	stringstream ss;

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9";

	cout << "== string to double ==" << endl;
	while (!ss.eof())
	{
		ss >> number1;
		ss.ignore();
		
		cout << number1 << ", ";
	}

	ss.clear();
	ss.str("");
	ss << "1," << "2" << 3 << " " << 4;

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;
	while (!ss.eof())
	{
		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";
	}


	return 0;
}
*/
// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡065 ¹®ÀÚ¿­ Á¤·ÄÇÏ±â(sort) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
// string A = "vialeqwer"; ¼±¾ðÇÑ°Í¿¡ sort(A.begin(), A.end()); ¸¸µçÈÄ A°ªÀ» Ãâ·Â ÇÏ¸é vialeqwer ÀÌ°ÍÀÌ a,b,c... ¼ø¼­´ë·Î Á¤·ÄµÇ¾î Ãâ·ÂµÊ

// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡067 ¼ýÀÚ¸¦ ¹®ÀÚ¿­·Î º¯È¯ÇÏ±â(to_string) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
/*
int main(){

	int number = 10;
	double number2 = 67.8;

	string a = to_string(number);
	string b = to_string(number2);

	cout << "aÀÇ °ªÀº : " << a << endl;
	cout << "bÀÇ °ªÀº : " << b << endl;

	return 0;
}
*/

// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡069 Æ÷ÀÎÅÍ ÀÌÇØÇÏ±â(*) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
/*
int main() {

	int number1 = 10;
	int* pt1 = &number1;

	cout << "number1 : " << number1 << " (size : " << sizeof(number1) << ")" << endl;
	cout << "pointer1 : " << pt1 << " (size : " << sizeof(pt1) << ")" << endl;

	cout << "°ªÀº : " << *pt1 << endl;

	// int* ÀÚ·áÇü¿¡ Æ÷ÀÎÅÍÁÖ¼Ò°ªÀ¸·Î &number1ÀÇ ÁÖ¼Ò¸¦ °®°í¿À°Ú´Ù´Â °Í.. Ãâ·ÂÇÒ¶§ ±×¾È¿¡ ´ã±ä °ªÀ» ºÒ·¯¿Ã¶§´Â ¼±¾ðÇÑ pt1¾Õ¿¡ *¸¦ ºÙ¾î¼Å *pt1·Î ºÒ·Á¿À¸é ±× ÁÖ¼Ò¾È¿¡ ´Þ¸° °ªÀ» °®°í¿À°ÔµÈ´Ù.
	// &´Â ÁÖ¼Ò°ªÀ» ºÒ·¯¿Â´Ù´Â ÀÇ¹Ì

	return 0;
}
*/
// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡070 Æ÷ÀÎÅÍ º¯¼ö »ç¿ëÇÏ±â(*) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡
/*
#include <vector> // º¤ÅÍ»ç¿ë

int Pfunc(vector<string> *info) // intÇü ÇÔ¼ö (ÇÔ¼ö¾È¿¡´Â ¹éÅÍ ½ºÆ®¸µÀ» ÀÌ¿ëÇÑ´Ù´Â Æ÷ÀÎÅÍ info)
{
	if (info->empty() == true)    
		return 0;
	else
		return sizeof(info);

}

int main() {

	vector<string> message;
	message.push_back("°í·Á Àå±º");
	message.push_back("Ã´ÁØ°æ!");
	message.push_back("ÀýÄ£ ÀÌ¸§Àº");
	message.push_back("...¹«¾ùÀÏ±î");

	cout << "Æ÷ÀÎÅÍ ÀÎÀÚ Å©±â : " << Pfunc(&message) << endl;   
	cout << "¿ø·¡ º¯¼ö Å©±â : " << sizeof(message) << endl;


	return 0;
}
*/
// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡071 Æ÷ÀÎÅÍ ¹è¿­ »ç¿ëÇÏ±â(*) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡

/*
int main() {

	const int kSize = 3;

	int numbers[kSize] = { 10, 20, 30 };
	int* p1 = numbers;

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int* p2[kSize] = { &no1, &no2, &no3 }; // ¹è¿­¾È¿¡ ÀÌ¹Ì 0,1,2ÀÇ ÇØ´çÇÏ´Â ÁÖ¼Ò°ªÀ» ³Ö¾îµÐ »óÅÂ

	for (int i = 0; i < kSize; i++)
		cout << "P1[" << i << "] = " << *(p1 + i) << endl;

	for (int i = 0; i < kSize; i++)
		cout << "P2[" << i << "] = " << *p2[i] << endl; // *(p2 + i)·Î Ãâ·ÂÇÒ °æ¿ì ÁÖ¼Ò°¡ ³ª¿Â´Ù. ±× ÀÌÀ¯´Â p2¿¡¼­ ¹è¿­¾È¿¡ ÃÊ±âÈ­µÈ °ªµéÀ» ÀÌ¹Ì &·Î no1~3°ªÀ» ºÒ·¯¿Ô±â ¶§¹®ÀÌ´Ù. ±×·¡¼­ ±× ¾È¿¡ Ç¥½ÃµÈ °ªÀ» ³ªÅ¸³»·Á¸é 143¹øÀÇ ¼±¾ðÇÑ °ªÀ» ±×´ë·Î Àû¾î¾ß Ç¥½ÃµÇ´Â°ÍÀ» ¾Ë¼ö ÀÖ´Ù.


	return 0;
}
*/
// ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡ Æ÷ÀÎÅÍ ¹è¿­ ¿¬½À (*) ¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡

int main() {

	// ¹è¿­ÀüÃ¼ÀÇ ÁÖ¼Ò¸¦ °®À»¶§ »ç¿ëÇÏ´Â°ÍÀÌ ±¦Âú?
	int Num1[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* ptNum1 = Num1;

	for (int i = 0; i < 10; i++)
	{
		cout << *(ptNum1+i) << endl;
	}
	

	int child = 3;
	string Y1 = "¿¬¼º·Ï";
	string Y2 = "¿¬¼º¿í";
	string Y3 = "¿¬¼ºÇÏ";

	string* pyyy[3] = { &Y1, &Y2, &Y3 };

	cout << "¿¬À§ºÀ À±È£¼± ÀÚ³à¼ö´Â : " << to_string(child) << "¸í" << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << *pyyy[i] << "ÀÔ´Ï´Ù." << endl;
		
		cout << " *(pyyy + i)¸¦ »ç¿ëÇÒ °æ¿ì : " << *(pyyy + i) << " &·Î ÀÌ¹Ì 0, 1, 2 °ª °¢ÀÚ »ç¿ëÇßÀ¸¹Ç·Î ÀÌ·¸°Ô ÁÖ¼Ò°ªÀ» ³ªÅ¸³À´Ï´Ù." << endl;
	}


	return 0;
}