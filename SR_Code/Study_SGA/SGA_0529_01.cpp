#include <Windows.h>	// API WINDOW �⺻ ���̺귯�� ��� 

#include <string>
using namespace std;





LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam); // �ؿ� ���޹޴� �Լ� ����;

bool isDrawing = false;			// ���콺 Ŭ������ ����
POINT startPoint, endPoint;		// ���� �������� ���� ����


//���鶧 �ʼ� 1
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow) 
{	// main�� ���� (dll������ ����ü��ֵ��� WINAPI)		

	const wchar_t CLASS_NAME[] = L"Simple Windows";				//���ϵ� ĳ������


	//1. ������ Ŭ���� ���
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;					// ������ ���ο��� ��Ī��Ŵ
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;


	HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 0));
	wc.hbrBackground = (HBRUSH) hBrush;  // 1ù��° ��� : ������ ��׶��� ���� �߰� ������Ʈ�� ����   (COLOR_WINDOW + 2)
	RegisterClass(&wc);								// ���



	//2. ������ �����ϴ� â
	HWND hwnd = CreateWindowEx(0,					// �����ڵ�� ������ ���� = exW�� ���ϵ�ĳ����(�����ڵ� ����)
		CLASS_NAME,						// ������ Ŭ���� ���� 
		L"���� ������ ���α׷�",			// ������ Ÿ��Ʋ
		WS_OVERLAPPEDWINDOW,			// WS_CAPTION, WS_SYSTEM�� �������� define���� ������ ��
		0, 0, 							// ������ ���� ��ġ 
		640, 480,						// �������� ���� ���� ���� width, height
		NULL,							// ������ �θ��� �ڵ�
		NULL,							// �޴� �ڵ�
		hInstance,
		NULL
		);					


	if (hwnd == NULL)			// ���ǹ� = �ڵ��� Null�϶� ����
	{
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	//3. �޼��� ����ó�� : while�� ó�� �ݺ��ؼ� ��Ÿ���� ó��
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); // Ű���� �Է� �޼��� ��ȯ
		DispatchMessage(&msg);	// ������ ���ν����� ����(�Ʒ� CALLBACK WindowProc)
	}

	
	return 0;
}

//���鶧 �ʼ� 2
// ���콺, Ű���� ������ ���ް��� ��� (�ޱ�)
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)     //(������ �޴°�)
{
//uMsg�� ���ؼ� �޾ƿ�.. 	
	
	
	HDC hdc;				
	PAINTSTRUCT ps;
	int num = 30;


	switch (uMsg)
	{

	case WM_SIZE: // â ũ�� ����� ȭ�� �ٽ� �׸����� ��û
		InvalidateRect(hwnd, NULL, TRUE);
		return 0;


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
		//FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1)); // 2.�ι�° ��׶��� ���  (case�ȿ� FillRect�� ä���)

		if (isDrawing) // �� �׸���
		{
			HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));  // 2 =  �� �β�
			SelectObject(hdc, pen);
			MoveToEx(hdc, startPoint.x, startPoint.y, NULL);
			LineTo(hdc, endPoint.x, endPoint.y);
			DeleteObject(pen);
		}
		
		
		
		//���׸���
		Ellipse(hdc, 50, 50, 200, 200);

		
		
		SetTextAlign(hdc, TA_CENTER);  // ���� ����
		//�ؽ�Ʈ����
		wstring strc = L"add(10,20) = " + to_wstring(num);

		SetTextColor(hdc, RGB(255, 0, 0)); //���� ��������
		TextOut(hdc, 100, 100, strc.c_str(), (int)strc.size());

		SetTextColor(hdc, RGB(0, 0, 255)); //���� ��������
		TextOut(hdc, 100, 130, strc.c_str(), (int)strc.size());
		


		EndPaint(hwnd, &ps);
		return 0;
	}
	case WM_DESTROY:										// ������ ����
		PostQuitMessage(0);
		return 0;
	
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);	// ������ ����
	}

}
