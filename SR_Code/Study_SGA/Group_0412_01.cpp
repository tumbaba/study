#include <stdio.h>

int main() {
	

	/*
	int score = 0;
	int score2 = 0;
	int score3 = 0;
	int score4 = 0;
	
	printf("4과목 점수 평균 성적\n수학, 과학, 영어, 체육 점수를 아래에 적으십시오.\n");   // 기본 첫문장
	scanf_s("%d%d%d%d", &score, &score2, &score3, &score4);

	int x = (score+score2+score3+score4);
	int y = x / 4;
	char z = printf("잘못입력하셨습니다.");
	int a = (100 >= y >= 90);
	int b = (90 > y >= 80);
	int c = (80 > y >= 60);
	int d = (60 > y >= 40);
	int f = (40 > y >= 0);


	switch (x){
		case 'a':
			printf("평균 점수 : %d점 = A", y);
			break;
		case 'b':
			printf("평균 점수 : %d점 = B", y);
			break;
		case 'c':
			printf("평균 점수 : %d점 = C", y);
			break;
		case 'd':
			printf("평균 점수 : %d점 = D", y);
			break;
		case 'f':
			printf("평균 점수 : %d점 = F", y);
			break;
	
	default:
		printf("%c", z);
		break;
	}
		
	*/

	// 문제 = 4과목의 평균수를 구하여 A,B,C,D,F 구분할것
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
		
	printf("4과목 점수 평균 성적\n수학, 과학, 영어, 체육 점수를 아래에 적으십시오.\n");   // 기본 첫문장
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	int x = ((a + b + c + d)/4);
	
	int y = x/10;

	switch (y) {
		case 10:
		case 9:
			printf("평균 점수 : %d점 = A", x);
			break;

		case 8:
			printf("평균 점수 : %d점 = B", x);
			break;
		case 7:
		case 6:
			printf("평균 점수 : %d점 = C", x);
			break;
		case 5:
		case 4:
			printf("평균 점수 : %d점 = D", x);
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("평균 점수 : %d점 = F", x);
		default:
			printf("올바른 숫자를 기입하지 못하였습니다.");
			break;
	}








	return 0;

}


