#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 *
 * @dest: 1st input
 * @src: 2nd input
 * @n: 3ed input
 *
 * Return: Returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int it;

	for (it = 0; it < n; it++)
	{
		dest[it] = src[it];
	}
	return (dest);
}
