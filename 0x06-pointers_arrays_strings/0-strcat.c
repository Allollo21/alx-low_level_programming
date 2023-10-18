#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: string 1
 *@src: string 2
 *Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
