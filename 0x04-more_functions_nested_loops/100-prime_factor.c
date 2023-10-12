#include <stdio.h>

/**
 * main -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */

int main(void)
{
	long num1, num2;

	num1 = 612852475143;

	for (num2 = 2; num1 > num2; num2++)
	{
		while (num1 % num2 == 0)
		{
			num1 = num1 / num2;
		}
	}

	printf("%lu", num2);
	putchar('\n');

	return (0);
}
