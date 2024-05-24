// a~z, A~Z �迭(�迭�ƴϾ��) ����
// �����ϰ� ���ڸ� �����ؼ� �ִ� 15�ڷ� �� ���ڿ�(string)����
// ���ڿ��� 2������  (���ڿ�A, ���ڿ�B)
// �� ���ڿ��� ���ؼ� ���� (���ڿ�A - ���ڿ�B) A�� B�� �ߵȰ� ������ A ��� , A�� B�� �ߺ��� �� ������ B ���, �׸��� ���ŵ� �� ���

// A = {"asADF"} B = {"DFC"}
// A-B = ��� : "asA" , ���� : "DF"

#include "stdafx.h"
#include <set>
#include <list>
#include <vector>
#include <random>
#include <ctime>
list<char> A;
list<char> B;
list<char> C; // �ߺ��Ǿ��ִ� ��

char randomLetter() {
	int r = rand() % 52;
	char base = (r < 26) ? 'A' : 'a';
	return (char)(base + r % 26);
}

int main() {

	srand(time(NULL));
	
	cout << "������������������������A�ȿ� ����ִ� ���ĺ�������������������������" << endl;
	for (int i = 0; i < 15; i++)
	{
		char ch = randomLetter();
		A.push_back(ch);
		cout << ch << " ";
	}
	cout << endl << endl;
	cout << "������������������������B�ȿ� ����ִ� ���ĺ�������������������������" << endl;
	for (int i = 0; i < 15; i++)
	{
		char ch = randomLetter();
		B.push_back(ch);
		cout << ch << " ";
	}
	cout << endl << endl;



	
	//�ߺ��� ���� ã��
	for (auto it_A = A.begin(); it_A != A.end(); ++it_A) {
		for (auto it_B = B.begin(); it_B != B.end(); ++it_B) {
			if (*it_A == *it_B) {		// �ΰ����� for���ȿ��� ������ ���� ���� ������ ���Ҷ� �������
				C.push_back(*it_A);		// �ߺ��� ���ڸ� C�� ����
				it_A = A.erase(it_A);	// A���� �����ϰ� ���� ��ҷ� �̵� = erase�� ��ȯ�� �ݺ��ڴ� ���ŵ� ����� ��ġ�� �ƴ϶�, ���ŵ� ����� ���� ��ġ�� ����Ŵ
										// �׷��� ��ȯ�� �ݺ��ڸ� �ٽ� it_A �����Ͽ� ������Ҹ� ����Ű���� ����� for���̱⶧���� �Ʒ� --�������� (++it_A ������)
				--it_A;					// erase�� ����� �� �״������� ��ȯ�ϰԵȴ�. �׷��� it_A�� ���� ��Ҹ� ����Ű���� ����
				it_B = B.erase(it_B);
				--it_B;
			}
		}
	}


	cout << "������������������������A�ȿ� B�� �ߺ����ִ°��� ���� A�ȿ� ���ĺ�������������������������" << endl;
	for (auto value : A)
	{
		cout << value << " ";
	}
	cout << endl << endl;

	cout << "������������������������A�ȿ� B�� �ߺ����ִ°��� ���� B�ȿ� ���ĺ�������������������������" << endl;
	for (auto value : B)
	{
		cout << value << " ";
	}
	cout << endl << endl;
		
	cout << "���������������������������ŵ� ���ĺ�������������������������" << endl;
	for (auto value : C) // ���ŵ� �� ���
	{
		cout << value << " ";
	}

	
	return 0;
}
