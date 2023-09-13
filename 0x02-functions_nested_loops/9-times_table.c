#include"main.h"

/**
 * times_table - function that prints the 9 times table,
 *                starting with 0
 *
 * Return: 0 (success)
*/

void times_table(void)
{
	int nu, ult, prod;

	for (nu = 0; nu <= 9; nu++)
	{
		_putchar(48);
		for (ult = 1; ult <= 9; ult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = nu * ult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}
	}
	_putchar('\n');
}
