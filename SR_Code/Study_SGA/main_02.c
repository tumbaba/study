#include <stdio.h>
#include <stdbool.h>

/* C언어 기초
개발자 : 연성록
작성일 : 2024.04.09
파일이 많아질때 참고하기위한 작성 내용으로
*/

int main() {

    /*
     \n = 줄바꿈
     %d = 숫자(정수)
     %S = 문자가능

     printf("%d\n", 1235);
     printf("%s\n", "메롱");
     printf("%s  \n  %s\n", "메롱", "바보");

    */





    /*

    %d 숫자 = 정수  -2,147,483,648 ~ 2,147,483,647 자리수 범위 제한 = int

    1비트
    2^8 (2의 8승)= 256개의 숫자 = 1바이트
    = -127 - +127


    int = 2^32 = -2,147,483,648 ~ 2,147,483,647
    float 숫자 = 실수 (소숫점)
    String, char = 문자
    Wstring = 한글포함한 유니코 방식
    변수선포 앞에는 숫자넣치말것
    */


    //unsigned int unumber = 26000000000;  //양수쪽만필요할때 사용 0보다 작은 것은 불필요
   /* unsigned int unumber = 1544785990;
    printf("%lu\n", unumber);

    long int unumber1 = 26000000000;
    printf("%ld\n", unumber1);

   */



   // abs = 절대값 함수


    /* --------- 사칙연산 ----------
     + : 더하기
     - : 빼기
     * : 곱셈
     / : 나누기
     % : 나머지
    */

    /*
    int sum = number + number1;
    int mulsum = number * number1;
    int subsum = number - number1;
    int divsum = number / number1;
    int divsum1 = number % number1; //나머지 구하는 연산자
    */



    /*

     //-------누적연산자----------
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

     printf("------정수형 사칙연산-----\n");

     printf("---- 덧셈 ----\n");
     printf("%d\n", sum);
     printf("%d + %d = %d\n", number, number1, sum);

     printf("---- 뺄셈 ----\n");
     printf("%d - %d = %d\n", number, number1, subsum);

     printf("---- 곱셈 ----\n");
     printf("%d x %d = %d\n", number, number1, mulsum);

     printf("---- 나눗셈 몫----\n");
     printf("%d / %d = %d\n", number, number1, divsum);

     printf("---- 나눗셈 나머지 계산----\n");
     printf("%d / %d = %d\n", number, number1, divsum1);


     printf("-----------------------------\n");







 //------------------실수-------------------------


     float fnumber = 500.0f;
     float fnumber1 = 30.0f;

     float fsum = fnumber + fnumber1;
     float fmulsum = fnumber * fnumber1;
     float fsubsum = fnumber - fnumber1;
     float fdivsum = fnumber / fnumber1;

     printf("------실수형 사칙연산-----\n");

     printf("---- 덧셈 ----\n");
     printf("%.1f + %.1f = %.1f\n", fnumber, fnumber1, fsum);

     printf("---- 뺄셈 ----\n");
     printf("%.1f - %.1f = %.1f\n", fnumber, fnumber1, fsubsum);

     printf("---- 곱셈 ----\n");
     printf("%.1f x %.1f = %.1f\n", fnumber, fnumber1, fmulsum);

     printf("---- 나눗셈 ----\n");
     printf("%.1f / %.1f = %.1f\n", fnumber, fnumber1, fdivsum);

     printf("-----------------------------\n");


      */




      // 조건문 : if()

      // 반복문 
      // for(시작값, 종료, 증가)
      // while()
      // swich

    /*
    
    int number = 500;

    bool bnum = true;
    int idiv = number % 3;
    int zero = 10;

    */

    /*
    ------------비교문(비교연산자)-------------
     == A와 B가 같다
     != A와 B가 다르다
     < A가 B보다 작다
     > A가 B보다 크다
     <= A가 B보다 작거나 같다
     >= A가 B보다 크거나 같다

     모르겠는 항목 : <== , >== , !=

    /*






    /* if(idiv == zero)



    { //참일때
        printf("나머지가 0입니다.");
    }
    else
    { // 거짓일때
        printf("나머지가 0이 아닙니다.");
    }



    //--------반복문----------
    for(int i =0; i < 5; i++ )
    {
        printf(" i= %d\n ", i);
    }
    */


    // int i = 0;
    // ------------------------논리 연산자----------------------------------
    // And = &&   A and B가 ture이면 true (논리 AND)
    // OR = ||    A or B 둘중 하나가 true이면 true (논리 or)
    // NOT = !    연산결과 A가 true이면 false, A가 false이면 true(논리 NOT)

    // 연산식
    // And    true  && true  => true
    //        true  || false => true
    //        false || false => false
    //or
    //nor

/*
    반복문 loop
    1. for             ==    횟수를 정확히 알때 많이사용          A 루브의 초기값,  B 종결컨디션, C언제까지(종결조건), D 반복설정 연산자 >> 출력
    2. while           ==    횟수를 정확히 알지못할때 주로 사용   종결조건, 내용중요
    3. do while        ==





*/


/*
    while (i < 5)
    {

        /*if(i<=2)
        {
            printf(" 나가기 i= %d\n ", i);
            break;

        }
        
        switch (1)
        {
        case 0:
        {
            printf("i=0입니다.\n");
        }
        break;
        case 1:
        case 2:
        {
            printf("i=1 또는 2입니다.\n");
        }
        break;
        default:
        {
            printf("defalut 입니다.\n");
        }
        break;


        }
        i++;

        // printf(" i= %d\n ", i);
    }
*/
//----------------------연습-------------------------------------------------------

    int 구구단 = 9;    // 구구단 2단부터 9단까지 기입

    printf("구구단의 %d 단은 아래와 같습니다\n", 구구단);

    for (int A = 1; A <= 9; A++) // 인트 A는 1값 변수, A는 9보다 작거나 같다, A는 ++로 1씩 더해가기
        {
       
        printf(" %d x %d  = %d\n", 구구단, A, 구구단 * A);


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