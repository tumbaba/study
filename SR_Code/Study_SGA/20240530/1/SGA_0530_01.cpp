#include "WindowApp.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	WindowApp app(hInstance);

	if (!app.Initalize(1280,720))
	{
		return 1;
	}

	return app.Run();
}
