#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: number of arguments passed
 * @argv: pointer to an array of command line arguments
 *
 * Return: 0 success, 1 non zero fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
