#include"main.h"

/**
 * print_times_table - function that prints the n times table,
 *                         starting with 0.
 *
 * @n: takes number input
*/

void print_times_table(int n)
{
	int prod, ult, nu;

	if (n <= 15 && n >= 0)
	{
		for (nu = 0; nu <= n; nu++)
		{
			_putchar(48);
			for (ult = 1; ult <= n; ult++)
			{
				_putchar(',');
				_putchar(' ');

				prod = nu * ult;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');

				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
}
