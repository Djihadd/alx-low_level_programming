#include"main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s: input
 *
 * Return: result
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			founDelimit = 1;
		else if (isLower(*s) && founDelimit)
		{
			*s -= 32;
			founDelimit = 0;
		}
		else
			founDelimit = 0;
		s++;
	}
	return (ptr);
}
