#include "main.h"

/**
 *rev_string - reverses an existing string
 *@s: char array
 *
 *Return: string
 */

void rev_string(char *s)
{
	int length = 0, j;
	char ch1, ch2;

	while (s[i] != '\0')
	{
		length++;
	}

	length--;

	for (j = 0; j < length; j++)
	{
		ch1 = s[j];
		ch2 = s[length];
		s[j] = ch2;
		s[length] = ch1;

		length--;
	}
}
