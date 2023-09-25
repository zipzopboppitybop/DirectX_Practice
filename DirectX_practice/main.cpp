#include <Windows.h>
#include <iostream>

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow   )
{
	// class name
	const auto pClassName = "DirectX_Window";

	// register window class
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = DefWindowProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hCursor = nullptr;
	wc.hIcon = nullptr;
	wc.hbrBackground = nullptr;
	wc.lpszMenuName = nullptr;
	wc.lpszClassName = pClassName;
	wc.hIconSm = nullptr;
	RegisterClassEx(&wc);

	// create window instance
	// takes in a dwExStyle, class name, window name, style(s) (can add multiple with |), x and y for position on screen, width and height, parent menu, child menus, hinstance, LPVOID
	HWND hWnd = CreateWindowEx(
		0,
		pClassName,
		"Hello",
		WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
		200,200,640,480,
		nullptr,nullptr,hInstance,nullptr
		);
	// Actually show the created window
	ShowWindow(hWnd, SW_SHOW);
	while (true);
	return 0;
}