// ConsoleApplication34.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include"clocale"


int _tmain(int argc, _TCHAR* argv[])
{
	int **mass;
	int n, m, i, j, stack_1 = 0, stack_2 = 0, flag = false;

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
		for (i = 0; i < n; i++){
			printf("%d", i);
			for (j = 0; j < m; j++){
				if ((mass[i][j] == 1) && (i != j))
					stack_1++;
				if ((mass[j][i] == 0) && (i != j))
					stack_2++;
				printf("%d", j);
			}
		}
			if (stack_1 == 2){
				printf("\n������ ����� %d", i);
				flag = true;
			}
			if (stack_2 == 2){
				flag = true;
				printf(" \n������� ����� %d", i);
			}


		if (flag = false)
			printf("\nNot found");

		return 0;
	}
