#include <Windows.h>


#pragma comment(lib,"winmm.lib")
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {



	//PlaySound(L"FirstBlood.wav", NULL, SND_FILENAME | SND_SYNC);
	//PlaySound(L"FirstBlood.wav", NULL, SND_FILENAME | SND_SYNC);
	//
	//PlaySound(L"FirstBlood.wav", NULL, SND_FILENAME | SND_SYNC);
	//
	//
	//
	//MessageBox(NULL, L"你好,Visual Studio", L"消息窗口", 0);
	WNDCLASSEX wndClass = { 0 };
	wndClass.cbSize = sizeof(WNDCLASSEX);
	wndClass.style = CS_HREDRAW | CS_VREDRAW;
	wndClass.lpfnWndProc;
	wndClass.cbClsExtra = 0;
	wndClass.hInstance = hInstance;


	return 0;
}



//用户进程 在内核有一个进程结构体
//用户进程 中的由内核创建的其它内核对象 也在内核有对应的结构体 
//为了不让用户直接拿到内核地址,
//每一个进程在内核中有一个结构体,结构体中有一个指针指向一个句柄表 句柄表第一个entry 是句柄, 第二个entry是内存地址