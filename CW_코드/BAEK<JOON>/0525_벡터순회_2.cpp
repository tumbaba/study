// 0525_배열순회_2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> names = { "Alice", "Bob", "Charlie" };

	for (string name : names)
	{
		cout << name << "\n";
	}

}

