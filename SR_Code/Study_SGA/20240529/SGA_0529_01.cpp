#include <Windows.h>	// API WINDOW 기본 라이브러리 사용 

#include <string>
using namespace std;





LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam); // 밑에 전달받는 함수 선언;

bool isDrawing = false;			// 마우스 클릭상태 저장
POINT startPoint, endPoint;		// 선의 시작점과 끝점 저장


//만들때 필수 1
int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow) 
{	// main과 같음 (dll파일을 갖고올수있도록 WINAPI)		

	const wchar_t CLASS_NAME[] = L"Simple Windows";				//와일드 캐릭터형


	//1. 윈도우 클래스 등록
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;					// 윈도우 메인에서 매칭시킴
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;


	HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 0));
	wc.hbrBackground = (HBRUSH) hBrush;  // 1첫번째 방법 : 윈도우 백그라운드 색상 추가 업데이트와 같음   (COLOR_WINDOW + 2)
	RegisterClass(&wc);								// 등록



	//2. 윈도우 생성하는 창
	HWND hwnd = CreateWindowEx(0,					// 운전핸들과 같은것 생성 = exW는 와일드캐릭터(유니코드 관련)
		CLASS_NAME,						// 윈도우 클래스 네임 
		L"심플 윈도우 프로그램",			// 윈도우 타이틀
		WS_OVERLAPPEDWINDOW,			// WS_CAPTION, WS_SYSTEM등 여러가지 define들이 합쳐진 것
		0, 0, 							// 윈도우 생성 위치 
		640, 480,						// 윈도우의 가로 세로 길이 width, height
		NULL,							// 윈도우 부모의 핸들
		NULL,							// 메뉴 핸들
		hInstance,
		NULL
		);					


	if (hwnd == NULL)			// 조건문 = 핸들이 Null일때 종료
	{
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	//3. 메세지 루프처리 : while문 처럼 반복해서 나타내는 처리
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg); // 키보드 입력 메세지 변환
		DispatchMessage(&msg);	// 윈도우 프로시저로 전달(아래 CALLBACK WindowProc)
	}

	
	return 0;
}

//만들때 필수 2
// 마우스, 키보드 동작의 전달관련 통신 (받기)
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)     //(전달을 받는것)
{
//uMsg를 통해서 받아옴.. 	
	
	
	HDC hdc;				
	PAINTSTRUCT ps;
	int num = 30;


	switch (uMsg)
	{

	case WM_SIZE: // 창 크기 변경시 화변 다시 그리도록 요청
		InvalidateRect(hwnd, NULL, TRUE);
		return 0;


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
		//FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1)); // 2.두번째 백그라운드 방법  (case안에 FillRect로 채우기)

		if (isDrawing) // 선 그리기
		{
			HPEN pen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));  // 2 =  선 두께
			SelectObject(hdc, pen);
			MoveToEx(hdc, startPoint.x, startPoint.y, NULL);
			LineTo(hdc, endPoint.x, endPoint.y);
			DeleteObject(pen);
		}
		
		
		
		//원그리기
		Ellipse(hdc, 50, 50, 200, 200);

		
		
		SetTextAlign(hdc, TA_CENTER);  // 문자 정렬
		//텍스트문자
		wstring strc = L"add(10,20) = " + to_wstring(num);

		SetTextColor(hdc, RGB(255, 0, 0)); //뮨자 색상조절
		TextOut(hdc, 100, 100, strc.c_str(), (int)strc.size());

		SetTextColor(hdc, RGB(0, 0, 255)); //뮨자 색상조절
		TextOut(hdc, 100, 130, strc.c_str(), (int)strc.size());
		


		EndPaint(hwnd, &ps);
		return 0;
	}
	case WM_DESTROY:										// 윈도우 종료
		PostQuitMessage(0);
		return 0;
	
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);	// 윈도우 생성
	}

}
