// extern int num;      // extern   << 다른곳에서 선언도었던 것을 인식하긴 함
// 파일을 함수, 헤더파일을 생성해서 사용할수 있도록 구성하여 파일을 만들어볼것

#include "Base.h"

// -----------------------------------------c/c++프로그램 개인 공부사이트 = [강좌]soen.kr
/*

------------------------함수------------------------
함수를 만든것을 메인에서 호출하고 사용하도록 구성하는 것이 수월   (github에 올라온 소스들을 보고 분석해보는 것도 팁)
구조적 프로그래밍 = structured programming = 큰 프로그램 하나를 여러개의 함수로 분할하여 구현
함수에 입력하는 것 = 매개변수(parameter) 또는 전달인자(인수, argument)라고 함
함수가 돌려주는 값을 반환값 또는 리턴값 = return or value 라고 함

입력 - 매개변수(parameter), agument
출력 - 반환값(return value), 리턴값, 함수가 돌려주는 결과값

void (매개변수 자리 c++에서는 일반적으로 생략)
리턴값이 없으면 리턴형 쓰는자리에 'void add ()'
매개변수가 없으면 매개변수 쓰는자리에 'add (void)'

----------- 함수를 처음 만들때 필요한것 ----
함수정의
----1. 함수 만들기                                          예 : void display(void)
----2. 이름, 매개변수, 리턴형, 기능								{ printf("안녕"); }
함수호출
----1. 함수 사용하기										  예 : display();
----2. 이름, 매개변수
함수선언													  예 : void display(void);
----1. 함수의 사용법
----2. 이름, 매개변수, 리턴형

*/



/*     -------------------- 함수를 주제를 만들어서 Main에 사용할 수 있도록 정리해볼 것 -----------------------------------------------
int Student(string stuName, int v1, int v2, int v3, int v4)  //학생의 이름점수 합계
{
	//변수 선언
	int sum = 0;
	std::string name;  // c언어에서는 char를 이용해서 한 글자를 사용하지만 string은 이름을 배열해서 저장해준다.
	int score[4] = { 0, }; // 4개 다 초기화됨

	//초기값
	name = stuName;
	score[0] = v1;		// 국어
	score[1] = v2;		// 영어
	score[2] = v3;		// 수학
	score[3] = v4;		// 과학

	sum = score[0] + score[1] + score[2] + score[3];

	cout << name << "\t" << score[0] << "\t" << score[1] << "\t" << score[2] << "\t" << score[3] << "\t" << sum << "\n";

	return sum;
}
*/

/*    -------------------------enum을 사용하여 열거형을 switch문에 사용해볼것---------------------------------------------------------

enum SCENE       // 열거형 enum (보통 대문자로 쓸것)
{
	// SUN, MON, TUE, WED, THU, FRI, SAT     // 배열처럼 0번부터 시작 


	TITLE_SCENE = 0,      // 원하는 설정 씬들을 분리하여 설정할 수 있음
	MAIN_SCENE,
	OPTION_SCENE,
	BATTLE_SCENE,
	SCENE_MAX    // 마지막씬 MAX을 사용하는 팁


};                    // Switch 문에 case 대신 사용이 가능
*/


#include "IntroTitle.h"




int main()
{
	int screen_select = 0;
	int sum[2] = { 0, };
	
	while (true)
	{
		system("cls");  // 화면 초기화
		switch (screen_select)
		{
		case 0:          //타이틀 화면
		{
			string intro;
		}
		break;
		case 1:
		{
			cout << "──────────────────────────────────── \n";
			cout << "=== 이름 국어 영어 수학 과학 합계 === \n";
			cout << sum[0] << "\n";
			cout << sum[1] << "\n";
			cout << "합계 = " << sum[0] + sum[1] << "\n";

		}
		break;

		case 2:
		{

		}
		break;

		}
		cin >> screen_select;
	}



	cout << "안녕하세요" << endl;

	
	
	
	return 0;

}


