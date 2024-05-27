#include <stdio.h>

int main()

{

// 2. 소수 판별 프로그램 만들기 = 	1부터 시작해서, 20개의 소수를 뽑아 배열에 넣고 출력하자.

/*
float a[20];

int i = 0;

float b = 1;
float c = 0.33;

for (i = 0; i < 20; i++) 
	{
		b = (i/c)+1;
		

		printf("a[%d] = %.2f\n", i, b);
	
	}
*/


// 3. (심화) 두 수를 입력하면, 두 수의 약수 목록을 출력해주고, 최대공약수를 찾아주는 프로그램 만들기


	int A;
	int B;
	int i;
	int j;
	printf("두가지 숫자를 입력하세요!\n");

	scanf_s("%d %d", &A, &B);

	// 입력한 수의 약수목록
	//  a/a 입력한 수 나누기 입력수 = 1, 입력한수(a) = 약수(a), 그리고... 어떻게 처리할까...

	int divA = A / A;
	int divB = B / B;
	int mulA = divA * A;
	int mulB = divB * B;
	
	for (i = 1; i <= A; i = i + 1) 
	{
	
	}


	printf("입력하신 수 두가지의 약수는 = %d, %d와 %d, %d 입니다.\n", divA, mulA, divB, mulB);






return 0;
}
