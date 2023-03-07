#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals in a square matrix
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int b = 0;
	int d = 0;
	int r, c;

	for (r = 0; r < size; r++)
	{
		c = (r * size) + r;
		b += a[c];
	}

	for (r = 1; r <= size; r++)
	{
		c = (r * size) - r;
		d += a[c];
	}

	printf("%d, %d\n", b, d);
}
