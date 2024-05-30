#include <Windows.h> // ������ API �Լ� ���
#include <iostream>
#include "../WinAppDLL/math.h"
using namespace std;
// ���� ���� ������ : SGA_0530_WinAppDll_Reference
// �������� : �Լ����� �ٸ����� (WinAppDll) / �������
/*

���̺귯��
1. �ٸ� ����� ������ �ڵ带 ���̺귯�� ���·� ���� ������Ʈ�� �����Ͽ� ���
2. ���̺귯�� ������ �����ϸ� �ش� ������Ʈ ������ ���̺귯�� ���ϵ��� ������ ���̵�
	- ���̺귯�� ���ϸ� �����ϸ鼭 ������ �����ϱ� ���� ��� Ȯ���ϱ� ����
����
1. ���̺귯�� ������ �ݵ� �ش����Ͽ� cpp.h ��������� �ű�� ���̺귯���� ����� ������Ʈ�� ����

*/



// ���������ʰ� ���� dll�� �д� ���
typedef int (*math_func)(int, int);   // �Լ��� �����͸� �޴´�(�ּ�) dll�� �޴´�


int main() {

	//����� : 1. ���̺귯�� ���� (dll���� �о����)
	HINSTANCE hinstLib = LoadLibrary(L"WinAppDll.dll");
	if (!hinstLib)
	{
		cout << L"WinAppDll.dll�� ã���� �����ϴ�." << endl;
		return 1;
	}

	math_func add = (math_func)GetProcAddress(hinstLib, "Add");

	if (!add)
	{
		cout << L"Add �Լ��� ã�� ���߽��ϴ�." << endl;
		return 1;
	}

	math_func sub = (math_func)GetProcAddress(hinstLib, "Add");

	if (!sub)
	{
		cout << L"Sub �Լ��� ã�� ���߽��ϴ�." << endl;
		return 1;
	}

	int C = add(10,20);
	int D = sub(100,50);

	cout << C << endl << D << endl;

	FreeLibrary(hinstLib); // ��� �޸� ����

	return 0;
}