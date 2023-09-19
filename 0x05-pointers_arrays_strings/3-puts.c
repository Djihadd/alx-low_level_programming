#include"main.h"

/**
 * _puts - function that prints a string
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
