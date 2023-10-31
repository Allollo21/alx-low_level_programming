#include "main.h"
#include <stdlib.h>

/**
 *str_concat - add inputs for size
 *@s1: input 1
 *@s2: input 2
 *Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

	ptr = malloc(sizeof(char) * (x + y + 1));
	if (ptr == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		ptr[x] = s2[y];
		x++, y++;
	}

	ptr[x] = '\0';
	return (ptr);
}
