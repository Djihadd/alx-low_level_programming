#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				prinf("Error\n");
				return (1);
			}
		}
		add += arg[i]
	}
}
