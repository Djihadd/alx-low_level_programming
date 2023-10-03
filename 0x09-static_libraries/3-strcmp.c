#include"main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: 1st input
 * @s2: 2nd input
 *
 * Return: result
*/

int _strcmp(char *s1, char *s2)
{
	int c, s;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
