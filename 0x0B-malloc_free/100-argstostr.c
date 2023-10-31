#include "main.h"
#include <stdlib.h>

/**
 *argstostr - entry point
 *@ac: integer input
 *@av: double pointer array
 *Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, w = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			w++;
	}

	w += ac;

	ptr = malloc(sizeof(char) * w + 1);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			ptr[z] = av[x][y];
			z++;
		}

		if (ptr[z] == '\0')
			ptr[z++] = '\n';
	}

	return (ptr);
}
