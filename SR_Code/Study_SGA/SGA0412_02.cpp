#include <stdio.h>


// 배열
int main() 
{
	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	*/
	

	/*
	//상수 읽기 (고정값으로 쓸때 const사용)
	const float fcount = 3.141592f;
	const int count = 10;


	//배열선언
	int vector[3] = { 10, 10, 10 };
	
	float fvector[3] = { 10.0f, 10.0f, 20.0f };

	// 포함되어있는 갯수 숫자 = num[0], num[1], num[2]
	int array[3][3] = { //[] 1차원 배열,[] 2차원 배열
		{10, 10, 10},
		{20, 20, 20},
		{30, 30, 30},
	};
	*/
	
	
	/*
	num[0] = num1;
	num[1] = num2;
	num[2] = num3;
	*/
	
	
	/*
	//포문으로도 사용 가능            ---- 실패;;;;;

	for (int i = 0; i < 3; i++)
	{
		vector[i] = 10 * i;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			array[i][j] = i * j;
		}
		printf("%d %d %d\n", array[i][0], array[i][1], array[i][2])
	}
	*/

	




	// -------------------------배열 = 동일한타입이 여러가지 있을때사용
	/* 
	예: 
	int num = 1
	int num2 =2
	등등

	*/

	/*
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	int Arraynum[200];         // 배열갯수 선언

	int Array1[5] = { 0,0,0,0,0 };    // 초기화
	float fArray[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };    // 갯수 만큼 노동식 초기화


	for (int i = 0; i < 200; i++)
	{

		Arraynum[i] = 0;              //초기화
	}
	*/

	// ----- 테스트 ------
	// 5개 숫자 입력
	// 저장
	// 추가로 숫자를 입력받아서 5개의 숫자에 몇개가 있는지 출력하기

	
	

	int num[5];   // num[0] ~ num[4]
	int num1;
	int count = 0;
	
	
	printf("숫자 다섯가지를 적으세요.\n각각 숫자를 적고 Enter\n");
		
	for (int i = 0; i < 5; i++)   // 횟수지정
	{
		scanf_s("%d", &num[i]);    // 지정
	}

	scanf_s("%d", &num1);         // 

	for (int i = 0; i < 5; i++)
	{
		if (num[i] == num1) 
		{
			count++;
		}
		
	}
	printf("%d", count);



	return 0;
}


