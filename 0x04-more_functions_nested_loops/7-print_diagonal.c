#include"main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int lnh, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnh = 1; lnh <= n; lnh++)
		{
			for (space = 1; space <= lnh; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
