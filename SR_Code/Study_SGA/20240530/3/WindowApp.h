#pragma once
#include <Windows.h>


class WindowApp
{
public:
	WindowApp(HINSTANCE hInstance);
	~WindowApp();

	bool Initalize(int width, int height);
	//bool Initalize();
	int Run();
	int g_App();

private:
	HINSTANCE hInstance;
	HWND hwnd;

	static WindowApp* g_pApp;

	LPCWSTR classname = L"WindowClass";

	static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

	bool RegisterWindowClass();
	bool CreateAppWindow(int nCmdShow, int width, int height);


};

