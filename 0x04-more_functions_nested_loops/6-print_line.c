#include "main.h"

/**
 *print_line - draws a straight line in the terminal
 *@n: the number of times the character _
 *
 *Return: none;
 */

void print_line(int n)
{
	int counter;

	for (counter = 0; counter < n; counter++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
