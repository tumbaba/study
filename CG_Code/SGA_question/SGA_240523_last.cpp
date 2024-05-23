#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <ctime>
//#include <random>
// 매번 랜덤을 적긴했지만 정작 램덤 코드는 c타임에 있다?

using namespace std;

#define ABC_MAX 26 //알파벳 갯수

// 두개의 문자열을 섞기위한 함수 밑에 구현후 선언
string MakeName(const set<char>& abc, const set<char>& ABC, int length);


int main()
{
	srand(time(NULL));


	set<char>  abc, ABC; // A는 소문자문자열 a~z/ B는 대문자 문자열 A~Z

	for (int i = 0; i < ABC_MAX; i++)
	{
		abc.insert(i + 97); // 아스키코드로 char형의 소문자는 97부터 122까지 이므로 i = 0 + 97 부터 더함
		ABC.insert(i + 65); // 같은 방식으로 대문자도 함
	}// 대문자와 소문자의 문자 집합(배열) 만들기

	int length1 = rand() % 10 + 6; 
    int length2 = rand() % 10 + 6;
	// 0~10의 램덤한 값을 길이에 입렵하는 함수지만
	// 5 를 더해서 5~15 의 5개~ 15개의 램덤한 숫자를 입력해
	// 5~15개의 문자열을 램덤하게 만들고자함



    // 랜덤 문자열 생성
    string A = MakeName(abc, ABC, length1);
    string B = MakeName(abc, ABC, length2);

    // 생성된 문자열 출력
    cout << "비교를 위한 문자열 출력" << endl << endl;
    cout << "A 문자열 : " << A << endl;
    cout << "B 문자열 : " << B << endl << endl;

    // 중복 문자 제거
    set<char> setA(A.begin(), A.end()); // 문자열 A
    set<char> setB(B.begin(), B.end()); // 문자열 B
    set<char> removedChars; // 삭제된 문자를 저장할거

    for (char ch : setB) 
    {
        if (setA.erase(ch) > 0) 
        {
            removedChars.insert(ch);
        }
        //setA.erase(ch);
        // 삭제만 하는것이었다면 위 함수만으로 되었지만
        // 삭제한 알파벳까지 출력하려고 하는것이므로
        // 이를 저장할 이유가 생김
        // 근데 저런식으로 조건문안에 식을 넣는것으로도 정삭작동된다고함
        // 검색해보니
        // setA.erase(ch) > 0는 ch가 setA에 존재하여 삭제된 경우 true를 반환해서 가능하다고함
    }
    // B의 사이즈만큼 반복하면서
    // B의 문자열과 같은 인수가 있다면 제거함
    // 그리고 그 값을 삭제된 문자를 저장할 새로운 함수에 저장

    // 결과 출력
    cout << "중복된 알파벳이 제거된 A의 값 : ";
    for (char ch : setA)
    {
        cout << ch;
    }
    cout << endl;

    // 삭제된 문자 출력
    cout << "중복되서 삭제된 알파벳 : ";
    for (char ch : removedChars)
    {
        cout << ch;
    }
    cout << endl;
    

	return 0;
}



// 구현부
string MakeName(const set<char>& abc, const set<char>& ABC, int length)
{
    vector<char> abcd(abc.begin(), abc.end());
    vector<char> ABCD(ABC.begin(), ABC.end());
    string result;

    for (int i = 0; i < length; ++i)
    {
        if (rand() % 2 == 0)
        {
            // 소문자 선택
            result += abcd[rand() % abcd.size()];
        }
        else
        {
            // 대문자 선택      
            result += ABCD[rand() % ABCD.size()];
        }
    }

    return result;
}