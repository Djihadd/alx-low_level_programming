#include"main.h"

/**
 * print_buffer - function that prints a buffer.
 *
 * @b: input
 * @n: integer
 * @size: input 2
 *
 * Return: 0 if true ; 1 if false
*/

void print_buffer(char *b, int size)
{
	int start, end, n;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
