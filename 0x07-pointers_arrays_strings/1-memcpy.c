#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: destination memory
 *@src: memory to copy
 *@n: number
 *Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}

	return (dest);
}
