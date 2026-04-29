#include <Windows.h>
#include <thread>
#include <chrono>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
	std::this_thread::sleep_for(std::chrono::seconds(5));
	MessageBox(NULL, L"Your Computer Has Detected A Virus", L"Virus Detected", MB_ICONERROR | MB_OKCANCEL);
	MessageBox(NULL, L"Click OK To Delete The Virus", L"Virus Detected", MB_ICONINFORMATION | MB_OKCANCEL);
	MessageBox(NULL, L"You Might Need To Reinstall Windows", L"Virus Detected", MB_ICONWARNING | MB_OK);
	MessageBox(NULL, L"APRIL FOOLS! hahaha", L"There's Actually No Virus!", MB_ICONASTERISK);
}