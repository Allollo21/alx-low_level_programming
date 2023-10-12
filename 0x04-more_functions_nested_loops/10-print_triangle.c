#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: size of triangle
 *
 *Return: nothing
 */

void print_triangle(int size)
{
	int first, second, third;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (first = 0; first < size; first++)
	{
		for (second = 0; second < size; second++)
		{
			third = size - first - 1;

			if (second < third)
			{
				_putchar(' ');
			}
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
