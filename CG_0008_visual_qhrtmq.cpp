#include <iostream>

using namespace std;

int main()
{


    //// 값 입력받아서 원하는 단만 출력하기
    int num1 = 0;

    cin >> num1;

    for (int a = 1; a <= 9; a++)
    {
        cout << num1 << "x" << a << "=" << num1 * a << endl;
    }



}

