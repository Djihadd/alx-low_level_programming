#include"main.h"

/**
 * _puts: function that prints a string
 *
 * @str: string parameter input
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	-putchar('\n');
}
