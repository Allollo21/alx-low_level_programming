#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies a string
 *Description: copies the string pointer, null byte, dest pointer
 *@dest: destiny
 *@src: font
 *
 *Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
