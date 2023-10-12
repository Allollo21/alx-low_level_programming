#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 *
 * Return: none
 */

void print_square(int size)
{
	int first, second;

	if (size <= 0)
		_putchar('\n');

	for (first = 0; first < size; first++)
	{
		for (second = 0; second < size; second++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
