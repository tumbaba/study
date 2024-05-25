// 알람시계.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int main()
{
    int H, M;
    cin >> H >> M;
    //시간 H 분 M

    M -= 45;

    if (M < 0)
    {
        M += 60; // 분이 음수가되면 60분추가
        H -= 1; // 분을 추가했으니 시간에서 1시간 감소
    }
    if (H < 0) //시간이 음수가되면
    {
        H += 24; //24시간을 더해 양수ㄹ
    }
 

    cout << H << " " << M << endl;

    return 0;
}
