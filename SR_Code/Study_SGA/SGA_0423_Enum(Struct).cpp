#include <iostream>
using namespace std;

// 구조체를 이용하면 원하는 자료를 만들어 사용
// int, double, float, char 등 하나의 단위로 취급

/*
자료형
정수 : int
실수 : double, float, long long
문자 : char
문자열 : char *, char 배열, string
*/

// 자료형의 예
/*
사람형의 자료를 만들때 (이름, 나이, 몸무게)
이름 : char name[10]
나이 : int age
몸무게 : float(double) weight
        
┌───────│ 사람형 │───────┐
│       ┌───────┐       │
│         이 름          │
│       └───────┘       │
│       ┌───────┐       │
│         나 이          │
│       └───────┘       │
│       ┌───────┐       │
│         몸무게         │
│       └───────┘       │
└───────────────────────┘
struct Man
{
    char name[10];
    int age;
    float weight;
};  (세미콜론 꼭 필요)
*/
struct Man            // ☆☆☆☆☆ 1 = 구조체 선언
{
    int age;          // 맴버
    double weight;    // 맴버
};


int main()
{
    struct Man yeon; // ☆☆☆☆☆ 2 = 구조체형 변수 (이름)
  //struct Man yeon = { 20, 70.865 }; = 초기화
    yeon.age = 20;   // ☆☆☆☆☆ 3 = 구조체변수의 멤버에 접근(점 사용)
    yeon.weight = 70.865;

    cout << yeon.age << "\t" << yeon.weight << endl;
    
    //같은 구조체라면 변수들의 대입이 연산된다 (맴버들도 복사됨)
    //예 : struct Man yeon,seo = { 20, 70.865 }; yeon = seo;
    // cout << yeon.age << seo.age << endl;


} 

