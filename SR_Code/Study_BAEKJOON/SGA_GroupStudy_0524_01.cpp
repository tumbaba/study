#include <iostream>
using namespace std;

//문제 1
//배열 순회
int main() {
	int numbers[] = { 10, 20, 30, 40, 50 };

	// 여기에 range-based for loop을 사용하여 배열의 모든 요소를 출력하세요

	for (const int num : numbers) // const 붙이면 읽기전용
	{
		cout << num << "\t";
	}

	return 0;
}
