// MemoryBaloon.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[]) 
{
	int max = 5000;
	int mb = 0;
	char* buffer;

	if (argc > 1)
		max = _wtoi(argv[1]);

	while ((buffer = (char *)malloc(1024 * 1024)) != NULL && mb != max) {
		memset(buffer, 0, 1024 * 1024);
		mb++;
		printf("Allocated %d MB\n", mb);
	}

	return 0;
}
