#include"main.h"

/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci numbers
 *                starting with 1 and 2
 *
 * Return: 0 (success)
*/

int main(void)
{
	int count, initial;

	unsigned long f1 = 1, f2 = 2, su, mx = 100000000, flo = 0, f2o = 0, suo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (flo > 0)
			printf("%lu", flo);
		initial = numLengh(mx) - 1 - numLength(f1);

		while (flo > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}

		printf("%lu", f1);

		su = (f1 + f2) % mx;
		suo = flo + f2o + (f1 + f2) / mx;
		f1 = f2;
		flo = f2o;
		f2 = su;
		f2o = suo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
