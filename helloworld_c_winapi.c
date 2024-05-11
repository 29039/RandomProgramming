#include <windows.h>

// Entry point for Windows applications
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Display a message box with the "Hello, World!" message
    MessageBox(NULL, "Hello, World!", "Message", MB_OK | MB_ICONINFORMATION);

    return 0;
}
