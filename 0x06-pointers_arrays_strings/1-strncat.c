#include "main.h"

/**
 *_strncat - concatenates two strings
 *@dest: input 1
 *@src: input 2
 *@n: number input
 *Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
