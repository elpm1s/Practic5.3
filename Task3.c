#include <locale.h>      
#include <stdio.h> 

#define _USE_MATH_DEFINES
#include <math.h>

void main() //íîìåð 3 à)
{

	setlocale(LC_ALL, "RUS");

	int A, B;

	printf("Ââåäèòå À è Á äëÿ ïðîâåðêè óñëîâèÿ:\n");
	scanf("%d %d", &A, &B);

	printf("%d", (A % 2 + B % 2) % 2 > 0);
}

void main() //íîìåð 3 á) 
{

	setlocale(LC_ALL, "RUS");

	float x, a, b, y, k = -4, A, B;

	printf("Íàéäåì ó èç âòîðîãî çàäàíèÿ\nââåäèòå õ:\n");
	scanf("%f", &x);

	a = log((-1) * k * x);
	b = exp(2 * x) + (a * x);
	y = x * (a * a * a) + (b * b); 
	printf("öåëàÿ ÷àñòü y äëÿ óñëîâèÿ=%.0f\n", y);

	printf("Ââåäèòå À è Á:\n");

	int cely;

	cely = y;

	scanf("%f %f", &A, &B);
	printf("\n");
	printf("%d", (int)A % 3 + (int)B % 3 + (int)cely % 3 == 0);
	printf("\n");
}
