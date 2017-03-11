// ConsoleApplication32.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"


int _tmain(int argc, _TCHAR* argv[])

{
	int n,i,min;
	int *mass;
	printf("Enter the N");
	scanf_s("%d", &n);
	mass= (int*)malloc(n*sizeof(int));
		for ( i=0; i < n; i++){
			scanf_s("%d", &mass[i]);
	}
		for (i = 1; i < n; i++){
			if (mass[i] == mass[i - 1] + 1);
			else
				min = mass[i - 1] + 1;
			if (mass[i] == mass[i - 1] - 1) ;
			else
					min = mass[i - 1] - 1;

		}
		printf("\n%d", min);
	return 0;
}
