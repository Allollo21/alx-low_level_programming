#include "main.h"
#include <stdlib.h>

/**
 **string_nconcat - concatenates n bytes of string
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	else
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!ptr)
		return (NULL);
	while (x < len1)
	{
		ptr[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		ptr[x++] = s2[y++];
	while (n >= len2 && x < (len1 + len2))
		ptr[x++] = s2[y++];
	ptr[x] = '\0';

	return (ptr);
}
