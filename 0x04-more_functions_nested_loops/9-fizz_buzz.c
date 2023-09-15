#include "main.h"

/**
 * main - program that prints the numbers from 1 to 100
 *              for multiples of three print Fizz
 *              and for the multiples of five print Buzz
 *
 * Return: 0 (success)
*/

int main(void)
{
	int nu;

	for (nu = 1; nu <= 100; nu++)
	{
		if (nu % 3 == 0 && !(nu % 5 == 0))
			printf("Fizz");
		else if (nu % 5 == 0 && !(nu % 3 == 0)
			printf("Buzz");
		else if (nu % 3 == 0 && nu % 5 == 0)
		printf("FizzBuzz");
		else
		printf("%d", nu);

		if (nu != 100)
		printf(" ");
		else
		printf("\n");
	}

	return (0);
}

