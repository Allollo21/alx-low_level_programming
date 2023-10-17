#include "main.h"

/**
 *print_rev - prints a reversed string
 *@s: char array
 *
 *Return: string
 */

void print_rev(char *s)
{
	int num = 0;
	char ch;

	while (s[num] != 0)
	{
		num++;
	}

	num--;

	for (; num >= 0; num--)
	{
		ch = s[num];
		_putchar(ch);
	}

	_putchar('\n');
}
