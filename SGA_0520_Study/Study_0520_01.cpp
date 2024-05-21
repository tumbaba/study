#include <iostream>
using namespace std;
//──────────────────────── 086 배열 일부 변경하기(fill) ────────────────────────

#include <vector>
#include <algorithm>

int main() {
	int data1[10]{ 0, };
	fill(data1, data1 + 3, 10);   // fill 함수의 data1 = data[0] : 수정할 배열의 시작위치 ~ data1 + 3 = data[2]까지 마지막위치 즉, data[0] ~ data[2] = 10 을 나타냄
	fill(data1 + 4, data1 + 8, 20);

					cout << "== data1 결과==" << endl;

		for (int i = 0; i < 10; i++)
			cout << data1[i] << ", ";

	vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
	fill(data2.begin(), data2.begin() + 3, 30); // 백터를 사용하여 배열과 컨테이너를 인자로 받는다고함.

					cout << endl << endl << "== data2 결과==" << endl;

		for (int i = 0, size = data2.size(); i < size; i++)
			cout << data2.at(i) << ", ";

	return 0;
}

