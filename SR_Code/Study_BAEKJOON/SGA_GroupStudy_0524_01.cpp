#include <iostream>
using namespace std;

//���� 1
//�迭 ��ȸ
int main() {
	int numbers[] = { 10, 20, 30, 40, 50 };

	// ���⿡ range-based for loop�� ����Ͽ� �迭�� ��� ��Ҹ� ����ϼ���

	for (const int num : numbers) // const ���̸� �б�����
	{
		cout << num << "\t";
	}

	return 0;
}
