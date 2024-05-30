#include "WindowApp.h"
#include <string>

WindowApp* WindowApp:: g_pApp = nullptr;

//bool isDrawing = false;			// 마우스 클릭상태 저장
//POINT startPoint, endPoint;		// 선의 시작점과 끝점 저장


WindowApp::WindowApp(HINSTANCE hInstance)
{

	this->hInstance = hInstance;
	hwnd = NULL;
	
	g_pApp = this;   // 추가

}

WindowApp::~WindowApp()
{
}


bool WindowApp::Initalize(int width, int height)
{
	if (RegisterWindowClass() == false)
	{
		return false;
	}
	CreateAppWindow(SW_SHOW, width, height);
	
	return true;
}

bool WindowApp::RegisterWindowClass()
{
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;					// 윈도우 메인에서 매칭시킴
	wc.hInstance = hInstance;
	wc.lpszClassName = classname;

	HBRUSH hBrush = CreateSolidBrush(RGB(255, 255, 255));
	wc.hbrBackground = (HBRUSH)hBrush;


	if (RegisterClass(&wc) == 0)
	{
		return false;
	}

	return true;
}

bool WindowApp::CreateAppWindow(int nCmdshow, int width, int height)
{
	HWND hwnd = CreateWindowEx(0,					// 운전핸들과 같은것 생성 = exW는 와일드캐릭터(유니코드 관련)
		classname,						// 윈도우 클래스 네임 
		L"심플 윈도우 프로그램",			// 윈도우 타이틀
		WS_OVERLAPPEDWINDOW,			// WS_CAPTION, WS_SYSTEM등 여러가지 define들이 합쳐진 것
		0, 0, 							// 윈도우 생성 위치 
		width, height,						// 윈도우의 가로 세로 길이 width, height
		nullptr,							// 윈도우 부모의 핸들
		nullptr,							// 메뉴 핸들
		hInstance,
		nullptr
	);

	if (hwnd == NULL)			// 조건문 = 핸들이 Null일때 종료
	{
		return false;
	}

	ShowWindow(hwnd, nCmdshow);

	return true;
}



int WindowApp::Run()
{

	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); // 키보드 입력 메세지 변환
		DispatchMessage(&msg);	// 윈도우 프로시저로 전달(아래 CALLBACK WindowProc)
	}

	return (int)msg.wParam;
}

LRESULT WindowApp::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	if (g_pApp)
	{
		g_pApp->HandleMessage(hwnd, uMsg, wParam, lParam);
	}
	
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

LRESULT WindowApp::HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;
	PAINTSTRUCT ps;
	

	switch (uMsg)
	{

	case WM_LBUTTONDOWN:					// 마우스 왼쪽버튼 눌림
		isDrawing = true;
		startPoint.x = LOWORD(lParam);
		startPoint.y = HIWORD(lParam);
		endPoint = startPoint;
		return 0;

	case WM_MOUSEMOVE:						// 마우스 이동
		if (isDrawing)
		{
			endPoint.x = LOWORD(lParam);
			endPoint.y = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, TRUE);//화면 갱신요청
		}
		return 0;

	case WM_LBUTTONUP:						// 마우스 왼족버튼 떼짐
		if (isDrawing)
		{
			isDrawing = false;
			endPoint.x = LOWORD(lParam);
			endPoint.y = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, TRUE);//화면 갱신요청

		}
		return 0;
	

	case WM_PAINT:
	{
		hdc = BeginPaint(hwnd, &ps);
		

		if (isDrawing) // 선 그리기
		{
			HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));  // 2 =  선 두께
			SelectObject(hdc, pen);
			MoveToEx(hdc, startPoint.x, startPoint.y, NULL);
			LineTo(hdc, endPoint.x, endPoint.y);
			DeleteObject(pen);
		}

		
		EndPaint(hwnd, &ps);
	}
		return 0;



	case WM_DESTROY:
		PostQuitMessage(0);
		
		
		return 0;
		
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

