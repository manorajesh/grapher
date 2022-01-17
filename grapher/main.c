#include <stdio.h>

#define MAXVAL 10

void grapher(int x[], int y[]);

void main()
{
	int coefficient = 1;
	int constant = 1;
	int degree = 1;

	int testx[] = { 1, 2, 3, 4, EOF };
	int testy[] = { 4, 3, 2, 1, EOF };
	grapher(testx, testy);
}

void grapher(int x[], int y[])
{
	// Size of arrays
	int e;
	for (e = 0; x[e] != EOF; ++e);
	int xsize = e;

	for (e = 0; y[e] != EOF; ++e);
	int ysize = e;

	// Error catching
	if (xsize > MAXVAL-1 || ysize > MAXVAL-1) {
		printf("Error: too many values; expected %d, got %d and %d", MAXVAL, xsize, ysize);
		exit();
	}

	// Plotter
	int c, i = 0, j = 0, l = 0;
	for (c = 0; c <= ysize; ++c) 
	{
		while (i < MAXVAL - y[l]) {
			printf("\n");
			++i;
		}

		while (j < x[l]) {
			printf(" ");
			++j;
		}
		printf("+");
		++l;
	}
}