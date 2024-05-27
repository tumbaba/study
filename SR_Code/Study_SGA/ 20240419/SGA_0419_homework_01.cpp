#include <iostream>
using namespace std;
// void swap(int min, int arrNum[10]);

int main()
{
    int arrNum[10] = {23, 9, 34, 50, 76, 45, 77, 96, 18, 99}; // 배열 초기화
    
    // 1. 배열안에 들어있는 숫자와 비교되는 로직 필요
    // 2. 높은 숫자를 담을 그릇 필요, 낮은숫자를 가장 낮은 곳에 넣는 로직 필요
    cout << "현재 배열안의 보이는 숫자는 = ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrNum[i] << " ";
    }
    cout << endl;
    

    //─────────────────────────오름차순──────────────────────────
    int min;            // min 변수 선언, 초기화 
        min = arrNum[0];    // min에 arrNum 배열 첫번째 담긴 수를 담기
// int minNum[10] = { 0, };

    for (int i = 0; i < 10; i++)    // int 지역변수 선언 
    {
        for (int j = 0; j < 10; j++)
        {
            if (arrNum[i] < arrNum[j])
            {
                min = arrNum[j];
                arrNum[j] = arrNum[i];
                arrNum[i] = min;
            }        
        }

    }
    cout << "오름차순으로 정렬된 결과는 = ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrNum[i] << " ";
    }
    cout << endl;
    //─────────────────────────────────────────────────────────

    //─────────────────────────내림차순──────────────────────────
    for (int i = 0; i < 10; i++)    // int 지역변수 선언 
    {
        for (int j = 0; j < 10; j++)
        {
            if (arrNum[i] > arrNum[j])
            {
                min = arrNum[j];
                arrNum[j] = arrNum[i];
                arrNum[i] = min;
            }
        }

    }
    cout << "내림차순으로 정렬된 결과는 = ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrNum[i] << " ";
    }
    cout << endl;





    return 0;
}
    