#include"main.h"

/**
 * main - Entry point
 *
 * Description: write a program that finds and prints
 *              the sum of the even-valued terms
 *
 * Return: 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, su;
	float total_su;

	while (1)
	{
		su = fib1 + fib2;
		if (su > 4000000)
			break;

		if ((su % 2) == 0)
			total_su += su;

		fib1 = fib2;
		fib2 = su;
	}
	printf("%.0f\n", total_su);

	return (0);
}
