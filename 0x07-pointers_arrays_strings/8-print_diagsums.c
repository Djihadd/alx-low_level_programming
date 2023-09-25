#include"main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *                                  of a square matrix of integers.
 * @a: input pointer
 * @size: input size
*/

void print_diagsums(int *a, int size)
{
	int lt, c1 = 0, c2 = 0;

	for (lt = 0; lt < size; lt++)
	{
		c1 += a[lt];
		c2 += a[size - lt - 1];
		a += size;
	}
	printf("%d, ", c1);
	printf("%d\n", c2);
}
