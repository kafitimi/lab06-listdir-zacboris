#include <windows.h>
#include <stdio.h>
#pragma warning( disable : 4996)

static int count;



int main() {
    	wchar_t s[512];              	// ������� �����
    	GetCurrentDirectory(512, s);	// �������� ������� �����
    	wprintf(L"Starting in: %s\n", s);

    	count = 0;          // �������� ������� ������    	
		HANDLE hFind;
		WIN32_FIND_DATA fileinfo;
		hFind = FindFirstFile(L"*", &fileinfo);
		do {
    	count++; // ��������� ����� �� ���������??
		if(count>2)
    	wprintf(L"%s\n", fileinfo.cFileName);

    	// ...
    	// ����� ����� ����� � �������
	} while (FindNextFile(hFind, &fileinfo) != 0);
        //dfs();                     	// ��������� ����� � �������
   		
    	wprintf(L"File count = %d\n", count-2);
    	return 0;
}


/*void dfs() {
	HANDLE hFind;                   	// ����� ������
	WIN32_FIND_DATA res;            	// ��������� ������

	CHAR dir[] = ".\\*";
	hFind = FindFirstFile(dir, &res);   // ����� ������ ����

	do {
    	count++; // ��������� ����� �� ���������??
    	_tprintf(TEXT("file #%d is <%s>\n"), count, res.cFileName);

    	// ...
    	// ����� ����� ����� � �������
	} while (FindNextFile(hFind, &res) != 0);
	FindClose(hFind);
}
*/
