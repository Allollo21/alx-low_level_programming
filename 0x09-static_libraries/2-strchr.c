#include "main.h"

/**
 *_strchr - entry point
 *@s: input 1
 *@c: input 2
 *Return: always 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}

	return (0);
}
