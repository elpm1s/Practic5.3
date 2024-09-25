#include <locale.h>      
#include <stdio.h> 

#define _USE_MATH_DEFINES
#include <math.h>

void task3a() //номер 3 а)
{

	setlocale(LC_ALL, "RUS");

	int A, B;

	printf("Введите А и Б для проверки условия:\n");
	scanf("%d %d", &A, &B);

	printf("%d", (A % 2 + B % 2) % 2 > 0);
}

void task3b() //номер 3 б) 
{

	setlocale(LC_ALL, "RUS");

	float x, a, b, y, k = -4, A, B;

	printf("Найдем у из второго задания\nвведите х:\n");
	scanf("%f", &x);

	a = log((-1) * k * x);
	b = exp(2 * x) + (a * x);
	y = x * (a * a * a) + (b * b); 
	printf("целая часть y для условия=%.0f\n", y);

	printf("Введите А и Б:\n");

	int cely;

	cely = y;

	scanf("%f %f", &A, &B);
	printf("\n");
	printf("%d", (int)A % 3 + (int)B % 3 + (int)cely % 3 == 0);
	printf("\n");
}