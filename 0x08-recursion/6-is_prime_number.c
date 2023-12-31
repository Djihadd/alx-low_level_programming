#include"main.h"
#include <stdio.h>
/**
 * is_prime_number - function that returns 1 if the input integer is
 *  a prime number otherwise return 0.
 *
 * @n: input
 * @othrn: int
 *  Return: 1 if the input integer is a prime number
 *          0 if it is not.
*/

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all nembers < n if they can divide it
 * @n: int
 * @othrn: int
 * Return: int
*/

int check_prime(int n, int othrn)
{
	if (othrn >= n && n > 1)
		return (1);
	else if (n % othrn == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, othrn + 1));
}
