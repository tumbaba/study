#include <stdio.h>
#include <stdbool.h>

/* C��� ����
������ : ������
�ۼ��� : 2024.04.09
������ �������� �����ϱ����� �ۼ� ��������
*/

int main() {

    /*
     \n = �ٹٲ�
     %d = ����(����)
     %S = ���ڰ���

     printf("%d\n", 1235);
     printf("%s\n", "�޷�");
     printf("%s  \n  %s\n", "�޷�", "�ٺ�");

    */





    /*

    %d ���� = ����  -2,147,483,648 ~ 2,147,483,647 �ڸ��� ���� ���� = int

    1��Ʈ
    2^8 (2�� 8��)= 256���� ���� = 1����Ʈ
    = -127 - +127


    int = 2^32 = -2,147,483,648 ~ 2,147,483,647
    float ���� = �Ǽ� (�Ҽ���)
    String, char = ����
    Wstring = �ѱ������� ������ ���
    �������� �տ��� ���ڳ�ġ����
    */


    //unsigned int unumber = 26000000000;  //����ʸ��ʿ��Ҷ� ��� 0���� ���� ���� ���ʿ�
   /* unsigned int unumber = 1544785990;
    printf("%lu\n", unumber);

    long int unumber1 = 26000000000;
    printf("%ld\n", unumber1);

   */



   // abs = ���밪 �Լ�


    /* --------- ��Ģ���� ----------
     + : ���ϱ�
     - : ����
     * : ����
     / : ������
     % : ������
    */

    /*
    int sum = number + number1;
    int mulsum = number * number1;
    int subsum = number - number1;
    int divsum = number / number1;
    int divsum1 = number % number1; //������ ���ϴ� ������
    */



    /*

     //-------����������----------
     +=
     /+
     /=
     -=
     %=

     */


     // int sum = number + number1;
     // number = number + number1;
     // number %= number1; 

     // ++ => num + 1 , -- 
     // num++; num--;


     //  printf("%d\n", number);



     /*
     printf("%d\n", number);
     printf("%d\n", number1);

     printf("------������ ��Ģ����-----\n");

     printf("---- ���� ----\n");
     printf("%d\n", sum);
     printf("%d + %d = %d\n", number, number1, sum);

     printf("---- ���� ----\n");
     printf("%d - %d = %d\n", number, number1, subsum);

     printf("---- ���� ----\n");
     printf("%d x %d = %d\n", number, number1, mulsum);

     printf("---- ������ ��----\n");
     printf("%d / %d = %d\n", number, number1, divsum);

     printf("---- ������ ������ ���----\n");
     printf("%d / %d = %d\n", number, number1, divsum1);


     printf("-----------------------------\n");







 //------------------�Ǽ�-------------------------


     float fnumber = 500.0f;
     float fnumber1 = 30.0f;

     float fsum = fnumber + fnumber1;
     float fmulsum = fnumber * fnumber1;
     float fsubsum = fnumber - fnumber1;
     float fdivsum = fnumber / fnumber1;

     printf("------�Ǽ��� ��Ģ����-----\n");

     printf("---- ���� ----\n");
     printf("%.1f + %.1f = %.1f\n", fnumber, fnumber1, fsum);

     printf("---- ���� ----\n");
     printf("%.1f - %.1f = %.1f\n", fnumber, fnumber1, fsubsum);

     printf("---- ���� ----\n");
     printf("%.1f x %.1f = %.1f\n", fnumber, fnumber1, fmulsum);

     printf("---- ������ ----\n");
     printf("%.1f / %.1f = %.1f\n", fnumber, fnumber1, fdivsum);

     printf("-----------------------------\n");


      */




      // ���ǹ� : if()

      // �ݺ��� 
      // for(���۰�, ����, ����)
      // while()
      // swich

    /*
    
    int number = 500;

    bool bnum = true;
    int idiv = number % 3;
    int zero = 10;

    */

    /*
    ------------�񱳹�(�񱳿�����)-------------
     == A�� B�� ����
     != A�� B�� �ٸ���
     < A�� B���� �۴�
     > A�� B���� ũ��
     <= A�� B���� �۰ų� ����
     >= A�� B���� ũ�ų� ����

     �𸣰ڴ� �׸� : <== , >== , !=

    /*






    /* if(idiv == zero)



    { //���϶�
        printf("�������� 0�Դϴ�.");
    }
    else
    { // �����϶�
        printf("�������� 0�� �ƴմϴ�.");
    }



    //--------�ݺ���----------
    for(int i =0; i < 5; i++ )
    {
        printf(" i= %d\n ", i);
    }
    */


    // int i = 0;
    // ------------------------�� ������----------------------------------
    // And = &&   A and B�� ture�̸� true (�� AND)
    // OR = ||    A or B ���� �ϳ��� true�̸� true (�� or)
    // NOT = !    ������ A�� true�̸� false, A�� false�̸� true(�� NOT)

    // �����
    // And    true  && true  => true
    //        true  || false => true
    //        false || false => false
    //or
    //nor

/*
    �ݺ��� loop
    1. for             ==    Ƚ���� ��Ȯ�� �˶� ���̻��          A ����� �ʱⰪ,  B ���������, C��������(��������), D �ݺ����� ������ >> ���
    2. while           ==    Ƚ���� ��Ȯ�� �������Ҷ� �ַ� ���   ��������, �����߿�
    3. do while        ==





*/


/*
    while (i < 5)
    {

        /*if(i<=2)
        {
            printf(" ������ i= %d\n ", i);
            break;

        }
        
        switch (1)
        {
        case 0:
        {
            printf("i=0�Դϴ�.\n");
        }
        break;
        case 1:
        case 2:
        {
            printf("i=1 �Ǵ� 2�Դϴ�.\n");
        }
        break;
        default:
        {
            printf("defalut �Դϴ�.\n");
        }
        break;


        }
        i++;

        // printf(" i= %d\n ", i);
    }
*/
//----------------------����-------------------------------------------------------

    int ������ = 9;    // ������ 2�ܺ��� 9�ܱ��� ����

    printf("�������� %d ���� �Ʒ��� �����ϴ�\n", ������);

    for (int A = 1; A <= 9; A++) // ��Ʈ A�� 1�� ����, A�� 9���� �۰ų� ����, A�� ++�� 1�� ���ذ���
        {
       
        printf(" %d x %d  = %d\n", ������, A, ������ * A);


        }
                   



/*
   int i =1;
   int A = i*9;

   while (i <10) {
       printf("%d x %d = %d \n", A, i, A*i);
       i++;

   }


*/





    return 0;
}