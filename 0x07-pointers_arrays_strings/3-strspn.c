#include"main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: input pointer
 * @accept:input pointer 2
 *
 * Return: number of bytes in the initial segment of s
 *         which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int li, lj;

	for (li = 0; s[li] != '\0'; li++)
	{
		for (lj = 0; accept[lj] != s[lj] != s[li]; lj++)
		{
			if (accept[lj] == '\0')
				return (li);
		}
	}
	return (li);
}
