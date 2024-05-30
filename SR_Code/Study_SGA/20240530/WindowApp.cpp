#include "WindowApp.h"
#include <string>

WindowApp* WindowApp:: g_pApp = nullptr;

//bool isDrawing = false;			// ���콺 Ŭ������ ����
//POINT startPoint, endPoint;		// ���� �������� ���� ����


WindowApp::WindowApp(HINSTANCE hInstance)
{

	this->hInstance = hInstance;
	hwnd = NULL;
	
	g_pApp = this;   // �߰�

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

	wc.lpfnWndProc = WindowProc;					// ������ ���ο��� ��Ī��Ŵ
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
	HWND hwnd = CreateWindowEx(0,					// �����ڵ�� ������ ���� = exW�� ���ϵ�ĳ����(�����ڵ� ����)
		classname,						// ������ Ŭ���� ���� 
		L"���� ������ ���α׷�",			// ������ Ÿ��Ʋ
		WS_OVERLAPPEDWINDOW,			// WS_CAPTION, WS_SYSTEM�� �������� define���� ������ ��
		0, 0, 							// ������ ���� ��ġ 
		width, height,						// �������� ���� ���� ���� width, height
		nullptr,							// ������ �θ��� �ڵ�
		nullptr,							// �޴� �ڵ�
		hInstance,
		nullptr
	);

	if (hwnd == NULL)			// ���ǹ� = �ڵ��� Null�϶� ����
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
		TranslateMessage(&msg); // Ű���� �Է� �޼��� ��ȯ
		DispatchMessage(&msg);	// ������ ���ν����� ����(�Ʒ� CALLBACK WindowProc)
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

	case WM_LBUTTONDOWN:					// ���콺 ���ʹ�ư ����
		isDrawing = true;
		startPoint.x = LOWORD(lParam);
		startPoint.y = HIWORD(lParam);
		endPoint = startPoint;
		return 0;

	case WM_MOUSEMOVE:						// ���콺 �̵�
		if (isDrawing)
		{
			endPoint.x = LOWORD(lParam);
			endPoint.y = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, TRUE);//ȭ�� ���ſ�û
		}
		return 0;

	case WM_LBUTTONUP:						// ���콺 ������ư ����
		if (isDrawing)
		{
			isDrawing = false;
			endPoint.x = LOWORD(lParam);
			endPoint.y = HIWORD(lParam);
			InvalidateRect(hwnd, NULL, TRUE);//ȭ�� ���ſ�û

		}
		return 0;
	

	case WM_PAINT:
	{
		hdc = BeginPaint(hwnd, &ps);
		

		if (isDrawing) // �� �׸���
		{
			HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));  // 2 =  �� �β�
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

