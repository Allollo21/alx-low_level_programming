#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - duplicate new memory space
 *@str: string
 *Return: always 0
 */
char *_strdup(char *str)
{
	char *ptr;
	int x = 0, y = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	ptr = malloc(sizeof(char) * (x + 1));
	if (ptr == NULL)
		return (NULL);
	for (y = 0; str[y]; y++)
		ptr[y] = str[y];

	return (ptr);
}
