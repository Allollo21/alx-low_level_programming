#include "main.h"

/**
 *_strpbrk - entry point
 *@s: char 1
 *@accept: char 2
 *Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}

		s++;
	}

	return ('\0');
}
