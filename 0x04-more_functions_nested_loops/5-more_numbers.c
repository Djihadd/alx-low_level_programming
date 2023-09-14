#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
*/

void more_numbers(void)
{
	int nu, row, count;

	for (row = 1; row <= 10; row++)
	{
		for (count = 0; count <= 14; count++)
		{
			nu = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				nu = count % 10;
			}
			_putchar(nu + 48);
		}
		_putchar('\n');
	}
}
