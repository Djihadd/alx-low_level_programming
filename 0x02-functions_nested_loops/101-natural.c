#include"main.h"

/**
 * main - program that computes and prints the sum of
 *           all the multiples of 3 or 5 below 1024
 *
 * Return: 0 (success)
*/

int main(void)
{
	int nu, su;

	for (nu = 0; nu <= 1024; nu++)
	{
		if (nu % 3 == 0 || nu % 5 == 0)
			su += nu;
	}
	printf("%d\n", su);

	return (0);
}
