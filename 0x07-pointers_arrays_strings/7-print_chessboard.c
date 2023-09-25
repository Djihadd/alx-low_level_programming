#include"main.h"

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a: input pointer
 *
 * Return: pointer to the beginning of the located substring
 *          or NULL if the substring is not found.
*/

void print_chessboard(char (*a)[8])
{
	int itr, jtr;

	for (itr = 0; itr < 8; itr++)
	{
		for (jtr = 0; jtr < 8; jtr++)
		{
			_putchar(a[itr][jtr]);
		}
		_putchar('\n');
	}

}
