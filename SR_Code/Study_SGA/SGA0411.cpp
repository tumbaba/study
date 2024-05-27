#include <stdio.h>

int main() {
	/*
	
	%d : 정수 출력 (1, 2, 3, ..., 0, -1, -2, -3...)
	%f : 실수 출력 (3.14, -2.0, ...)  예: .2f = 소숫점 2자리점
	%g : 실수 출력 (지수 형태로도 출력 = 잘 몰라도됨) 
	%c : 문자 출력 = 알파벳, 숫자, 몇몇 기호 ('a', 'b');
	%s : 문자열 출력 = 안녕하세요 (문자가 열거되어있는 것) - 한글포함

	*/ 

	/* --------------------구구단 입력 if문 -----------------------------------

	int a;   // 구구단 숫자 입력
	int b = 1;   // 구구단 곱셈 수
	int c;
	

	printf("원하는 구구단은 몇단입니까?\n");

	scanf_s("%d단", &a);


	if (a != 0) 
	{
		printf("%d 단은 아래와 같습니다.\n", a);
	}

	else 
	{
		printf("0이 포함되어있다면 구구단 의미가 없으므로 종료하겠습니다!\n");
	}
	
		
	for (b=1; b <= 9; b++)
	{

	printf("%d X %d = %d\n", a, b, a*b);
	
	}
		
	return 0;
	-------------------------------------------------------------------------------
	*/

    // 컴파일 = C언어는 .c는 코딩파일, .cpp는 c++코딩파일
    // 컴파일 = Ctrl + F5 , run

    // Printf = 화면출력
    // Scanf = 입력

    // 제어문 = 조건, 반복, 

    // std::cout << "한글입력\n";

    // 1바이트 = 8비트

    // int = 4바이트 = 32비트
    // unsigned int = 양수만 나타냄 (%u로 사용)
    /* ----------예시------------
    unsigned int num = -100000;
    printf("%u\n", num);
    */

    // 출력 정렬 (왼쪽, 오른쪽 4자리 공간을 확보 )
    /* ----------예시------------
    printf("%-4d\n %d\n %4d\n", 10,11,12);
    */

    // printf("%x\n%x\n%d\n", 10,15,10);



//----------------------사칙연산 -----------------------   
    /*
    int x = 0;
    int y = 0;
    int z = 0; // 변수 선언 및 초기값
    scanf("%d %d",&x , &y);
    */


    /*
    // 덧셈
    printf("더하기\n");
    z = x + y;
    printf("첫 입력숫자 + 두번째 입력숫자 = %d\n", z);
    */


    /*
    // 빼기
    printf("빼기\n");
    z = x - y;
    printf("첫 입력숫자 - 두번째 입력숫자 = %d\n", z);
    */

    /*
    // 곱하기
    printf("곱하기\n");
    z = x * y;
    printf("첫 입력숫자 X 두번째 입력숫자 = %d\n", z);
    */

    /*
    // 나누기
    printf("나누기\n");
    z = x / y;
    printf("첫 입력숫자 / 두번째 입력숫자 = %d\n", z);
    */

    /*
    // 나머지(나눈 후 나머지)
    printf("나머지\n");
    z = x % y;
    printf("첫 입력숫자 % 두번째 입력숫자 = %d\n", z);
    */




    //----------------------논리연산 -----------------------  
    /*

    && || !

    */
    //----------------------관계연산 -----------------------  
    /*

    == > < >= <=

    */
    /*
        bool bResult = false;
        int x = 10;
        int y = 100;
        int result = 0;
        // 논리연산자 예시문
        //          false   ||  true
        // bResult = (10 >= 100) || (10 < 100);
    */

    //-------------if문---------------
    // --- if(x == 0 || y == 0) --- // 참과 거짓 분할

    /*
        scanf("%d %d", &x, &y);

        if( x > y ) // 참일때
        {
            printf("더하기");
            result = x + y;
        }
        else if (x == y)
        {
            printf("같음");
            result = x + y;
        }

        else //  X < y
        {
            printf("빼기");
            result = x - y;
        }


        printf("%d", result);
    */


    bool bResult = false;
    int x = 2;  // 단 지정 함수  2~9
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
        printf("%d 단\n", x);
        for (int i = 9; i >= 1; i--)
        {
            printf("%d * %d = %d\n", x, i, x * i);
        }
    }
    printf("구구단 출력완료.\b");
    }

    //로직
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
        printf("2에서 9단까지만 됩니다.\n");
    }
    break;
    */




    /*
        case 3:
        {
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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
        printf("%d 단\n", x);

        //로직
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

    printf("구구단 출력완료.\b");

    */










    /*
    switch(op)
    {
        case '+' :  {
            printf("더하기\n");
                result = x + y;
        }
        case '-' :  {
            printf("빼기\n");
                result = x - y;
        }
        case '*' :  {
            printf("곱하기\n");
                result = x * y;
        }
        case '/' :  {
            printf("나누기\n");
                result = x / y;

        }
    }
    */







    //---- Switch 문 ---- 실패함

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
            case '+': // 더하기
            {   printf("더하기\n");
                //로직
                result = x + y;
            }
            break; // 빠져나가라

             case '-': // 빼기
            {   printf("빼기\n");
                //로직
                result = x - y;
            }

            break; // 빠져나가라
             case '*': // 곱하기
            {   printf("곱하기\n");
                //로직
                result = x * y;
            }

            break; // 빠져나가라

             case '/': // 나누기
            {   printf("나누기\n");
                //로직
                result = x / y;

                int result2 = x % y;

                if(result2 != 0)
                {
                    printf("나머지\n");
                    printf("%d\n", result2);
                }

            }
            break; // 빠져나가라
            default:
            {
                printf("사칙연산자가 아닙니다");
            }
        }
        printf("%d", result);
        */


















return 0;










}

