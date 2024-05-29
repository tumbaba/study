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
	//	//â ũ�� ����� ȭ���� �ٽ� �׸����� ��û
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
		classname, //������ Ŭ���� ����
		L"������ ������ ���α׷� ����", //������ Ÿ��Ʋ
		WS_OVERLAPPEDWINDOW,
		50, 0, //������ ���� ��ġ
		120, 120, //������ width,height
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
		TranslateMessage(&msg); //Ű�����Է¸޼��� ��ȯ
		DispatchMessage(&msg); // ������ ���ν����� ����
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


