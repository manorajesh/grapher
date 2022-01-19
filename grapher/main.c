#include <stdio.h>
#include <math.h>

#define MAXVAL 20

int grapher(double x, double y);
void func(double coe, double cons, double deg);

char graph[MAXVAL][MAXVAL];

void main()
{
	double coefficient = 2;
	double constant = 0;
	double degree = 1;

	func(coefficient, constant, degree);

	int i, j;
	for (i = MAXVAL-1; i > 0; --i) {
		for (j = 0; j < MAXVAL; ++j)
			printf("%c ", graph[j][i]);
		printf("\n");
	}
}

int grapher(double x, double y)
{
	if (y > MAXVAL || y < 0)
		return 0;

	graph[(int) x][(int) y] = '.';
	return 1;
}

void func(double coe, double cons, double deg)
{
	int x;
 	for (x = 0; x < MAXVAL; ++x)
		grapher(x, coe * pow(x, deg) + cons);
}