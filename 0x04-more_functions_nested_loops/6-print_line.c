#include "main.h"

/**
 * print_line -  function that draws a straight line in the terminal
 *
 * @n: Where n is the number of times the character _ should be printed
*/

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('\n');
		_putchar('\n');
	}
}
