#include <iostream>
// c++
using namespace std;
// std:: 대신 사용가능
void title()   // 함수
{
	cout << "┌───────────────────────────────────┐\n";
	cout << "│            성 적 관 리            │\n";
	cout << "│            1. 성적입력            │\n";
	cout << "│            2. 평균점수            │\n";
	cout << "└───────────────────────────────────┘\n";
}

// 반복하여 만드는 함수
// 이름, 국어, 영어, 수학, 과학   (순서를 정해놓고 시작)
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



int main()
{
	// 변수 선언 및 초기화
	// int num = 10;

	// 초기화

	// 로직

	// UI

	// 입력부분 등 구분을 할것



	

	// printf("Hello world!");

	// std::cout << "hello world" << "IIII" << num << std::endl ;

	

	// scanf_s("%d", &num);

	/*
	std::cout << "hello world\n";

	std::cout << "num = " << num << std::endl;

	std::cin >> num;

	system("cls");

	std::cout << "num = " << num << std::endl;
	*/


	// 명령 프롬프트에서 사용한것을 사용할 수 있다 
	// 예) cls로 하면 클리어되는것 처럼 ""안에 cls 사용하면 지워짐
	// system("");
	// 게임 로직할 때 화면이 갱신되고 이동되고할때 주로 필요할 수 있다. (전체 화면을 지웠다가 그렸다가할때 / 다른 메뉴?)


/*
	// 변수선언
	int screen_select = 0;
	int a[4];
		
	// 로직
	while (true) 
	{
		system("cls");  // 화면 초기화
		switch (screen_select)
		{
		case 0:          //타이틀 화면
		{
			title();     // 위 함수
		}
		break;
		case 1:			//성적 입력화면
		{
			cout << "──────────────────────────────────── \n";
			cout << "국어 영어 수학 체육 점수를 입력하세요. \n";
			cout << "──────────────────────────────────── \n";
			cin >> a[0] >> a[1]>> a[2]>> a[3];
			cout << "\n국어 : " << a[0] << "\n영어 : " << a[1] << "\n수학 : " << a[2] << "\n체육 : " << a[3] << endl;
			cout << "\n\n합계는 '2'번을 누르세요\n";
		}
		break;
		
		case 2:			//성적 입력
		{	
			if (a[0] + a[1] + a[2] + a[3] > 350) 
			{
				if (a[0] + a[1] + a[2] + a[3] == 400) 
				{
					cout << "------------축하합니다! 만점 !!! ----------\n";
					cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
				}
				else 
				{
					cout << "------------점수가 상당히 높으시군요----------\n";
					cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
				}
			}
			else
			{
				if (a[0] + a[1] + a[2] + a[3] >= 300)
				
				{
					cout << "------------높으점수이시네요! 좀더 노력하시면 350점 이상!----------\n";
					cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
				
				}
				else
				{
					if (a[0] + a[1] + a[2] + a[3] >= 200)
					{
						cout << "------------거의 중간점수이시네요! 300점을 넘읍시다!----------\n";
						cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
					}
					else
					{
						if (a[0] + a[1] + a[2] + a[3] >= 100)
						{
							cout << "--------------더 노력하셔서 반 이상점수는 가기를..--------------\n";
							cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
						}
						else
						{
							cout << "--------음.....많이 노력하셔야할것 같아요 ㅠㅠ---------\n";
							cout << "합계 : " << a[0] + a[1] + a[2] + a[3] << " 점 입니다." << endl;
						}
					}
				}
			}
		}
		break;

		}
		cin >> screen_select;
	}
	

	// cout처럼 공통된것을 나열해서 쓰지 않도록 사용하는 것이 "함수 = function"   예 ) void


*/




	int screen_select = 0;
	int sum[2] = { 0, };


	// 로직
	while (true)
	{
		system("cls");  // 화면 초기화
		switch (screen_select)
		{
		case 0:          //타이틀 화면
		{
			title();     // 위 함수
		}
		break;
		case 1:			
		{
			cout << "──────────────────────────────────── \n";
			cout << "=== 이름 국어 영어 수학 과학 합계 === \n";
			sum[0] = Student("홍길동", 10, 20, 30, 40);
			sum[1] = Student("연성록", 50, 70, 75, 80);

			cout << sum[0] << "\n";
			cout << sum[1] << "\n";
			cout << "합계 = " << sum[0]+sum[1] << "\n";

		}
		break;

		case 2:			
		{

		}
		break;

		}
		cin >> screen_select;
	}




	








	return 0;
}
