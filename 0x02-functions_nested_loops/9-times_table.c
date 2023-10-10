#include "main.h"

/**
 * times_table - prints tables
 * Return: void
 */

void times_table(void)
{
	int num1 = 0;
	int num2;
	int tt;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
		{
			tt = num1 * num2;
			if (num2 == 0)
			{
				_putchar('0' + tt);
			}
			else if (tt < 10)
			{
				_putchar(' ');
				_putchar('0' + tt);
			}
			else
			{
				_putchar('0' + tt / 10);
				_putchar('0' + tt % 10);
			}

			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
