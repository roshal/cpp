// ConsoleApplication37.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include"clocale"


int _tmain(int argc, _TCHAR* argv[])
{
	int **mass;
	int n, m, i, j, z, sap = 0;;

	setlocale(LC_CTYPE, "rus");
	printf("������� ���������� �����: ");
	scanf_s("%d", &n);
	printf("������� ���������� ��������: ");
	scanf_s("%d", &m);
	mass = (int**)malloc(n*sizeof(int*));
	for (i = 0; i < n; i++){
		mass[i] = (int*)malloc(m*sizeof(int));
		for (j = 0; j < m; j++){
			printf("mass[%d][%d]=", i, j);
			scanf_s("%d", &mass[i][j]);
		}
	}
	printf("�������:\n");
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			printf("%d ", mass[i][j]);

		}
		printf("\n");
	}
	for (z = 0; z < m; z++){
		for (i = 1; i < n; i++){
			for (j = 0; j < m;j++){
				if (mass[z][0] == mass[j][i])
					sap++;
			}
			if (sap == n)
				break;

		}
	}

	printf("\n%d", mass[z][0]);
	return 0;
}
