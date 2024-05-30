#include <Windows.h> // 윈도우 API 함수 사용
#include <iostream>
#include "../WinAppDLL/math.h"
using namespace std;
// 참조 끊은 상태임 : SGA_0530_WinAppDll_Reference
// 참조파일 : 함수만들 다른파일 (WinAppDll) / 헤더포함
/*

라이브러리
1. 다른 사람이 개발한 코드를 라이브러리 형태로 만들어서 프로젝트에 참조하여 사용
2. 라이브러리 파일을 수정하면 해당 프로젝트 참조한 라이브러리 파일들이 수정이 같이됨
	- 라이브러리 파일만 수정하면서 내용을 변경하기 쉽고 기능 확장하기 좋음
사용법
1. 라이브러리 파일을 반들어서 해당파일에 cpp.h 헤더파일을 옮기고 라이브러리를 사용할 프로젝트를 참조

*/



// 참조하지않고 파일 dll을 읽는 방법
typedef int (*math_func)(int, int);   // 함수에 포인터를 받는다(주소) dll을 받는다


int main() {

	//사용방법 : 1. 라이브러리 열기 (dll파일 읽어오기)
	HINSTANCE hinstLib = LoadLibrary(L"WinAppDll.dll");
	if (!hinstLib)
	{
		cout << L"WinAppDll.dll을 찾을수 없습니다." << endl;
		return 1;
	}

	math_func add = (math_func)GetProcAddress(hinstLib, "Add");

	if (!add)
	{
		cout << L"Add 함수를 찾지 못했습니다." << endl;
		return 1;
	}

	math_func sub = (math_func)GetProcAddress(hinstLib, "Add");

	if (!sub)
	{
		cout << L"Sub 함수를 찾지 못했습니다." << endl;
		return 1;
	}

	int C = add(10,20);
	int D = sub(100,50);

	cout << C << endl << D << endl;

	FreeLibrary(hinstLib); // 사용 메모리 해제

	return 0;
}