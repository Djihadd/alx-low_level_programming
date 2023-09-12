#include"main.h"

/**
 * print_sign -  prints the sign of a number
 *
 * @n: takes integer type for function.
 *
 * Return: 1 if +, 0 if 0, -a if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
