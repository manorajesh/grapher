#include <stdio.h>
#include <math.h>

#define MAXVAL 10

int grapher(int x, int y);
void func(int coe, int cons, int deg);

char graph[MAXVAL][MAXVAL];

void main()
{
	int coefficient = 1;
	int constant = 0;
	int degree = 1;

	func(coefficient, constant, degree);

	int i, j;
	for (i = MAXVAL-1; i > 0; --i) {
		for (j = 0; j < MAXVAL; ++j)
			printf("%c ", graph[j][i]);
		printf("\n");
	}
}

int grapher(int x, int y)
{
	if (y > MAXVAL || y < 0)
		return 0;

	graph[x][y] = '.';
	return 1;
}

void func(int coe, int cons, int deg)
{
	int x;
 	for (x = 0; x < MAXVAL; ++x) {
		grapher(x, coe * pow(x, deg) + cons);
	}
}