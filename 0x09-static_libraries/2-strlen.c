#include "main.h"

/**
 *_strlen - function that gives the length of a string
 *@s : s is a character
 *
 *Return: value is num
 */

int _strlen(char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	return (num);
}
