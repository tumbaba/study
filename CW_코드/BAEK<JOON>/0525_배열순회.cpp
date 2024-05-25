// 0525_배열순회.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{

    int numbers[] = { 10, 20, 30, 40, 50 };

    for (int a : numbers)
    {
        cout << a << " ";
    }
   
}
