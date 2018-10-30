#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	float a, b, c, d, x, x1, x2, re, im;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	printf("Въведи коефициентите a, b and c: \n");
	printf("Въведи a: "); scanf_s("%f", &a);
	printf("Въведи b: "); scanf_s("%f", &b);
	printf("Въведи c: "); scanf_s("%f", &c);

	if ((a == 0) && (b == 0))
	{
		printf("Изродено уравнение!\n");
	}
	else
	{
		if (a == 0)
		{
			x = (-c) / b;
			printf("x = %.2lf\n", x);
		}
		else
		{
			if (c == 0)
			{
				x1 = (-b) / a;
				x2 = 0;
				printf("x1 = %.2lf and x2 = %.2lf\n", x1, x2);
			}
			else
			{
				re = -b / (2 * a);
				d = b * b - 4 * a*c;
				im = sqrt(abs(d)) / (2 * a);

				if (d > 0)
				{
					x1 = re + im;
					x2 = re - im;
					printf("x1 = %.2lf and x2 = %.2lf\n", x1, x2);
				}
				else if (d < 0)
				{
					printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi\n", re, im, re, im);
				}
				else
				{
					x1 = re;
					x2 = x1;
					printf("x1 = %.2lf and x2 = %.2lf\n", x1, x2);
				}
			}
		}
	}

	system("pause");
	return 0;
}