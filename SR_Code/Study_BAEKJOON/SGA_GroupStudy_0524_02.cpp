#include <iostream>
#include <vector>
using namespace std;
// ���� 2
// ���� ��ȸ

int main() {
	vector<string> names = { "Alice", "Bob", "Charlie" };

	// ���⿡ range-based for loop�� ����Ͽ� ������ ��� ��Ҹ� ����ϼ���

	for (const string Names : names ) // �б����� const
	{
		cout << Names << "\t";
	}



	return 0;
}