#include <stdio.h>

int main() {
	/*
	
	%d : ���� ��� (1, 2, 3, ..., 0, -1, -2, -3...)
	%f : �Ǽ� ��� (3.14, -2.0, ...)  ��: .2f = �Ҽ��� 2�ڸ���
	%g : �Ǽ� ��� (���� ���·ε� ��� = �� ���󵵵�) 
	%c : ���� ��� = ���ĺ�, ����, ��� ��ȣ ('a', 'b');
	%s : ���ڿ� ��� = �ȳ��ϼ��� (���ڰ� ���ŵǾ��ִ� ��) - �ѱ�����

	*/ 

	/* --------------------������ �Է� if�� -----------------------------------

	int a;   // ������ ���� �Է�
	int b = 1;   // ������ ���� ��
	int c;
	

	printf("���ϴ� �������� ����Դϱ�?\n");

	scanf_s("%d��", &a);


	if (a != 0) 
	{
		printf("%d ���� �Ʒ��� �����ϴ�.\n", a);
	}

	else 
	{
		printf("0�� ���ԵǾ��ִٸ� ������ �ǹ̰� �����Ƿ� �����ϰڽ��ϴ�!\n");
	}
	
		
	for (b=1; b <= 9; b++)
	{

	printf("%d X %d = %d\n", a, b, a*b);
	
	}
		
	return 0;
	-------------------------------------------------------------------------------
	*/

    // ������ = C���� .c�� �ڵ�����, .cpp�� c++�ڵ�����
    // ������ = Ctrl + F5 , run

    // Printf = ȭ�����
    // Scanf = �Է�

    // ��� = ����, �ݺ�, 

    // std::cout << "�ѱ��Է�\n";

    // 1����Ʈ = 8��Ʈ

    // int = 4����Ʈ = 32��Ʈ
    // unsigned int = ����� ��Ÿ�� (%u�� ���)
    /* ----------����------------
    unsigned int num = -100000;
    printf("%u\n", num);
    */

    // ��� ���� (����, ������ 4�ڸ� ������ Ȯ�� )
    /* ----------����------------
    printf("%-4d\n %d\n %4d\n", 10,11,12);
    */

    // printf("%x\n%x\n%d\n", 10,15,10);



//----------------------��Ģ���� -----------------------   
    /*
    int x = 0;
    int y = 0;
    int z = 0; // ���� ���� �� �ʱⰪ
    scanf("%d %d",&x , &y);
    */


    /*
    // ����
    printf("���ϱ�\n");
    z = x + y;
    printf("ù �Է¼��� + �ι�° �Է¼��� = %d\n", z);
    */


    /*
    // ����
    printf("����\n");
    z = x - y;
    printf("ù �Է¼��� - �ι�° �Է¼��� = %d\n", z);
    */

    /*
    // ���ϱ�
    printf("���ϱ�\n");
    z = x * y;
    printf("ù �Է¼��� X �ι�° �Է¼��� = %d\n", z);
    */

    /*
    // ������
    printf("������\n");
    z = x / y;
    printf("ù �Է¼��� / �ι�° �Է¼��� = %d\n", z);
    */

    /*
    // ������(���� �� ������)
    printf("������\n");
    z = x % y;
    printf("ù �Է¼��� % �ι�° �Է¼��� = %d\n", z);
    */




    //----------------------������ -----------------------  
    /*

    && || !

    */
    //----------------------���迬�� -----------------------  
    /*

    == > < >= <=

    */
    /*
        bool bResult = false;
        int x = 10;
        int y = 100;
        int result = 0;
        // �������� ���ù�
        //          false   ||  true
        // bResult = (10 >= 100) || (10 < 100);
    */

    //-------------if��---------------
    // --- if(x == 0 || y == 0) --- // ���� ���� ����

    /*
        scanf("%d %d", &x, &y);

        if( x > y ) // ���϶�
        {
            printf("���ϱ�");
            result = x + y;
        }
        else if (x == y)
        {
            printf("����");
            result = x + y;
        }

        else //  X < y
        {
            printf("����");
            result = x - y;
        }


        printf("%d", result);
    */


    bool bResult = false;
    int x = 2;  // �� ���� �Լ�  2~9
    int y = 9; // 1~9

    char op;

    int result = 0;
    int result1 = x % y;

    scanf_s("%d", &x);

    switch (x)
    {
    case 2:    case 3:    case 4:    case 5:    case 6:
    case 7:    case 8:    case 9:   case 15:
    {
        printf("%d ��\n", x);
        for (int i = 9; i >= 1; i--)
        {
            printf("%d * %d = %d\n", x, i, x * i);
        }
    }
    printf("������ ��¿Ϸ�.\b");
    }

    //����
    //resualt = 2 * y;
    /*
        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }
    break;
    default:
    {
        printf("2���� 9�ܱ����� �˴ϴ�.\n");
    }
    break;
    */




    /*
        case 3:
        {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
        }
        break;
    }

    if(x == 2)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }
    else if(x == 3)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 4)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 5)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 6)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 7)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 8)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    else if(x == 9)
    {
        printf("%d ��\n", x);

        //����
        //resualt = 2 * y;

        printf("%d * %d = %d\n", x, 1, x * 1);
        printf("%d * %d = %d\n", x, 2, x * 2);
        printf("%d * %d = %d\n", x, 3, x * 3);
        printf("%d * %d = %d\n", x, 4, x * 4);
        printf("%d * %d = %d\n", x, 5, x * 5);
        printf("%d * %d = %d\n", x, 6, x * 6);
        printf("%d * %d = %d\n", x, 7, x * 7);
        printf("%d * %d = %d\n", x, 8, x * 8);
        printf("%d * %d = %d\n", x, 9, x * 9);
    }

    printf("������ ��¿Ϸ�.\b");

    */










    /*
    switch(op)
    {
        case '+' :  {
            printf("���ϱ�\n");
                result = x + y;
        }
        case '-' :  {
            printf("����\n");
                result = x - y;
        }
        case '*' :  {
            printf("���ϱ�\n");
                result = x * y;
        }
        case '/' :  {
            printf("������\n");
                result = x / y;

        }
    }
    */







    //---- Switch �� ---- ������

    /*
    bool bResult = false;
        int x = 10;
        int y = 100;

        char op;

        int result = 0;
        int result1 = x % y;

        scanf("%d %s %d", &x, &op, &y);

        switch(op)
        {
            case '+': // ���ϱ�
            {   printf("���ϱ�\n");
                //����
                result = x + y;
            }
            break; // ����������

             case '-': // ����
            {   printf("����\n");
                //����
                result = x - y;
            }

            break; // ����������
             case '*': // ���ϱ�
            {   printf("���ϱ�\n");
                //����
                result = x * y;
            }

            break; // ����������

             case '/': // ������
            {   printf("������\n");
                //����
                result = x / y;

                int result2 = x % y;

                if(result2 != 0)
                {
                    printf("������\n");
                    printf("%d\n", result2);
                }

            }
            break; // ����������
            default:
            {
                printf("��Ģ�����ڰ� �ƴմϴ�");
            }
        }
        printf("%d", result);
        */


















return 0;










}

