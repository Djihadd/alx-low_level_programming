#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: 0 (success)
*/

void print_numbers(void)
{
	int nu = 0;

	do {
		_putchar(nu + 48);
		nu++;
	} while (nu >= 0 && nu <= 9);
	_putchar('\n');
}
