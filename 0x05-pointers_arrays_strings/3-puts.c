#include "main.h"

/**
 *_puts - stdout a string type
 *@str: char array
 *
 *Return: string
 */

void _puts(char *str)
{
	int num;

	for (num = 0; *(str + num) != '\0'; num++)
		_putchar(*(str + i));

	_putchar('\n');
}
