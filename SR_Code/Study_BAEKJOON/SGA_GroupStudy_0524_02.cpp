#include <iostream>
#include <vector>
using namespace std;
// 문제 2
// 벡터 순회

int main() {
	vector<string> names = { "Alice", "Bob", "Charlie" };

	// 여기에 range-based for loop을 사용하여 벡터의 모든 요소를 출력하세요

	for (const string Names : names ) // 읽기전용 const
	{
		cout << Names << "\t";
	}



	return 0;
}