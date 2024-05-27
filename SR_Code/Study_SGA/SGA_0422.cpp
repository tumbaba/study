#include <iostream>
#include "Func.h" // 아리 함수호출을 공유할수 있도록 헤더파일
using namespace std;
int myLine();

enum 
{
DOWN = 0,
UP = 1
};


int swap(int* a, int* b) // ( , ) << 안에 들어가는 것 : ★★★★★★파라미터★★★★★★
{
    int temp; // 임시 저장을 위한 임시 변수 // 결과 후에 필요없기 때문
    temp = *a; // temp = 23;
    *a = *b; // num[0] = 9;
    *b = temp; // num[1] = 23;
    
   // myprint(*a);
    //myprint(*b);

    //myLine();
    
    return 0;
}
// 내림차순 = Down 0, 오름차순 = 1
int Down(int num[], int nsize, int down = 0) //내림차순
{
    for (int i = 0; i < nsize - 1; i++)
    {
        for (int j = i + 1; j < nsize; j++)
        {
            if (down == 0)
            {
                if (num[i] < num[j]) // 내림차순
                {
                    swap(&num[i], &num[j]);
                }
            }
            else
            {
                if (num[i] > num[j]) // 오름차순
                {
                    swap(&num[i], &num[j]);
                }
            }
        }
    }

    myLine();

    std::cout << num[0] << "\t"
        << num[1] << "\t"
        << num[2] << "\t"
        << num[3] << "\t"
        << num[4] << "\t"
        << num[5] << "\t"
        << num[6] << "\t"
        << num[7] << "\t"
        << num[8] << "\t"
        << num[9] << "\t"
        << std::endl;
    
    return 0;
}

// 아리 함수호출을 공유할수 있도록 헤더파일

int main()
{
    /*
     C언어는 함수의 구성으로 되어있고 C++는 클래스로 형성된 구조방식이다.
     cpp안에는 c언어가 포함되어있다.
     cout cin은 cpp확장자에서만 사용되고 printf scanf는 cpp에서도 사용 가능하다.
     */

    //──────────────────────────함수 & 배열─────────────────────────
    /// <summary)
    /// 함수에 대한 설명
    /// </summary>
    /// <returns> </returns>



    int x = 100; //정수값을 저장하는 변수 // x => 메모리저장 위치가 지정되고,  x변수의 이름이 저장, 값 100 사이즈
    int y = 10000;
    char ch = 'a'; // 문자열
    char char_s[5] = "1234";  // 실제 입력할 수보다 \0 NULL이 드러가있는 수를 추가
    int nNum[10] = { 23, 9, 34, 50, 76, 45, 77, 96, 18, 99 };  // 배열 = 연속적인 타입을 표시할때 사용
    int nsize = 10;
    
    // ★★★★★★★★★★★★★★★★★★★★★★★★★★★포인터★★★★★★★★★★★★★★★★★★★★★★★★★★★★
    int* POINTER; // int* 형의 대한 주소값을 저장하는 타입 // 정수의 변수에 대한 메모리의 위치(주소) 저장하는 변수
    swap(&x, &y);
    myprint(x);
    myprint(y);

    /*
    ★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
    swap(&nNum[0], &nNum[7]);   // swap 함수를 통해서 구해준 값을 바꿔주는 것
    myprint(nNum[0]);
    myprint(nNum[7]);
    ★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★★
    */


    //POINTER = &x; // 포인터를 통해서 어떤것을 담을 것을 POINTER 공간. x담은 값을 구하기 (&x = x안에 담긴값을 구하기)
    //cout << *POINTER << endl; // *POINTER = x와 같다는 개념

    //*POINTER = 10;
    //cout << x << endl;
    //
    //myLine();
    //
    //POINTER = &y; // 포인터를 통해서 어떤것을 담을 것을 POINTER 공간.y담은 값을 구하기(&y = y안에 담긴값을 구하기)
    //cout << *POINTER << endl; // *POINTER = y와 같다는 개념
    //
    //*POINTER = 100; // y = 100
    //cout << y << endl;

    //for (int i = 0; i < nsize-1; i++)
    //{
    //    int temp; // 임시 저장을 위한 임시 변수 // 결과 후에 필요없기 때문
    //    temp = num[i]; // temp = 23;
    //    num[i] = num[i+1]; // num[0] = 9;
    //    num[i+1] = temp; // num[1] = 23;
    //}

    //std::cout << num[0] << "\t"
    //    << num[1] << "\t"
    //    << num[2] << "\t"
    //    << num[3] << "\t"
    //    << num[4] << "\t"
    //    << num[5] << "\t"
    //    << num[6] << "\t"
    //    << num[7] << "\t"
    //    << num[8] << "\t"
    //    << num[9] << "\t"
    //    << std::endl;

    //myLine();

    Down(nNum, nsize, (int)DOWN); // 내림

    myLine();

    Down(nNum, nsize, (int)UP); // 오름


    
    //─────Hello World 문자출력시─────(배열)

    //x = 5;
    //
    //// 배열 초기화 
    //char_s[0] = '5'; // 배열의 이름 char_s[0] 
    //char_s[1] = '6';
    //char_s[2] = '7';
    //char_s[3] = '8';
    //char_s[4] = '\0';
    //
    //
    //std::cout << "Hello World" << std::endl;  // 12개의 배열로 이루어져있다
    //std::cout << char_s[0] << "\t" 
    //          << char_s[1] << "\t"
    //          << char_s[2] << "\t"
    //          << char_s[3] << "\t"
    //          << char_s[4] << "\t"

    //          << std::endl;

    //


    //x = sum(5); // 5입력해준값이 함수 안에 들어감. 결과 값은 x = 8

    //myprint(x);

    //{               // 변수 {} 변수 함수 범위
    //    int y = 10; // 괄호 안에도 마찬가지로 영역안에서만 사용하는 지역변수
    //    myprint(y);
    //}

    
    return 0;
}


