#include "main.h"

/**
 * more_numbers- prints the numbers, from 0 to 14, 10 times
 *
 * Return: from 0 to 14 10 times, followed by a new line.
 */

void more_numbers(void)
{
	int first, second;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second <= 14; second++)
		{
			if (second > 9)
				_putchar((second / 10) + '0');

			_putchar((second % 10) + '0');
		}

		_putchar('\n');
	}
}
