#include"main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: takes number input
 *
 * Return: 0 (success)
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
