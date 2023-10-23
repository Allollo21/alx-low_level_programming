#include "main.h"

/**
 *_strspn - entry point
 *@s: char 1
 *@accept: char 2
 *Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				n++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (n);
		}

		s++;
	}

	return (n);
}
