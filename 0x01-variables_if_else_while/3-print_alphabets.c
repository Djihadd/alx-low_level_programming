#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and than in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'Z';


	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}


	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
