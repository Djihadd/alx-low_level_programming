#include"main.h"

/**
 * print_square -  function that prints a square
 *
 * @size:  the size of the square
 *
 * Return: 0 (success)
*/

void print_square(int size)
{
	int row, colun;

	for (row = 1; row <= size; row++)
	{
		for (colun = 1; colun <= size; colun++)
			_putchar('#');
		_putchar('\n');
	}
}
