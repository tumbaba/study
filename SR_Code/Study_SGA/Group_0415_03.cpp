#include <stdio.h>

int main()

{

// 2. �Ҽ� �Ǻ� ���α׷� ����� = 	1���� �����ؼ�, 20���� �Ҽ��� �̾� �迭�� �ְ� �������.

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


// 3. (��ȭ) �� ���� �Է��ϸ�, �� ���� ��� ����� ������ְ�, �ִ������� ã���ִ� ���α׷� �����


	int A;
	int B;
	int i;
	int j;
	printf("�ΰ��� ���ڸ� �Է��ϼ���!\n");

	scanf_s("%d %d", &A, &B);

	// �Է��� ���� ������
	//  a/a �Է��� �� ������ �Է¼� = 1, �Է��Ѽ�(a) = ���(a), �׸���... ��� ó���ұ�...

	int divA = A / A;
	int divB = B / B;
	int mulA = divA * A;
	int mulB = divB * B;
	
	for (i = 1; i <= A; i = i + 1) 
	{
	
	}


	printf("�Է��Ͻ� �� �ΰ����� ����� = %d, %d�� %d, %d �Դϴ�.\n", divA, mulA, divB, mulB);






return 0;
}
