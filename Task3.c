#include <locale.h>      
#include <stdio.h> 

#define _USE_MATH_DEFINES
#include <math.h>

void task3a() //����� 3 �)
{

	setlocale(LC_ALL, "RUS");

	int A, B;

	printf("������� � � � ��� �������� �������:\n");
	scanf("%d %d", &A, &B);

	printf("%d", (A % 2 + B % 2) % 2 > 0);
}

void task3b() //����� 3 �) 
{

	setlocale(LC_ALL, "RUS");

	float x, a, b, y, k = -4, A, B;

	printf("������ � �� ������� �������\n������� �:\n");
	scanf("%f", &x);

	a = log((-1) * k * x);
	b = exp(2 * x) + (a * x);
	y = x * (a * a * a) + (b * b); 
	printf("����� ����� y ��� �������=%.0f\n", y);

	printf("������� � � �:\n");

	int cely;

	cely = y;

	scanf("%f %f", &A, &B);
	printf("\n");
	printf("%d", (int)A % 3 + (int)B % 3 + (int)cely % 3 == 0);
	printf("\n");
}