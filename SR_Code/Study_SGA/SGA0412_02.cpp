#include <stdio.h>


// �迭
int main() 
{
	/*
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	*/
	

	/*
	//��� �б� (���������� ���� const���)
	const float fcount = 3.141592f;
	const int count = 10;


	//�迭����
	int vector[3] = { 10, 10, 10 };
	
	float fvector[3] = { 10.0f, 10.0f, 20.0f };

	// ���ԵǾ��ִ� ���� ���� = num[0], num[1], num[2]
	int array[3][3] = { //[] 1���� �迭,[] 2���� �迭
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
	//�������ε� ��� ����            ---- ����;;;;;

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

	




	// -------------------------�迭 = ������Ÿ���� �������� ���������
	/* 
	��: 
	int num = 1
	int num2 =2
	���

	*/

	/*
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	int Arraynum[200];         // �迭���� ����

	int Array1[5] = { 0,0,0,0,0 };    // �ʱ�ȭ
	float fArray[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };    // ���� ��ŭ �뵿�� �ʱ�ȭ


	for (int i = 0; i < 200; i++)
	{

		Arraynum[i] = 0;              //�ʱ�ȭ
	}
	*/

	// ----- �׽�Ʈ ------
	// 5�� ���� �Է�
	// ����
	// �߰��� ���ڸ� �Է¹޾Ƽ� 5���� ���ڿ� ��� �ִ��� ����ϱ�

	
	

	int num[5];   // num[0] ~ num[4]
	int num1;
	int count = 0;
	
	
	printf("���� �ټ������� ��������.\n���� ���ڸ� ���� Enter\n");
		
	for (int i = 0; i < 5; i++)   // Ƚ������
	{
		scanf_s("%d", &num[i]);    // ����
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


