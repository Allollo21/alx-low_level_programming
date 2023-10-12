#include "main.h"

/**
 *print_diagonal - prints diagonal line on the terminal
 *@n: numbers of lines and columns
 *
 *Return: none
 */

void print_diagonal(int n)
{
	int first, second;

	for (first = 0; first < n; first++)
	{
		for (second = 0; second <= first; second++)
		{
			if (second != first)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\\');
			}
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
