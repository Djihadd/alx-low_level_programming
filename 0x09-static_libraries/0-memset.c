#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: pointer to put the constant
 * @b: constant
 * @n: bytes to use
 *
 * Return: Returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int it;

	for (it = 0; n > 0; it++, n--)
	{
		s[it] = b;
	}

	return (s);
}
