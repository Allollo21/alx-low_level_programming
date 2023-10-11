#include "main.h"

/**
 * print_times_table - prints time table
 * @n : use in times table
 * Return:void
 */

void print_times_table(int n)
{
	int num1 = 0, tt, num2;

	if (n < 0 || n > 15)
		return;

	while (num1 <= n)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			tt = num1 * num2;
			if (num2 == 0)
				_putchar('0' + tt);
			else if (tt < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + tt);
			}
			else if (tt < 100)
			{
				_putchar (' ');
				_putchar('0' + tt / 10);
				_putchar('0' + tt % 10);
			}
			else
			{
				_putchar('0' + tt / 100);
				_putchar('0' + (tt - 100) / 10);
				_putchar('0' + tt % 10);
			}
			if (num2 < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num1++;
	}
}
