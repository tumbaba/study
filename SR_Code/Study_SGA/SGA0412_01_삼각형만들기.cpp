#include <stdio.h>

int main() {

	
	/*
	get�Լ� put�Լ� : getchar, putchar
	getchar �Լ��� ? = ��) <stdio.h> <isostream> ��� ���� (�ȿ� ���ϳ�������)
	get�Լ� output�Ǵ� �� : int : int getchar


	�ƽ�Ű�ڵ� = ����, ����� ���ڵ� 0~127����
	
	*/

	//--------------------------����--------------------------

/*
	int num;

	num = getchar(); //getchar �Լ��� �Ѱ����� �޾Ƶ��ϼ� ����

	if (num == 112) // �ҹ��� p�� ��������
		{
		printf("Ű���� p Ű�� �Է��Ͽ����ϴ�.", num);
		}
	else 
		{
		printf("%d", num);
		}


	switch (num){
		case 112:
		{
			printf("Ű���� p Ű�� �Է��Ͽ����ϴ�.", num);
		}
		break;
		default:{
			printf("%d", num);
		}
		break;
	}
*/

/*
putchar = ���ڸ� �Է½� �׿� �ش��ϴ� 
*/

/*
	int num;

	num = getchar(); //getchar �Լ��� �Ѱ����� �޾Ƶ��ϼ� ����

	if (num == 'z') // p
	{
		printf("Ű���� z Ű�� �Է��Ͽ����ϴ�.");
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
			printf("Ű���� p Ű�� �Է��Ͽ����ϴ�.");
		}
		break;

		case 'z':
		{
			printf("Ű���� z Ű�� �Է��Ͽ����ϴ�.");
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

	------------------------ for�� ��� = ��ǥ��縸��� -------------------------

*/

	int num = 5;
	int num1 = 5;
	for (int i = 0; i < num; i++)			// = �� ��ǥ
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
	printf("***********\n");                // = �߰����� ��ǥ
	for (int i = 0; i < num1; i++)			// = �Ʒ� ��ǥ
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