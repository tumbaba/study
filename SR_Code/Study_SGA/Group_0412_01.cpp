#include <stdio.h>

int main() {
	

	/*
	int score = 0;
	int score2 = 0;
	int score3 = 0;
	int score4 = 0;
	
	printf("4���� ���� ��� ����\n����, ����, ����, ü�� ������ �Ʒ��� �����ʽÿ�.\n");   // �⺻ ù����
	scanf_s("%d%d%d%d", &score, &score2, &score3, &score4);

	int x = (score+score2+score3+score4);
	int y = x / 4;
	char z = printf("�߸��Է��ϼ̽��ϴ�.");
	int a = (100 >= y >= 90);
	int b = (90 > y >= 80);
	int c = (80 > y >= 60);
	int d = (60 > y >= 40);
	int f = (40 > y >= 0);


	switch (x){
		case 'a':
			printf("��� ���� : %d�� = A", y);
			break;
		case 'b':
			printf("��� ���� : %d�� = B", y);
			break;
		case 'c':
			printf("��� ���� : %d�� = C", y);
			break;
		case 'd':
			printf("��� ���� : %d�� = D", y);
			break;
		case 'f':
			printf("��� ���� : %d�� = F", y);
			break;
	
	default:
		printf("%c", z);
		break;
	}
		
	*/

	// ���� = 4������ ��ռ��� ���Ͽ� A,B,C,D,F �����Ұ�
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
		
	printf("4���� ���� ��� ����\n����, ����, ����, ü�� ������ �Ʒ��� �����ʽÿ�.\n");   // �⺻ ù����
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	int x = ((a + b + c + d)/4);
	
	int y = x/10;

	switch (y) {
		case 10:
		case 9:
			printf("��� ���� : %d�� = A", x);
			break;

		case 8:
			printf("��� ���� : %d�� = B", x);
			break;
		case 7:
		case 6:
			printf("��� ���� : %d�� = C", x);
			break;
		case 5:
		case 4:
			printf("��� ���� : %d�� = D", x);
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			printf("��� ���� : %d�� = F", x);
		default:
			printf("�ùٸ� ���ڸ� �������� ���Ͽ����ϴ�.");
			break;
	}








	return 0;

}


