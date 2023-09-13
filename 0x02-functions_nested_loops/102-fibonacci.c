#include"main.h"

/**
 * main - Entry point
 *
 * Descriptin: Write a program that prints the first 50
 *              Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, su;

	for (count = 0; count < 50; count++)
	{
		su = fib1 + fib2;
		printf("%lu", su);

		fib1 = fib2;
		fib2 = su;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
