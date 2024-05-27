#include <stdio.h>

int main() {

	
	/*
	get함수 put함수 : getchar, putchar
	getchar 함수란 ? = 예) <stdio.h> <isostream> 헤더 파일 (안에 파일내용있음)
	get함수 output되는 것 : int : int getchar


	아스키코드 = 영어, 영어외 숫자들 0~127가지
	
	*/

	//--------------------------예시--------------------------

/*
	int num;

	num = getchar(); //getchar 함수가 한가지를 받아들일수 있음

	if (num == 112) // 소문자 p를 눌렀을때
		{
		printf("키보드 p 키를 입력하였습니다.", num);
		}
	else 
		{
		printf("%d", num);
		}


	switch (num){
		case 112:
		{
			printf("키보드 p 키를 입력하였습니다.", num);
		}
		break;
		default:{
			printf("%d", num);
		}
		break;
	}
*/

/*
putchar = 숫자를 입력시 그에 해당하는 
*/

/*
	int num;

	num = getchar(); //getchar 함수가 한가지를 받아들일수 있음

	if (num == 'z') // p
	{
		printf("키보드 z 키를 입력하였습니다.");
	}
	else
	{
		printf("\n%d", num);
	}
*/

/*
	int num = 0;

	num = getchar();

	switch (num) 
	{
		case 'p':
		{
			printf("키보드 p 키를 입력하였습니다.");
		}
		break;

		case 'z':
		{
			printf("키보드 z 키를 입력하였습니다.");
		}
		break;

		default: 
		{
			printf("%d", num);
		}
		break;
	}
*/


/*

	------------------------ for문 사용 = 별표모양만들기 -------------------------

*/

	int num = 5;
	int num1 = 5;
	for (int i = 0; i < num; i++)			// = 위 별표
	{
		for (int j = i; j < num; j++)       
			{
				printf(" ");
			}
		for (int j = 0; j < i + 1; j++)
			{
				printf("*");
			}
		for (int y = 0; y < i; y++)
			{
				printf("*");
			}
		printf("\n");
	}
	printf("***********\n");                // = 중간라인 별표
	for (int i = 0; i < num1; i++)			// = 아래 별표
	{	
		for (int j = 0; j < i+1; j++)
			{
			printf(" ");
			}
		for (int j = i; j < num1; j++)
			{
			printf("*");
			}
		for (int y = i+1; y < num1; y++)
			{
			printf("*");
			}	
		printf("\n");
	}
	
	return 0;
}