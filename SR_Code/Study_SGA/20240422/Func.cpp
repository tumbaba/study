#include <iostream>
#include "Func.h" // 함수가 어디에있는지 호출하기위해 공유되는 헤더

int myprint(int x) //─────────── 함수 구현
{



    // 이 안에 sum을 넣어서 다른 함수를 같이 표현할수 있음


    std::cout << x << "\n";

    


    return 0;
}
int sum(int x) // 함수만들기 //─────────── 함수 구현
{
    int y = x + 3;  // 함수안에서 지역변수

    
    // 이 안에 myprint를 넣어서 다른함수를 같이 표현할 수도 있음


    return y; // 값을 int sum 앞에 int에 넣어줌
}
int myLine()
{
    std::cout << "───────────────────────────────────────────────────────────────────────────" << "\n";
    return 0;
}
