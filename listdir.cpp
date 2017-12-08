#include "windows.h"
#pragma warning( disable : 4996)

static int count;



int _tmain(int argc, wchar_t* argv[]) {
    	wchar_t s[512];              	// текущая папка
    	GetCurrentDirectory(512, s);	// получить текущую папку
    	wprintf(TEXT("Starting in: %s\n"), s);

    	count = 0;                  	// обнулить счетчик файлов    	

        //dfs();                     	// запустить обход в глубину
   	 
    	wprintf(TEXT("File count = %d\n"), count);
    	return 0;
}


/*void dfs() {
	HANDLE hFind;                   	// номер поиска
	WIN32_FIND_DATA res;            	// результат поиска

	CHAR dir[] = ".\\*";
	hFind = FindFirstFile(dir, &res);   // найти первый файл

	do {
    	count++; // некоторые файлы не считаются??
    	_tprintf(TEXT("file #%d is <%s>\n"), count, res.cFileName);

    	// ...
    	// здесь будет обход в глубину
	} while (FindNextFile(hFind, &res) != 0);
	FindClose(hFind);
}
*/
