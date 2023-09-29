#include"main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *
 * @s: input
 *
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int ln = 0;

	if (*s > '\0')
	{
		ln += _strlen_recursion(s + 1) + 1;
	}
	return (ln);
}
