#include"main.h"

/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: string parameter to print
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (*s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
