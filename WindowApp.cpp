#include "WindowApp.h"
#include <string>

WindowApp* g_pApp = nullptr;

WindowApp::WindowApp(HINSTANCE hInstance)
{
	this->hInstance = hInstance;
}

WindowApp::~WindowApp()
{
}

LRESULT WindowApp::HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	switch (uMsg) {

	//case WM_SIZE:
	//	//창 크기 변경시 화면을 다시 그리도록 요청
	//	InvalidateRect(hwnd, NULL, TRUE);
	//	{
	//		return 0;
	//	}
	//case WM_PAINT: {
	//	int weight = 1200;
	//	int height = 780;
	//	hdc = BeginPaint(hwnd, &ps);
	//	/*FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));*/




	//	for (int i = 0; i < 200; i += 5)
	//		Ellipse(hdc, 10 + i, 10 + i, 100, 100);

	//	Rectangle(hdc, 250, 250, 250, 250);

	//	Ellipse(hdc, 1200 - 600, 1200 - 600, 1200 - 600, 1200 - 600);
	//	int num = 30;
	//	std::wstring strc = L"add(10,20) = " + to_wstring(num);

	//	TextOut(hdc, 500, 100, strc.c_str(), (int)strc.size());
	//	EndPaint(hwnd, &ps);
	//}
	//			 return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	
		
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}



bool WindowApp::RegisterWindowClass()
{

	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = classname;
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

	if (RegisterClass(&wc) == 0)
		return false;

	return true;
	
}

bool WindowApp::CreateAppWindow(int nCmdShow)
{
	hwnd = CreateWindowEx(0,
		classname, //윈도우 클래스 네임
		L"간단한 윈도우 프로그램 히히", //윈도우 타이틀
		WS_OVERLAPPEDWINDOW,
		50, 0, //윈도우 생성 위치
		120, 120, //윈도우 width,height
		NULL,
		NULL,
		hInstance,
		NULL);

	if (hwnd == NULL)
	{
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	return true;
}

bool WindowApp::Initalize()
{
	if(RegisterWindowClass() == false)
	{
		return false;
	}

	CreateAppWindow(SW_SHOW);
	return true;
}

int WindowApp::Run()
{
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); //키보드입력메세지 변환
		DispatchMessage(&msg); // 윈도우 프로시저로 전달
	}
	return (int)msg.wParam;
	
}

LRESULT WindowApp::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (g_pApp) {
		g_pApp->HandleMessage(hwnd, uMsg, wParam ,lParam);
	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


