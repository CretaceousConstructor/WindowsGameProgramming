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
	//MessageBox(NULL, L"���,Visual Studio", L"��Ϣ����", 0);
	WNDCLASSEX wndClass = { 0 };
	wndClass.cbSize = sizeof(WNDCLASSEX);
	wndClass.style = CS_HREDRAW | CS_VREDRAW;
	wndClass.lpfnWndProc;
	wndClass.cbClsExtra = 0;
	wndClass.hInstance = hInstance;


	return 0;
}



//�û����� ���ں���һ�����̽ṹ��
//�û����� �е����ں˴����������ں˶��� Ҳ���ں��ж�Ӧ�Ľṹ�� 
//Ϊ�˲����û�ֱ���õ��ں˵�ַ,
//ÿһ���������ں�����һ���ṹ��,�ṹ������һ��ָ��ָ��һ������� ������һ��entry �Ǿ��, �ڶ���entry���ڴ��ַ