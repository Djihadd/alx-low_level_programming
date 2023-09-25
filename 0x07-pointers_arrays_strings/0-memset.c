#include"main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: 1st input
 * @b: 2nd input
 * @n: 3ed input
 *
 * Return: Returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; i++, n--)
	{
		s[it] = b;
	}

	return (s);
}
